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

#include "filesystem/directory.h"

#include <unistd.h>
#include <cstring>
#include <pwd.h>
#include <string>
#include <sys/stat.h>

#include "logger/logger.h"

namespace {

char const* const kFolderSuffix = "GPA/";

std::string GetUserDirectory()
{
    // Use the HOME environment variable, which should exist on POSIX.
    // http://pubs.opengroup.org/onlinepubs/009695399/basedefs/xbd_chap08.html
    const char *homedir = nullptr;
    if ((homedir = getenv("HOME"))) {
        return homedir;
    }
    GPA_LOG_ERROR("%s", "HOME is not defined!");
    return "";
}

// Creates a directory if it doesn't exist.
int MakeDirectory(const char* path, mode_t mode)
{
    struct stat st;
    int status = 0;
    if (stat(path, &st) != 0) {
        // Directory does not exist. EEXIST for race condition
        if (mkdir(path, mode) != 0 && errno != EEXIST) {
            status = -1;
        }
    } else if (!S_ISDIR(st.st_mode)) {
        errno = ENOTDIR;
        status = -1;
    }

    return status;
}

// Creates a directory structure recursively, working top-down.
int MakeDirectoryRecursive(const char* path, mode_t mode = 0777)
{
    char* sp = nullptr;
    char* copypath = strdup(path);
    int status = 0;
    char* pp = copypath;
    while (status == 0 && (sp = strchr(pp, '/')) != 0) {
        // New subdirectory found, so create that level of the
        // directory path.
        if (sp != pp) {
            *sp = '\0';
            status = MakeDirectory(copypath, mode);
            if (status != 0) {
                GPA_LOG_ERROR("Error %s occurred when making directory: %s", strerror(errno), path);
            }
            *sp = '/';
        }
        pp = sp + 1;
    }
    if (status == 0) {
        status = MakeDirectory(path, mode);
    }
    free(copypath);
    return status;
}


} // anonymous namespace

namespace gpa {
namespace filesystem {

//! Returns the GPA folder in the user's documents folder (~/Documents/GPA)
TCHAR const* Directory::GetDocumentsFolder(void)
{
    static std::string userDir = GetUserDirectory();
    if (userDir.empty()) {
        return nullptr;
    }
    static std::string const documentsFolder = userDir + "/Documents/" + kFolderSuffix;
    MakeDirectoryRecursive(documentsFolder.c_str());
    return documentsFolder.c_str();
}

//! Returns the preferences folder for GPA
TCHAR const* Directory::GetPreferencesFolder(void)
{
    static std::string userDir = GetUserDirectory();
    if (userDir.empty()) {
        return nullptr;
    }
    static std::string const preferencesFolder = userDir + "/.config/" + kFolderSuffix;
    MakeDirectoryRecursive(preferencesFolder.c_str());
    return preferencesFolder.c_str();
}

//! Returns the application support folder for GPA
TCHAR const* Directory::GetApplicationSupportFolder(void)
{
    static std::string userDir = GetUserDirectory();
    if (userDir.empty()) {
        return nullptr;
    }
    static std::string const supportFolder = userDir + "/.local/share/" + kFolderSuffix;
    MakeDirectoryRecursive(supportFolder.c_str());
    return supportFolder.c_str();
}

bool Directory::MakeDirectoryRecursive(TCHAR const* path)
{
    return (::MakeDirectoryRecursive(path) == 0);
}

}  // namespace filesystem
}  // namespace gpa
