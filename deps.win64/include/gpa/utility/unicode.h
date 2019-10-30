/******************************************************************************
        Copyright 2019 Intel Corporation.
 
This software and the related documents are Intel copyrighted materials,
and your use of them is governed by the express license under which they
were provided to you ("License"). Unless the License provides otherwise,
you may not use, modify, copy, publish, distribute, disclose or transmit
this software or the related documents without Intel's prior written
permission.


 This software and the related documents are provided as is, with no express
or implied warranties, other than those that are expressly stated in the
License.

******************************************************************************/

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

}  // namespace utility
}  // namespace gpa
