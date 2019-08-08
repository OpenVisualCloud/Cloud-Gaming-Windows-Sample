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

#include "utility/version.h"

#include <windows.h>

namespace gpa {
namespace utility {

bool GetFileVersion(wchar_t const* const filename, int* const version)
{
    if (!version) {
        return false;
    }

    DWORD verHandle = 0;
    DWORD const verSize = GetFileVersionInfoSize(filename, &verHandle);
    if (verSize == 0) {
        return false;
    }
    
    bool versionFound = false;
    uint8_t* verData = new uint8_t[verSize];
    if (GetFileVersionInfo(filename, verHandle, verSize, verData)) {
        UINT size = 0;
        LPBYTE lpBuffer = NULL;
        if (VerQueryValue(verData, L"\\", (LPVOID*)&lpBuffer, &size) && size) {
            VS_FIXEDFILEINFO* verInfo = (VS_FIXEDFILEINFO*)lpBuffer;
            // dwSignature, if valid, is expected to contain magic number 0xFEEF04BD
            // https://msdn.microsoft.com/en-us/library/windows/desktop/ms646997(v=vs.85).aspx
            if (verInfo->dwSignature == 0xFEEF04BD) {
                // Doesn't matter if you are on 32 bit or 64 bit,
                // DWORD is always 32 bits, so first two revision numbers
                // come from dwFileVersionMS, last two come from dwFileVersionLS
                version[0] = (verInfo->dwFileVersionMS >> 16) & 0xFFFF; // major
                version[1] = (verInfo->dwFileVersionMS >> 0) & 0xFFFF; // minor
                version[2] = (verInfo->dwFileVersionLS >> 16) & 0xFFFF; // build
                version[3] = (verInfo->dwFileVersionLS >> 0) & 0xFFFF; // revision
                versionFound = true;
            }
        }
    }
    
    delete[] verData;
    return versionFound;
}

} // namespace utility
} // namespace gpa
