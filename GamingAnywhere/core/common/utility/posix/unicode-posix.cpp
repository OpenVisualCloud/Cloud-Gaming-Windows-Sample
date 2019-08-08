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

#include "utility/unicode.h"

#include <cstdlib>
#include <cstring>

#include "utility/common.h"

// This file contains implementations of Unicode abstractions specific to
// POSIX-compliant platforms

namespace gpa {
namespace utility {

// we need to match the different behavior of the Windows implementation (which
// uses the "secure" versions that have different behavior); specifically, those
// implementations always add a null terminator -- for truncated conversions, it
// will still add a null in the last possible character; for non-truncated versions,
// it seems to add a null after the converted string, even if there was a null
// there already (and it counts these nulls in the return value.
int UnicodeToUTF8(const wchar_t *unicode, char *utf8, size_t utf8len)
{
    size_t len = wcslen(unicode);

    // if the string will truncate into the output, then adjust down one character
    // for the max length, to leave room for a null terminator

    size_t adjust = len >= utf8len ? 1 : 0;

    int rtn = (int)wcstombs(utf8, unicode, utf8len - adjust);

    if (rtn <= 0) {
        return -1;
    }

    utf8[rtn] = '\0';

    return rtn + (int)adjust;
}

int UTF8ToUnicode(const char *utf8, wchar_t *unicode, size_t unicodeLen)
{
    size_t len = strlen(utf8);

    // if the string will truncate into the output, then adjust down one character
    // for the max length, to leave room for a null terminator

    size_t adjust = len >= unicodeLen ? 1 : 0;

    int rtn = (int)mbstowcs(unicode, utf8, unicodeLen - adjust);

    if (rtn <= 0) {
        return -1;
    }

    unicode[rtn] = L'\0';

    return rtn + (int)adjust;
}
    
void Append(TCHAR* str1, size_t maxSize, wchar_t const* str2)
{
    char utf8[kMaxPathLength] = {};
    UnicodeToUTF8(str2, utf8, kMaxPathLength);
    strncat(str1, utf8, maxSize);
}

void Append(TCHAR* str1, size_t maxSize, char const* str2)
{
    strncat(str1, str2, maxSize);
}

} // namespace utility
} // namespace gpa
