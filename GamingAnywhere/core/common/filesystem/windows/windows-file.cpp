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

#include <Windows.h>

namespace gpa {
namespace filesystem {

bool File::GetFileInfo(const TCHAR *url, FileDescriptor *fileDesc)
{
    if (!fileDesc) {
        return false;
    }

    HANDLE hFile = CreateFile(url,
                              GENERIC_READ,
                              FILE_SHARE_READ | FILE_SHARE_WRITE,
                              NULL,
                              OPEN_EXISTING,
                              0,
                              NULL);

    if (hFile == INVALID_HANDLE_VALUE) {
        return false;
    }

    LARGE_INTEGER size = {};
    size.LowPart = GetFileSize(hFile, (LPDWORD)&size.HighPart);

    fileDesc->size = (uint64_t)size.QuadPart;

    CloseHandle(hFile);

    return true;
}

}  // namespace filesystem
}  // namespace gpa
