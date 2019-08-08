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

// This file contains implementations of Unicode abstractions specific to
// the Windows platform

#include "utility/unicode.h"

#include <cstdlib>
#include <strsafe.h>

#include "utility/common.h"

namespace gpa {
namespace utility {

int UnicodeToUTF8(const wchar_t *unicode, char *utf8, size_t utf8len)
{
    size_t rtn = 0;
    errno_t code = wcstombs_s(&rtn, utf8, utf8len, unicode, _TRUNCATE);

    // if no error, then an extra null will be appended and included in the count;
    // we don't want to report that
    if (code == 0) {
        return (int)rtn - 1;
    }

    // if the output was truncated, a null will be the last character and included in the count
    if (code == STRUNCATE) {
        return (int)rtn;
    }

    return -1;
}

int UTF8ToUnicode(const char *utf8, wchar_t *unicode, size_t unicodeLen)
{
    size_t rtn = 0;
    errno_t code = mbstowcs_s(&rtn, unicode, unicodeLen, utf8, _TRUNCATE);

    // if no error, then an extra null will be appended and included in the count;
    // we don't want to report that
    if (code == 0) {
        return (int)rtn - 1;
    }

    // if the output was truncated, a null will be the last character and included in the count
    if (code == STRUNCATE) {
        return (int)rtn;
    }

    return -1;
}

void Append(TCHAR* str1, size_t maxSize, wchar_t const* str2)
{
    StringCchCat(str1, maxSize, str2);
}

void Append(TCHAR* str1, size_t maxSize, char const* str2)
{
    TCHAR wstr[kMaxPathLength] = {}; 
    UTF8ToUnicode(str2, wstr, kMaxPathLength);
    Append(str1, maxSize, wstr);
}

} // namespace utility
} // namespace gpa
