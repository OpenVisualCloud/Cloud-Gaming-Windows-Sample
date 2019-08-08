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

namespace gpa {
namespace filesystem {

void Directory::FindAllFiles(const char *directoryName, FindAllFilesCallback callback, const char *pattern, void* userData)
{
    (void)directoryName;
    (void)callback;
    (void)pattern;
    (void)userData;

    // intentionally empty for now
}

void Directory::DeleteEntry(TCHAR const* directory, TCHAR const* fileName)
{
    (void)directory;
    (void)fileName;

    // intentionally empty for now
}

//! Returns the GPA folder in the user's documents folder (~/Documents/GPA)
TCHAR const* Directory::GetDocumentsFolder(void)
{
    // intentionally empty for now
    return nullptr;
}

//! Returns the preferences folder for GPA
TCHAR const* Directory::GetPreferencesFolder(void)
{
    // intentionally empty for now
    return nullptr;
}

//! Returns the application support folder for GPA
TCHAR const* Directory::GetApplicationSupportFolder(void)
{
    // intentionally empty for now
    return nullptr;
}

bool Directory::MakeDirectoryRecursive(TCHAR const* /*path*/)
{
    // intentionally empty for now
    return false;
}

TCHAR const* Directory::GetTempDirectory()
{
    // intentionally empty for now
    return nullptr;
}

void Directory::GetCurrentExecutableDirectory(TCHAR* const /*path*/, size_t const /*pathSize*/)
{
    // intentionally empty for now
}

} // namespace filesystem
} // namespace gpa
