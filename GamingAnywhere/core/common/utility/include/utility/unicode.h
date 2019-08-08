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

#pragma once

#include <wchar.h>

#include "igpa-config.h"

namespace gpa {
namespace utility {

/**
 * @brief UnicodeToUTF8 - convert from Unicode string to UTF8 string
 * @param unicode NULL-terminated Unicode string
 * @param utf8 Buffer to recieve Unicode string converted to UTF8
 * @param utf8len Length of \a utf8
 * @return Number of bytes actually converted. If Unicode string would convert
 *         to UTF8 string longer than \a utf8len, \a utf8 will receive a version
 *         of \a unicode truncated to \a utf8len bytes. If truncation occurs,
 *         NULL-termination is not guaranteed.
 *         If conversion was not possible for any reason, this function returns -1.
 */
int UnicodeToUTF8(wchar_t const* unicode, char* utf8, size_t utf8len);

/**
 * @brief UTF8ToUnicode - convert from Unicode string to UTF8 string
 * @param utf8 NULL-terminated UTF8 string
 * @param unicode Buffer to recieve UTF8 string converted to Unicode
 * @param unicodeLen Length of \a unicode
 * @return Number of bytes actually converted. If UTF8 string would convert
 *         to Unicode string longer than \a unicodeLen, \a unicode will receive a version
 *         of \a utf8 truncated to \a unicodeLen bytes. If truncation occurs,
 *         NULL-termination is not guaranteed.
 *         If conversion was not possible for any reason, this function returns -1.
 */
int UTF8ToUnicode(char const* utf8, wchar_t* unicode, size_t unicodeLen);

/**
 * @brief UnicodeLen Calculate length in characters of \a unicode.
 * @param unicode NULL-terminated Unicode string
 * @return Number of Unicode characters in \a unicode.
 */
int UnicodeLen(wchar_t const* unicode);
    
/**
* @brief Appends str2 to str1.
* @details str1 must be large enough to hold both str1 + str2.
*/
void Append(TCHAR* str1, size_t maxSize, wchar_t const* str2);

/**
* @brief Appends str2 to str1.
* @details str1 must be large enough to hold both str1 + str2.
*/
void Append(TCHAR* str1, size_t maxSize, char const* str2);

} // namespace utility
} // namespace gpa
