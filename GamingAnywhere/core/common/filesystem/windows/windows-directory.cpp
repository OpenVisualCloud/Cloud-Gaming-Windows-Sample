/*
 Copyright (2018) Intel Corporation

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

#include "filesystem/directory.h"
#include "filesystem\file-desc.h"

#include <strsafe.h>
#include <ShlObj.h>
#include <cassert>
#include <cstdlib>
#include <string>
#include <PathCch.h>

#include "utility/common.h"
#include "utility/windows-utilities.h"
#include "logger/logger.h"

namespace {

TCHAR const kFolderSuffix[6] = L"/GPA/";

void Normalize(TCHAR* str)
{
    TCHAR* pCh = str;
    while ((pCh = _tcschr(str, _T('\\'))) != nullptr) {
        *pCh = _T('/');
    }
}

void GetNormalizedWindowsFolder(REFKNOWNFOLDERID folderId, TCHAR* destBuffer)
{
    PWSTR path = nullptr;
    HRESULT const hr = SHGetKnownFolderPath(folderId, 0, nullptr, &path);

    if (FAILED(hr)) {
        assert(SUCCEEDED(hr) && "Could not get path to folder");
        return;
    }
    StringCchCopy(destBuffer, kMaxPathLength, path);
    Normalize(destBuffer);
}

bool DirectoryExists(TCHAR* path)
{
    if (!path) {
        return false;
    }
    DWORD fileAttributes = GetFileAttributesW(path);
    if (fileAttributes == INVALID_FILE_ATTRIBUTES) {
        // Double check that the path actually doesn't exist by
        // verifying the error code.  It's possible otherwise
        // that the file attributes just aren't simply accessible for
        // another reason.
        DWORD err = GetLastError();
        if (err == ERROR_FILE_NOT_FOUND || err == ERROR_PATH_NOT_FOUND ||
            err == ERROR_INVALID_NAME || err == ERROR_BAD_NETPATH) {
            return false;
        }
    }

    return (fileAttributes & FILE_ATTRIBUTE_DIRECTORY) != 0;
}

}  // namespace

namespace gpa {
namespace filesystem {

void Directory::FindAllFiles(TCHAR const* directoryName, FindAllFilesCallback callback,
                             TCHAR const* pattern, void* userData)
{
    if (!directoryName || !callback) {
        return;
    }

    WIN32_FIND_DATA findData = {};
    TCHAR pathPattern[kMaxPathLength] = {};
    int const kUsable =
        kMaxPathLength - 2;  // -2, because of the \ in the path and the null terminator
    size_t sz = 0;
    size_t directoryNameLen = 0;
    size_t patternNameLen = 0;

    if (!pattern) {
        pattern = _T("*");
    }

    StringCchLength(directoryName, kMaxPathLength, &sz);
    directoryNameLen = sz;
    StringCchLength(pattern, kMaxPathLength, &sz);
    patternNameLen = sz;

    if (directoryNameLen + patternNameLen > kUsable) {
        return;
    }

    StringCchCopy(pathPattern, kMaxPathLength, directoryName);
    StringCchCat(pathPattern, kMaxPathLength, _T("\\"));
    StringCchCat(pathPattern, kMaxPathLength, pattern);

    HANDLE hFind = FindFirstFile(pathPattern, &findData);
    if (hFind != INVALID_HANDLE_VALUE) {
        do {
            FileDescriptor desc = {};
            LARGE_INTEGER fileSize = {};

            fileSize.HighPart = findData.nFileSizeHigh;
            fileSize.LowPart = findData.nFileSizeLow;

            desc.name = findData.cFileName;
            desc.parentDirectory = directoryName;
            desc.size = (size_t)fileSize.QuadPart;
            desc.directory = (findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) != 0;

            callback(&desc, userData);
        } while (FindNextFile(hFind, &findData));
    }

    FindClose(hFind);
}

TCHAR const* Directory::GetDocumentsFolder(void)
{
    static TCHAR documentsPath[kMaxPathLength] = {};
    if (documentsPath[0] == '\0') {
        GetNormalizedWindowsFolder(FOLDERID_Documents, documentsPath);
        StringCchCat(documentsPath, kMaxPathLength, kFolderSuffix);
        MakeDirectoryRecursive(documentsPath);
    }
    return documentsPath;
}

TCHAR const* Directory::GetPreferencesFolder(void)
{
    static TCHAR preferencesPath[kMaxPathLength] = {};
    if (preferencesPath[0] == '\0') {
        GetNormalizedWindowsFolder(FOLDERID_RoamingAppData, preferencesPath);
        StringCchCat(preferencesPath, kMaxPathLength, kFolderSuffix);
        MakeDirectoryRecursive(preferencesPath);
    }
    return preferencesPath;
}

TCHAR const* Directory::GetApplicationSupportFolder(void)
{
    static TCHAR appDataPath[kMaxPathLength] = {};
    if (appDataPath[0] == '\0') {
        GetNormalizedWindowsFolder(FOLDERID_LocalAppData, appDataPath);
        StringCchCat(appDataPath, kMaxPathLength, kFolderSuffix);
        MakeDirectoryRecursive(appDataPath);
    }
    return appDataPath;
}

void Directory::GetDirectoryForPath(TCHAR const* const path, TCHAR* const parentDirectory,
                                    int const parentDirectoryLength)
{
    if (path == nullptr || parentDirectory == nullptr) {
        return;
    }

    TCHAR driveLetter[4] = {};
    TCHAR dirname[kMaxPathLength] = {};
    if (_wsplitpath_s(path, driveLetter, 4, dirname, parentDirectoryLength, nullptr, 0, nullptr,
                      0) == 0) {
        StringCchCopy(parentDirectory, parentDirectoryLength, driveLetter);
        StringCchCat(parentDirectory, parentDirectoryLength, dirname);
    }
}
void Directory::DeleteEntry(TCHAR const* directory, TCHAR const* fileName)
{
    TCHAR pathname[kMaxPathLength] = {};
    int const kUsable =
        kMaxPathLength - 2;  // -1, because of the \ in the path and the null terminator
    size_t sz = 0;
    size_t directoryNameLen = 0;
    size_t fileNameLen = 0;

    StringCchLength(directory, kMaxPathLength, &sz);
    directoryNameLen = sz;
    StringCchLength(fileName, kMaxPathLength, &sz);
    fileNameLen = sz;

    if (directoryNameLen + fileNameLen > kUsable) {
        return;
    }

    StringCchCopy(pathname, kMaxPathLength, directory);
    StringCchCat(pathname, kMaxPathLength, _T("\\"));
    StringCchCat(pathname, kMaxPathLength, fileName);

    DeleteFile(pathname);
}

TCHAR const* Directory::GetTempDirectory()
{
    static TCHAR tempPath[kMaxPathLength] = {};
    //! if path already exists
    if (wcslen(tempPath) > 0) {
        return tempPath;
    }
    GetTempPath(kMaxPathLength, tempPath);
    return tempPath;
}

bool Directory::MakeDirectoryRecursive(TCHAR const* path)
{
    TCHAR folder[kMaxPathLength] = {};
    TCHAR const* end = wcschr(path, _T('/'));
    while (end != nullptr) {
        wcsncpy(folder, path, end - path + 1);

        // Only try to create the subdirectory if it doesn't
        // already exist.
        if (!DirectoryExists(folder)) {
            if (!CreateDirectory(folder, NULL)) {
                DWORD err = GetLastError();
                if (err != ERROR_SUCCESS) {
                    GPA_LOG_ERROR("Failed to create directory with error %d", err);
                    return false;
                }
            }
        }
        end = wcschr(++end, _T('/'));
    }
    return true;
}

void Directory::GetCurrentExecutableDirectory(TCHAR* const path, size_t const pathSize)
{
    assert(path && "Path ptr is invalid");
    if (!path) {
        return;
    }

    utility::GetDLLPath((LPCWSTR)&GetCurrentExecutableDirectory, true, path, pathSize);
    if (PathCchRemoveFileSpec(path, pathSize) != S_OK) {
        assert(0 && "PathCchRemoveFileSpec failed");
        return;
    }
}

}  // namespace filesystem
}  // namespace gpa
