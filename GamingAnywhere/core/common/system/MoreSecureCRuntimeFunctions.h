/*
// Copyright (c) 2015-2016 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
*/
#pragma once

#ifndef __MIN
#define __MIN(a,b)    (((a) < (b)) ? (a) : (b))
#endif

#if defined(_WIN32) && !defined(snprintf)
// Starting with VC++ 14 (aka Visual Studio 2015) snprintf is oficially supported.
// Only define this for lesser VS version
#if (defined(_MSC_VER) && (_MSC_VER < 1900))
    #define snprintf  _snprintf
#endif
#endif


#if defined(_WIN32)

#define GM_SPRINTF_S sprintf_s
#define GM_SNPRINTF_S _snprintf_s
#define GM_VSNPRINTF_S vsnprintf_s
#define GM_MEMCPY_S memcpy_s
#define GM_MEMMOVE_S memmove_s
#define GM_STRCPY_S strcpy_s
#define GM_WCSCPY_S wcscpy_s
#define GM_STRNCPY_S strncpy_s
#define GM_WCSNCPY_S wcsncpy_s
#define GM_STRCAT_S strcat_s
#define GM_STRNCAT_S strncat_s
#define GM_STRTOK_S strtok_s
#define GM_WCSTOMBS_S wcstombs_s
#define GM_DUPENV_S _dupenv_s

#else

#define GM_SPRINTF_S(buffer, sizeOfBuffer, format, ...) \
    snprintf(buffer, sizeOfBuffer, format, __VA_ARGS__)

#define GM_SNPRINTF_S(buffer, sizeOfBuffer, count, format, ...) \
    snprintf(buffer, __MIN((sizeOfBuffer)-1, count), format, __VA_ARGS__)

#define GM_VSNPRINTF_S(buffer, sizeOfBuffer, count, format, va_list) \
    vsnprintf(buffer, __MIN((sizeOfBuffer)-1, count), format, va_list)

#define GM_MEMCPY_S(dest, dest_size, src, count) \
    memcpy(dest, src, __MIN(dest_size, count))

#define GM_MEMMOVE_S(dest, dest_size, src, count) \
    memmove(dest, src, __MIN(dest_size, count))

#define GM_STRCPY_S(dest, dest_size, src) \
    strncpy(dest, src, dest_size); if (dest_size > 0) dest[dest_size-1] = '\0';

#define GM_WCSCPY_S(dest, dest_size, src) \
    wcsncpy(dest, src, dest_size); if (dest_size > 0) dest[dest_size-1] = L'\0';

#define GM_STRNCPY_S(dest, dest_size, src, count) \
    strncpy(dest, src, __MIN(dest_size, count)); if (dest_size > 0) dest[dest_size-1] = '\0';

#define GM_WCSNCPY_S(dest, dest_size, src, count) \
    wcsncpy(dest, src, __MIN(dest_size, count)); if (dest_size > 0) dest[dest_size-1] = '\0';

#define GM_STRCAT_S(dest, dest_size, src) \
    strncat(dest, src, dest_size - strlen(dest) - 1)

#define GM_STRNCAT_S(dest, dest_size, src, count) \
    strncat(dest, src, __MIN(count, dest_size - strlen(dest) - 1))

#define GM_STRTOK_S strtok_r

#endif


#define GM_STRLEN_S(buffer, sizeOfBuffer) \
    strnlen(buffer, sizeOfBuffer)

#define GM_WCSLEN_S(buffer, sizeOfBuffer) \
    wcsnlen(buffer, sizeOfBuffer)
