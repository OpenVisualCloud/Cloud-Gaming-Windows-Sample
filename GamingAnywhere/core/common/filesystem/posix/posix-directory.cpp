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
#include "filesystem/file-desc.h"
#include "filesystem/file.h"

#include <glob.h>
#include <sys/stat.h>
#include <unistd.h>
#include <libgen.h>
#include <cstdio>
#include <cstring>
#include <dlfcn.h>

#include "utility/common.h"

namespace gpa {
namespace filesystem {

void Directory::FindAllFiles(const char *directoryName, FindAllFilesCallback callback, const char *pattern, void* userData)
{
    if (!callback) {
        return;
    }

    // TEMP: find anything that begins with "thread-" and open it as a SequentialStorage
    char buf[kMaxPathLength] = {};
    snprintf(buf, kMaxPathLength, "%s/%s", directoryName, pattern ? pattern : "*");
    glob_t g = {};

    if (glob(buf, 0, nullptr, &g)) {
        return;
    }

    // +1 because we add a path separator to the glob buf above
    size_t offset = strlen(directoryName) + 1;

    for (size_t i=0; i<g.gl_pathc; ++i) {
        FileDescriptor desc = {};

        File::GetFileInfo(g.gl_pathv[i], &desc);

        // we only want the filename, not the whole pathname
        desc.name = &(g.gl_pathv[i])[offset];
        desc.parentDirectory = directoryName;

        callback(&desc, userData);
    }

    globfree(&g);
}

void Directory::GetDirectoryForPath(TCHAR const* const path, TCHAR* const parentDirectory, int const parentDirectoryLength)
{
    if(path == nullptr || parentDirectory == nullptr){
        return;
    }
    //! dirname modifies given input in-place,
    //! so first transfer to temp buffer and then get path
    snprintf(parentDirectory, (size_t)parentDirectoryLength, "%s", path);
    dirname((char*)parentDirectory);
}
void Directory::DeleteEntry(TCHAR const* directory, TCHAR const* fileName)
{
    char pathName[kMaxPathLength] = {};
    snprintf(pathName, kMaxPathLength, "%s/%s", directory, fileName);
    unlink(pathName);
}

TCHAR const* Directory::GetTempDirectory()
{
    return "/tmp";
}

void Directory::GetCurrentExecutableDirectory(TCHAR* const path, size_t const pathSize)
{
    Dl_info     info;
    static TCHAR tempPath[kMaxPathLength] = {};
    //! For some strange reason, on linux, subsequent calls to dladdr
    //! would return directory path up one level from the executable. 
    //! So I am caching the path from the first call and then copy it back up. 
    if(strlen(tempPath) > 0){
        snprintf(path, pathSize, "%s", tempPath);
        return;
    }
    dladdr((void *)GetCurrentExecutableDirectory, &info);
    snprintf(tempPath, kMaxPathLength, "%s", dirname((char*)info.dli_fname));
    snprintf(path, pathSize, "%s", tempPath);
}

} // namespace filesystem
} // namespace gpa
