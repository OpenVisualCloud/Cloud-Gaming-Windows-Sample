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

#include "filesystem/file.h"
#include "filesystem/file-desc.h"

#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

#include <cstdio>
#include <cstring>
#include <string>

namespace gpa {
namespace filesystem {

bool File::GetFileInfo(TCHAR const* url, FileDescriptor* descriptor)
{
    struct stat st;
    if (stat(url, &st)) {
        return false;
    }

    // it is valid to call this function with a NULL descriptor if they just want
    // to check if the file exists
    if (descriptor) {
        // reset the descriptor struct
        *descriptor = {};

        std::string pathname(url);
        std::string::size_type pos = pathname.find_last_of('/');
        if (pos != std::string::npos) {
            // it's a path, just want the filename
            descriptor->name = &(url[pos]);
        } else {
            // it's just the filename
            descriptor->name = url;
        }

        descriptor->directory = S_ISDIR(st.st_mode);

        if (!descriptor->directory) {
            descriptor->size = (uint64_t)st.st_size;
        }
    }

    return true;
}

} // namespace filesystem
} // namespace gpa
