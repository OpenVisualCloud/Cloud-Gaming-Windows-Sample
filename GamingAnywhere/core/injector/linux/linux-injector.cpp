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

#include "injector/injector.h"
#include "logger/logger.h"

#include <spawn.h>
#include <unistd.h>
#include <libgen.h>
#include <dlfcn.h>
#include <alloca.h>
#include <sys/wait.h>
#include <elf.h>

// for shared memory
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/mman.h>

#include <cassert>
#include <climits>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <string>

#define BASE_SHIM_NAME_32 "libigpa-shim-x86.so"
#define BASE_SHIM_NAME_64 "libigpa-shim-x64.so"

constexpr size_t kMaxPathLen = 32768;

namespace gpa {

InjectionResult InjectSuspendedApplication(uint32_t /*pid*/)
{
    return InjectionResult::kUnsupported;
}

bool isElfExecutableOfClass(char const* const application, unsigned char const elfClass)
{
    unsigned char e_ident[EI_NIDENT] = {};
    FILE* fileHandle = nullptr;
    fileHandle = fopen(application, "rb");
    if (fileHandle == nullptr) {
        return false;
    }
    auto const readCount = fread(e_ident, sizeof(e_ident), 1, fileHandle);
    if (readCount != 1) {
        return false;
    }
    fclose(fileHandle);
    return e_ident[EI_CLASS] == elfClass;
}

gpa::InjectionResult LaunchChildApplication(char const* application, char const* workingDirectory,
                                            int const argc, char const* const* argv)
{
    // execv requires non-const char* for argv. In order to facilitate this, we
    // allocate space for each mutable arg.

    int index = 0;
    // argc + 2, because 1 for application path at front, 1 at the end for nullptr
    char** targetArgv = (char**)alloca(sizeof(char*) * ((size_t)argc + 2));
    targetArgv[0] = const_cast<char*>(application);

    if (argv) {
        while (argv[index]) {
            // If the arguments string is empty, don't try to add it to argv. An empty
            // string in argv is untraditional, and some games don't handle it well.
            if (argv[index][0] == '\0') {
                continue;
            }
            targetArgv[index + 1] = const_cast<char*>(argv[index]);
            ++index;
        }
    }
    targetArgv[index + 1] = nullptr;

    if (workingDirectory) {
        GPA_LOG_INFO("Using working dir = %s", workingDirectory);
        if (chdir(workingDirectory)) {
            GPA_LOG_ERROR("%s", "Could not set current working dir!");
        }
    }

    index = 0;
    while (targetArgv[index]) {
        GPA_LOG_DEBUG("Argv[%d] = %s", index, targetArgv[index]);
        ++index;
    }

    execv(targetArgv[0], targetArgv);

    GPA_LOG_ERROR("%s", "If you see this message, execv() did not launch your application.");
    return gpa::InjectionResult::kInjectionFailed;
}

InjectionResult LaunchAndInjectApplication(char const* const application,
                                           char const* const workingDirectory, int const argc,
                                           char const* const* argv,
                                           InjectionProperties const& injectionProperties)
{
    (void)injectionProperties;

    struct stat sb = {};
    if (stat(application, &sb) != 0) {
        GPA_LOG_ERROR("%s", "Could not access the target application");
        return gpa::InjectionResult::kTargetNotFound;
    }

    if (!(sb.st_mode & S_IXUSR)) {
        GPA_LOG_ERROR("%s", "Target application does not have execute permission");
        return gpa::InjectionResult::kInjectionFailed;
    }

    // get paths to target and shim
    Dl_info info = {};
    char gpaExecutableFolder[kMaxPathLen] = {};
    char gpaShimLocation[kMaxPathLen] = {};
    // targetWorkingDirectory must be static to prevent from
    // compilation error: "might be clobbered by ‘longjmp’ or ‘vfork’"
    static thread_local char* targetWorkingDirectory = nullptr;
    int const result = dladdr((void*)(&gpa::LaunchAndInjectApplication), &info);
    if (result == 0) {
        GPA_LOG_ERROR("%s",
                      "Could not determine path to current executable. "
                      "Using working directory to find shim");
        if (!getcwd(gpaShimLocation, kMaxPathLen)) {
            return InjectionResult::kInjectionFailed;
        }
    } else {
        strncpy(gpaExecutableFolder, info.dli_fname, kMaxPathLen);
        dirname(gpaExecutableFolder);
        // realpath changes the string in-place, so we don't care
        // about return value, since it will point to gpaShimLocation anyway
        // It's needed to prevent from compilation error
        char* const gpaRealPath = realpath(gpaExecutableFolder, gpaShimLocation);
        (void)gpaRealPath;
    }

    targetWorkingDirectory = (char*)alloca(sizeof(char) * kMaxPathLen);

    if (!workingDirectory) {
        strncpy(targetWorkingDirectory, gpaShimLocation, kMaxPathLen);
    } else {
        strncpy(targetWorkingDirectory, workingDirectory, kMaxPathLen);
    }

    // get a unique name for the shared memory and set it in an env var
    // to communicate to the shim
    char shmFileName[1024] = {};
    std::string const sharedMemoryName = GetSharedMemoryName(getpid());
    snprintf(shmFileName, 1024, "/dev/shm/%s", sharedMemoryName.c_str());
    int const error = setenv(kSharedMemoryEnvVar, sharedMemoryName.c_str(), 1);
    if (error) {
        perror("Could not set environment variable to communicate shared memory name.");
    }

    // share injection properties with the shim
    int fd = shm_open(sharedMemoryName.c_str(), O_RDWR | O_CREAT | O_EXCL, 0644);
    void* shmem = nullptr;

    if (fd > 0) {
        int rtn = ftruncate(fd, sizeof(InjectionProperties));

        if (!rtn) {
            shmem = mmap(nullptr, sizeof(InjectionProperties), PROT_READ | PROT_WRITE, MAP_SHARED,
                         fd, 0);

            if (shmem) {
                *(InjectionProperties*)shmem = injectionProperties;
            }
        }
    }

    std::string shimLocation(gpaShimLocation);
    char const* libraryPath = getenv("LD_LIBRARY_PATH");

    if (libraryPath) {
        shimLocation += ':';
        shimLocation += libraryPath;
    }

    setenv("LD_LIBRARY_PATH", shimLocation.c_str(), 1);
    if (isElfExecutableOfClass(application, ELFCLASS32)) {
        setenv("LD_PRELOAD", BASE_SHIM_NAME_32, 1);
    } else if (isElfExecutableOfClass(application, ELFCLASS64)) {
        setenv("LD_PRELOAD", BASE_SHIM_NAME_64, 1);
    } else {
        setenv("LD_PRELOAD", BASE_SHIM_NAME_32 ":" BASE_SHIM_NAME_64, 1);
        GPA_LOG_INFO("%s",
                     "Target application is not ELF executable - will preload shims for both "
                     "architectures, expect wrong ELF class error messages");
    }

    pid_t const pid = vfork();
    if (pid < 0) {
        return InjectionResult::kInjectionFailed;
    }

    if (pid == 0) {
        // Child process
        return LaunchChildApplication(application, targetWorkingDirectory, argc, argv);
    } else {
        // Parent process - wait for game to finish then return
        int childstatus = 0;
        waitpid(pid, &childstatus, 0);
    }

    // release shared memory, when all child processes are finished
    if (shmem) {
        munmap(shmem, sizeof(InjectionProperties));
    }

    // close the shmem handle, if open
    if (fd > 0) {
        close(fd);

        // clean up after ourselves
        unlink(shmFileName);
    }

    return InjectionResult::kSuccess;
}

}  // namespace gpa
