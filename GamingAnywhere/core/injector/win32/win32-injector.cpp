/*
 Copyright (2017) Intel Corporation

  The source code contained or described herein and all documents related to
 the source code ("Material") are owned by Intel Corporation or its suppliers
 or licensors. Title to the Material remains with Intel Corporation or its
 suppliers and licensors. The Material contains trade secrets and proprietary
 and confidential information of Intel or its suppliers and licensors. The
 Material is protected by worldwide copyright and trade secret laws and treaty
 provisions. No part of the Material may be used, copied, reproduced, modified,
 published, uploaded, posted, transmitted, distributed, or disclosed in any way
 without Intel's prior express written permission.

  No license under any patent, copyright, trade secret or other intellectual
 property right is granted to or conferred upon you by disclosure or delivery
 of the Materials, either expressly, by implication, inducement, estoppel or
 otherwise. Any license under such intellectual property rights must be express
 and approved by Intel in writing.
 */

#include <Windows.h>
#include <assert.h>
#include <shlwapi.h>
#include <string.h>
#include <strsafe.h>
#include <cinttypes>
#include <string>
#include <PathCch.h>
#include <process.h>
#include "injector/injector.h"
#include "utility/common.h"
#include "utility/windows-utilities.h"
#include "logger/logger.h"

namespace {

constexpr wchar_t const* const kBaseShimName = L"igpa-shim";

std::wstring Widen(char const* const utf8String)
{
    int const requiredLength = MultiByteToWideChar(CP_UTF8, 0, utf8String, -1, nullptr, 0);
    std::wstring wideString;
    wideString.resize(requiredLength);
    int const charactersWritten =
        MultiByteToWideChar(CP_UTF8, 0, utf8String, -1, const_cast<wchar_t*>(wideString.c_str()),
                            static_cast<int>(wideString.length()));
    if (charactersWritten != requiredLength) {
        assert(requiredLength == charactersWritten && "Multi-byte to UTF16 conversion failed");
    }
    return wideString;
}

std::wstring AbsolutePath(char const* const utf8String)
{
    std::wstring dynamicLibraryPath;
    dynamicLibraryPath.resize(kMaxPathLength);
    GetFullPathNameW(Widen(utf8String).c_str(), static_cast<DWORD>(dynamicLibraryPath.length()),
                     const_cast<wchar_t*>(dynamicLibraryPath.c_str()), nullptr);
    return dynamicLibraryPath;
}

/// @brief Returns a path to the GPA shim. This assumes the shim is next to
/// the current module (whether the shim directly or gpa-capture)
std::wstring GetGpaDirectory()
{
    wchar_t shimPath[kMaxPathLength] = {};
	if (!gpa::utility::GetDLLPath((LPCWSTR)(&GetGpaDirectory), true, shimPath, kMaxPathLength)) {
        return std::wstring();
    }

    // Trim file from the path (shim.dll)
    HRESULT const hr = PathCchRemoveFileSpec(shimPath, kMaxPathLength);
    if (FAILED(hr)) {
        assert(SUCCEEDED(hr) && "Could not remove file from shim path");
        return std::wstring();
    }
    return shimPath;
}

// from MSDN: https://msdn.microsoft.com/en-us/library/ms680582(VS.85).aspx
void _PrintError(DWORD const error, char const* const lpszFunction)
{
    LPVOID lpMsgBuf = nullptr;
    LPVOID lpDisplayBuf = nullptr;

    FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM |
                       FORMAT_MESSAGE_IGNORE_INSERTS,
                   nullptr, error, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPSTR)&lpMsgBuf, 0,
                   nullptr);

    // Display the error message and exit the process
    lpDisplayBuf = (LPVOID)LocalAlloc(LMEM_ZEROINIT, (lstrlen((LPCTSTR)lpMsgBuf) +
                                                      lstrlen((LPCTSTR)lpszFunction) + 40) *
                                                         sizeof(TCHAR));
    if (lpDisplayBuf && lpMsgBuf) {
        StringCchPrintfA((LPSTR)lpDisplayBuf, LocalSize(lpDisplayBuf) / sizeof(TCHAR),
                         "%s failed with error %d: %s", lpszFunction, error, lpMsgBuf);
        GPA_LOG_ERROR("%s", static_cast<const char*>(lpDisplayBuf));
    }
    if (lpMsgBuf) {
        LocalFree(lpMsgBuf);
    }
    if (lpDisplayBuf) {
        LocalFree(lpDisplayBuf);
    }
}

PROCESS_INFORMATION LaunchSuspendedApplication(wchar_t const* const application,
                                               wchar_t const* const workingDirectory,
                                               DWORD const additionalProcessCreationFlags = 0,
                                               int const argc = 0,
                                               char const* const argv[] = nullptr,
                                               HANDLE stdInput = NULL, HANDLE stdOutput = NULL,
                                               HANDLE stdError = NULL)
{
    // C-convention passes the application name as argv[0] to the target's
    // 'main' function. Replicate this ourselves
    wchar_t command_line[32768] = {0};
    wcscat_s(command_line, application);
    wcscat_s(command_line, L" ");
    for (int ii = 0; ii < argc; ++ii) {
        wcscat_s(command_line, Widen(argv[ii]).c_str());
        wcscat_s(command_line, L" ");
    }

    STARTUPINFOW startupInfo = {0};
    startupInfo.cb = sizeof(startupInfo);
    startupInfo.hStdInput = stdInput;
    startupInfo.hStdOutput = stdOutput;
    startupInfo.hStdError = stdError;
    if (stdInput || stdOutput || stdError) {
        startupInfo.dwFlags = STARTF_USESTDHANDLES;
    }
    PROCESS_INFORMATION processInfo = {};
    SetLastError(ERROR_SUCCESS);


    	CreateProcessW(nullptr,                                            // lpApplicationName
                   command_line,                                       // lpCommandLine
                   nullptr,                                            // lpProcessAttributes
                   nullptr,                                            // lpThreadAttributes
                   TRUE,                                               // bInheritHandles
                   CREATE_SUSPENDED | additionalProcessCreationFlags,  // dwCreationFlags
                   nullptr,                                            // lpEnvironment
                   workingDirectory,                                   // lpCurrentDirectory
                   &startupInfo,                                       // lpStartupInfo
                   &processInfo);                                      // lpProcessInformation
    return processInfo;
}

}  // anonymous namespace

namespace gpa {

InjectionResult InjectSuspendedApplication(uint32_t const pid)
{
    HANDLE const process = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
    if (process == nullptr) {
        _PrintError(GetLastError(), "OpenProcess");
        return InjectionResult::kInjectionFailed;
    }

    // Determine if this is an x86 or x64 process
    SYSTEM_INFO systemInfo = {0};
    GetNativeSystemInfo(&systemInfo);
    bool is32bitTarget = true;
    if (systemInfo.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64) {
        BOOL wow64Process = FALSE;
        // Check the target process
        if (!IsWow64Process(process, &wow64Process)) {
            _PrintError(GetLastError(), "IsWow64Process");
            assert(0);
        }
        is32bitTarget = (wow64Process == TRUE);
    }

    // Get the path to the injector
    std::wstring const injectorPath =
        GetGpaDirectory() + L"\\gpa-injector" + (is32bitTarget ? L"-x86" : L"-x64") + L".exe";

    // Launch injector
    auto const pidString = std::to_string(pid);
    char const* const argv[] = {
        pidString.c_str(),
    };
    int const argc = _countof(argv);
    PROCESS_INFORMATION const processInfo =
        LaunchSuspendedApplication(injectorPath.c_str(), nullptr, CREATE_NO_WINDOW, argc, argv);
    assert(processInfo.dwProcessId);
    // Resume process
    DWORD result = ResumeThread(processInfo.hThread);
    if (result == -1) {
        GPA_LOG_ERROR("Failed to resume suspended thread (%d)", GetLastError());
        return InjectionResult::kInjectionFailed;
    }

    GPA_LOG_INFO("%s", "Waiting for injector to exit...");
    WaitForSingleObject(processInfo.hProcess, INFINITE);
    return InjectionResult::kSuccess;
}

InjectionResult LaunchAndInjectApplication(char const* const application,
                                           char const* const workingDirectory, int const argc,
                                           char const* const* argv,
                                           InjectionProperties const& injectionProperties)
{
    std::wstring fullPathTargetApplication = AbsolutePath(application);

    // Get wide character version of workingDirectory
    auto wideWorkingDirectoryStorage = Widen(workingDirectory);
    if (workingDirectory == nullptr) {
        wchar_t workingDirFromAppPath[kMaxPathLength]{};
        if (0 == _wsplitpath_s(fullPathTargetApplication.c_str(), nullptr, 0, workingDirFromAppPath,
                               fullPathTargetApplication.size(), nullptr, 0, nullptr, 0)) {
            wideWorkingDirectoryStorage.assign(workingDirFromAppPath);
        }
    }

    //
    // Creates the pipes used for stdout and stdin by the child process. Each pipe has a 'read' and
    // a 'write' end. The child process needs the 'write' end for stdout and the 'read' end for
    // stdin. The parent process needs the other ends.
    //
    // Both ends of each pipe have to be created at the same time with the same security attributes.
    // This means both ends are inheritable which isn't quite what we want. The child process does
    // not need to read from its stdout for example. Temporary versions of ends that don't need to
    // be inherited are created. These will then be duplicated without the 'inheritable' flag for
    // use by the parent process.
    //
    HANDLE childStd_IN_Rd = NULL;
    HANDLE childStd_IN_Wr = NULL;
    HANDLE childStd_IN_Wr_Temp = NULL;
    HANDLE childStd_OUT_Rd = NULL;
    HANDLE childStd_OUT_Rd_Temp = NULL;
    HANDLE childStd_OUT_Wr = NULL;

    SECURITY_ATTRIBUTES saAttr;
    saAttr.nLength = sizeof(SECURITY_ATTRIBUTES);
    saAttr.bInheritHandle = TRUE;
    saAttr.lpSecurityDescriptor = NULL;

    BOOL pipesCreatedSuccessfully = CreatePipe(&childStd_OUT_Rd_Temp, &childStd_OUT_Wr, &saAttr, 0);
    pipesCreatedSuccessfully &= CreatePipe(&childStd_IN_Rd, &childStd_IN_Wr_Temp, &saAttr, 0);

    if (pipesCreatedSuccessfully) {
        pipesCreatedSuccessfully &=
            DuplicateHandle(GetCurrentProcess(), childStd_OUT_Rd_Temp, GetCurrentProcess(),
                            &childStd_OUT_Rd, 0, FALSE, DUPLICATE_SAME_ACCESS);
        pipesCreatedSuccessfully &=
            DuplicateHandle(GetCurrentProcess(), childStd_IN_Wr_Temp, GetCurrentProcess(),
                            &childStd_IN_Wr, 0, FALSE, DUPLICATE_SAME_ACCESS);
    }

    CloseHandle(childStd_OUT_Rd_Temp);
    CloseHandle(childStd_IN_Wr_Temp);

    // Set environment variable to communicate shared memory name to the child process.
    std::string const sharedMemoryName = GetSharedMemoryName(_getpid());
    if (!SetEnvironmentVariableA(kSharedMemoryEnvVar, sharedMemoryName.c_str())) {
        GPA_LOG_ERROR("Setting environment variable to communicate shared memory name failed!");
    }

    //
    // The target process is launched with the inheritable 'read' end of stdin and the inheritable
    // 'write' end for stdout.
    //
    PROCESS_INFORMATION const processInfo =
        LaunchSuspendedApplication(fullPathTargetApplication.c_str(),
                                   wideWorkingDirectoryStorage.c_str(), 0, argc, argv,
                                   childStd_IN_Rd, childStd_OUT_Wr, nullptr);

    if (processInfo.dwProcessId == 0) {
        DWORD const error = GetLastError();
        switch (error) {
        case ERROR_FILE_NOT_FOUND:  // Target not found
            return InjectionResult::kTargetNotFound;
        case ERROR_DIRECTORY:  // Directory name is invalid
            return InjectionResult::kInvalidDirectory;
        case ERROR_INVALID_NAME:  // Working directory was not found
            return InjectionResult::kInvalidDirectory;
        default:
            // TODO: The 'GetLastError' error codes aren't documented
            // anywhere. If a new failure case is found, print a proper
            // message describing the error
            assert(0);
        }
        return InjectionResult::kInjectionFailed;
    }

    //
    // The parent process does not need these handles.
    //
    CloseHandle(childStd_OUT_Wr);
    CloseHandle(childStd_IN_Rd);

    // Create the shared memory
    HANDLE sharedPropertiesHandle =
        OpenFileMappingA(FILE_MAP_ALL_ACCESS, false, sharedMemoryName.c_str());
    if (sharedPropertiesHandle == nullptr) {
        sharedPropertiesHandle =
            CreateFileMappingA(INVALID_HANDLE_VALUE, nullptr, PAGE_READWRITE, 0,
                               sizeof(injectionProperties), sharedMemoryName.c_str());
    }
    assert(sharedPropertiesHandle);
    auto* const sharedProperties =
        static_cast<InjectionProperties*>(MapViewOfFile(sharedPropertiesHandle, FILE_MAP_ALL_ACCESS,
                                                        0, 0, sizeof(injectionProperties)));
    assert(sharedProperties);
    if (sharedProperties) {
        *sharedProperties = injectionProperties;
    }

    InjectSuspendedApplication(processInfo.dwProcessId);

    // Resume process
    ResumeThread(processInfo.hThread);

    GPA_LOG_INFO("%s", "Waiting for process to exit...");

    //
    // Read data from the child stdout pipe and write it to our own stdout. ReadFile blocks until
    // data is available. Once the last handle to the pipe is closed (which happens when the child
    // process exits), ReadFile will return and break.
    //
    if (pipesCreatedSuccessfully) {
        DWORD bytesRead, bytesWritten;
        BYTE buffer[4096] = {};
        HANDLE hParentStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
        for (;;) {
            if (!ReadFile(childStd_OUT_Rd, buffer, sizeof(buffer), &bytesRead, NULL)) {
                break;
            }

            if (!WriteFile(hParentStdOut, buffer, bytesRead, &bytesWritten, NULL)) {
                break;
            }
        }

        CloseHandle(sharedPropertiesHandle);
    }
    CloseHandle(childStd_OUT_Rd);
    CloseHandle(childStd_OUT_Wr);

    return InjectionResult::kSuccess;
}

}  // namespace gpa
