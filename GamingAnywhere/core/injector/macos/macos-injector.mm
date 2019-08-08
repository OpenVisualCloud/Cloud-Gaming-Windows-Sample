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
#import <AppKit/AppKit.h>
#import <Foundation/Foundation.h>
#include <dlfcn.h>
#include <libproc.h>
#include <chrono>
#include <thread>
#include <inttypes.h>
#include "logger/logger.h"

namespace {

constexpr const char* const kShimName = "libigpa-shim.dylib";

NSString* GetAbsolutePath(NSString* const relativePath)
{
    NSString* const standardizedPath = relativePath.stringByStandardizingPath;
    if ([standardizedPath hasPrefix:@"/"]) {
        return standardizedPath;
    }
    NSFileManager* const fileManager = NSFileManager.defaultManager;
    NSString* const currentDirectory = fileManager.currentDirectoryPath;
    NSString* const absolutePath =
        [currentDirectory stringByAppendingPathComponent:standardizedPath];

    return absolutePath;
}

NSArray* ConvertArguments(int argc, char const* const* const argv)
{
    NSMutableArray* arguments = [NSMutableArray new];
    assert(argv && "List of arguments is null!");
    for (int ii = 0; ii < argc; ii++) {
        if (argv[ii] != nullptr) {
            [arguments addObject:@(argv[ii])];
        }
    }
    return arguments;
}

}  // anonymous

namespace gpa {

InjectionResult InjectSuspendedApplication(uint32_t /*pid*/)
{
    return InjectionResult::kUnsupported;
}

InjectionResult LaunchAndInjectApplication(char const* const application,
                                           char const* const workingDirectory, int const argc,
                                           char const* const* const argv,
                                           InjectionProperties const& injectionProperties)
{
    if (application == nullptr) {
        return InjectionResult::kInvalidParameter;
    }

    // get paths to target and shim
    Dl_info info = {};
    NSString* gpaExecutableFolder = nil;
    int const result = dladdr((void*)(&gpa::LaunchAndInjectApplication), &info);
    if (result == 0) {
        GPA_LOG_ERROR("Could not determine path to current executable."
                      "Using working directory to find shim");
        gpaExecutableFolder = NSFileManager.defaultManager.currentDirectoryPath;
    } else {
        // Strip executable from path name
        gpaExecutableFolder = @(info.dli_fname).stringByDeletingLastPathComponent;
    }
    NSString* const absoluteDynamicLibraryPath =
        [NSString stringWithFormat:@"%@/%s", gpaExecutableFolder, kShimName];

    NSString* appString = GetAbsolutePath(@(application));
    if ([NSFileManager.defaultManager fileExistsAtPath:appString] == NO ||
        [NSFileManager.defaultManager fileExistsAtPath:absoluteDynamicLibraryPath] == NO) {
        return InjectionResult::kTargetNotFound;
    }

    if ([appString.pathExtension caseInsensitiveCompare:@"app"] == NSOrderedSame) {
        NSBundle* const bundle = [NSBundle
            bundleWithPath:[NSWorkspace.sharedWorkspace fullPathForApplication:appString]];
        appString = bundle.executablePath;
    }

    // set up shared memory
    // Shared memory between processes on macOS requires R+W privileges; add these flags
    // here to avoid having to run GPA with sudo.
    std::string const sharedMemoryName =
        GetSharedMemoryName(NSProcessInfo.processInfo.processIdentifier);
    int const error = setenv(kSharedMemoryEnvVar, sharedMemoryName.c_str(), 1);
    if (error) {
        perror("Could not set environment variable to communicate shared memory name.");
    }
    int const sharedMemoryDesc =
        shm_open(sharedMemoryName.c_str(), O_RDWR | O_CREAT, S_IWUSR | S_IRUSR);
    InjectionProperties* sharedProperties = nullptr;
    if (sharedMemoryDesc == -1) {
        perror("Could not open shared memory");
    } else {
        if (ftruncate(sharedMemoryDesc, sizeof(injectionProperties))) {
            perror("Setting shared memory size failed");
        }
        sharedProperties = static_cast<InjectionProperties*>(
            mmap(nullptr, sizeof(injectionProperties), PROT_READ | PROT_WRITE, MAP_SHARED,
                 sharedMemoryDesc, 0));

        if (sharedProperties) {
            *sharedProperties = injectionProperties;
        }
    }

    // launch application
    NSTask* const task = [NSTask new];
    NSDictionary* const originalEnvironment = [[NSProcessInfo processInfo] environment];
    NSMutableDictionary* newEnvironment =
        [[NSMutableDictionary alloc] initWithDictionary:originalEnvironment];
    newEnvironment[@"DYLD_INSERT_LIBRARIES"] = absoluteDynamicLibraryPath;
    task.environment = newEnvironment;
    task.launchPath = appString;
    if ((argc > 0) && argv) {
        [task setArguments:ConvertArguments(argc, argv)];
    }
    if (workingDirectory) {
        task.currentDirectoryPath = @(workingDirectory);
    }
    [task launch];
    [task waitUntilExit];

    // Wait for all processes to exit
    uint32_t lastLiveProcessCount = 0;
    bool waitedAfterNoProcessAlive = false;
    char processPath[PROC_PIDPATHINFO_MAXSIZE] = {};

    for (;;) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        uint32_t liveProcessCounter = 0;
        uint32_t processCounter = __sync_fetch_and_add(&sharedProperties->processCounter, 0);
        for (uint32_t ii = 0; ii < processCounter; ++ii) {
            __sync_synchronize();
            int32_t pid = sharedProperties->pids[ii];
            if (pid == 0) {
                continue;
            }

            if (proc_pidpath(pid, processPath, sizeof(processPath)) <=
                0) {  // process does not exists
                GPA_LOG_DEBUG("Process %" PRIi32 " closed", pid);
                __sync_fetch_and_and(&sharedProperties->pids[ii], 0);  // set 0
                continue;
            }

            ++liveProcessCounter;
        }

        if (liveProcessCounter == 0) {
            if (!waitedAfterNoProcessAlive) {
                std::this_thread::sleep_for(std::chrono::seconds(3));
                waitedAfterNoProcessAlive = true;
            } else {
                break;
                // Quit only if we waited couple of seconds after the last process exited
                // Child process may still be initializing when the parent process is gone
                // resulting in 0 detected live processes
            }
        } else {
            waitedAfterNoProcessAlive = false;
        }

        if (lastLiveProcessCount != liveProcessCounter) {
            GPA_LOG_DEBUG("Waiting for %" PRIu32 " processes to exit", liveProcessCounter);
            lastLiveProcessCount = liveProcessCounter;
        }
    }

    GPA_LOG_INFO("Finished waiting for all injected processes");

    // close shared memory
    munmap(sharedProperties, sizeof(injectionProperties));
    shm_unlink(sharedMemoryName.c_str());
    [newEnvironment release];
    [task release];

    return InjectionResult::kSuccess;
}

}  // namespace gpa
