/*
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
*/

#pragma once

/* #undef HAVE_PTHREAD_H */

#if defined(UNICODE) || defined(_UNICODE)
    #define GPA_METRICS_UNICODE
#endif

#if defined(_WIN32)
    #if defined(GPA_METRICS_EXPORTS)
        #define GPA_METRICS_EXPORT extern "C" __declspec(dllexport)
        #define GPA_METRICS_CPP_EXPORT extern __declspec(dllexport)
        #define GPA_METRICS_CLASS_EXPORT __declspec(dllexport)
    #else
        #define GPA_METRICS_EXPORT extern "C" __declspec(dllimport)
        #define GPA_METRICS_CPP_EXPORT extern __declspec(dllimport)
        #define GPA_METRICS_CLASS_EXPORT __declspec(dllimport)
    #endif

    #include <tchar.h>

    #if defined(UNICODE) || defined(_UNICODE)
        #if !defined(STD_STRING)
            #define STD_STRING std::wstring
            #define SPRINTF(dst, count, fmt, ...) swprintf_s(dst, count, fmt, __VA_ARGS__)
            #define STRCMP(a, b) wcscmp(a, b)
            #define ATOI(str) _wtoi(str)
            #define TCHAR_FORMAT_SPECIFIER "%ls"
            #define TO_STRING std::to_wstring
        #endif
    #else
        #if !defined(STD_STRING)
            #define STD_STRING std::string
            #define SPRINTF(dst, count, fmt, ...) sprintf_s(dst, count, fmt, __VA_ARGS__)
            #define STRCMP(a, b) strcmp(a, b)
            #define ATOI(str) atoi(str)
            #define TCHAR_FORMAT_SPECIFIER "%s"
            #define TO_STRING std::to_string
        #endif
    #endif

    #if !defined(STRCPY)
        #define STRCPY(dst, src, dstSize) strncpy_s(dst, dstSize, src, dstSize - 1)
    #endif
#else
    #define __STDC_WANT_LIB_EXT1__ 1
    #include <stdio.h>
    #include <string.h>
    #if defined(GPA_METRICS_EXPORTS)
        #define GPA_METRICS_EXPORT extern "C" __attribute__((visibility("default")))
        #define GPA_METRICS_CPP_EXPORT __attribute__((visibility("default")))
        #define GPA_METRICS_CLASS_EXPORT __attribute__((visibility("default")))
    #else
        #define GPA_METRICS_EXPORT extern "C"
        #define GPA_METRICS_CPP_EXPORT
        #define GPA_METRICS_CLASS_EXPORT
    #endif
    #if !defined(STD_STRING)
        #if defined(__APPLE__)
            #define STRCPY(dst, src, dstSize) strlcpy(dst, src, dstSize)
        #else
            #define STRCPY(dst, src, dstSize) strncpy(dst, src, dstSize)
        #endif
        #define TCHAR char
        #define _T(str) str
        #define _tmain main
        #define STD_STRING std::string
        #if defined(__STDC_LIB_EXT1__)
            #define SPRINTF(dst, count, fmt, ...) sprintf_s(dst, count, fmt, __VA_ARGS__)
        #else
            #define SPRINTF(dst, count, fmt, ...) snprintf(dst, count, fmt, __VA_ARGS__)
        #endif
        #define STRCMP(a, b) strcmp(a, b)
        #define ATOI(str) atoi(str)
        #define TCHAR_FORMAT_SPECIFIER "%s"
        #define TO_STRING std::to_string
    #endif
#endif

#if defined(GPA_METRICS_NO_EXCEPTIONS)
    #define __GPA_METRICS_NOEXCEPT
    #define __GPA_METRICS_THROW
#else
    #define __GPA_METRICS_NOEXCEPT noexcept
    #define __GPA_METRICS_THROW throw()
#endif // GPA_METRICS_NO_EXCEPTIONS

#if defined(NDEBUG)
    #define GPA_METRICS_ASSERT_EQ(expected, actual) (void)actual
#else
    #define GPA_METRICS_ASSERT_EQ(expected, actual) assert(expected == actual)
#endif // NDEBUG
