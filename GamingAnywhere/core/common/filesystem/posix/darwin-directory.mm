/*
 Copyright (2016) Intel Corporation

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
#include "logger/logger.h"

#import <Foundation/Foundation.h>

namespace {

char const *const kFolderSuffix = "/GPA/";

bool CreateDirectoryRecursive(NSString *const directory)
{
    NSFileManager *const fileManager = [NSFileManager defaultManager];
    NSError *  error                 = nil;
    BOOL const result                = [fileManager createDirectoryAtPath:directory
                               withIntermediateDirectories:YES
                                                attributes:nil
                                                     error:&error];
    if (error) {
        GPA_LOG_ERROR("Directory creation failed: %s", error.description.UTF8String);
    } else if (result == NO) {
        GPA_LOG_ERROR("%s", "Directory creation failed with unknown error!");
    }
    return result;
}

}  // anonymous namespace

namespace gpa {
namespace filesystem {

// These below methods use statics to cache Cocoa variables so char* can be
// returned as opposed to having to deep copy out every call.
// ~/Documents/GPA
TCHAR const* Directory::GetDocumentsFolder(void)
{
    static NSFileManager *const fileManager = [NSFileManager defaultManager];
    static NSArray *const urlsArray         = [[fileManager URLsForDirectory:NSDocumentDirectory
                                                           inDomains:NSUserDomainMask] copy];
    assert(urlsArray.count == 1);  // TODO: Can this return >1? If so, what does that mean?
    if (urlsArray.count == 0) {
        return nullptr;
    }
    static NSURL const *const documentsUrl       = urlsArray[0];
    static NSString *const    documentsDirectory = [[documentsUrl.path stringByAppendingString:@(kFolderSuffix)] copy];
    ::CreateDirectoryRecursive(documentsDirectory);
    return documentsDirectory.UTF8String;
}

// ~/Library/Preferences/GPA
TCHAR const* Directory::GetPreferencesFolder(void)
{
    static NSString const *const preferencesPath      = [@"~/Library/Preferences" stringByStandardizingPath];
    static NSString *const       preferencesDirectory = [preferencesPath stringByAppendingString:@(kFolderSuffix)];
    ::CreateDirectoryRecursive(preferencesDirectory);
    return preferencesDirectory.UTF8String;
}

// ~/Library/Application Support/GPA
TCHAR const* Directory::GetApplicationSupportFolder(void)
{
    static NSFileManager *const fileManager = [NSFileManager defaultManager];
    static NSArray *const urlsArray         = [fileManager URLsForDirectory:NSApplicationSupportDirectory
                                                          inDomains:NSUserDomainMask];
    assert(urlsArray.count == 1);  // TODO: Can this return >1? If so, what does that mean?
    if (urlsArray.count == 0) {
        return nullptr;
    }
    static NSURL const *const appSupportUrl       = urlsArray[0];
    static NSString *const    appSupportDirectory = [appSupportUrl.path stringByAppendingString:@(kFolderSuffix)];
    ::CreateDirectoryRecursive(appSupportDirectory);
    return appSupportDirectory.UTF8String;
}

bool Directory::MakeDirectoryRecursive(TCHAR const* path)
{
    return ::CreateDirectoryRecursive(@(path));
}

}  // namespace filesystem
}  // namespace gpa
