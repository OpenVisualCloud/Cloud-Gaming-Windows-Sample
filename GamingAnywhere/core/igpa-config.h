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

/* #undef HAVE_PTHREAD_H */
#define HAVE_VULKAN 1
/* #undef HAVE_METAL */
#define HAVE_DIRECTX 1
/* #undef HAVE_CPATHAPI */
/* #undef HAVE_COMPATHAPI */
/* #undef HAVE_OBJCPATHAPI */


#if defined(HAVE_VULKAN)
    #if defined(__ANDROID__)
        #define VK_USE_PLATFORM_ANDROID_KHR 1
    #elif defined(_WIN32) || defined(_WIN64)
        #define VK_USE_PLATFORM_WIN32_KHR 1
    #elif defined(__linux__)
        #define VK_USE_PLATFORM_XLIB_KHR 1
        #define VK_USE_PLATFORM_XCB_KHR 1
        #define VK_USE_PLATFORM_WAYLAND_KHR 1
    #elif defined(__APPLE__)
        #define VK_USE_PLATFORM_MACOS_MVK 1
    #endif
#endif /* HAVE_VULKAN */

#if defined(UNICODE) || defined(_UNICODE)
    #define GPA_UNICODE
#endif

#if defined(_WIN32)
    #if defined(GPA_EXPORTS)
        #define GPA_EXPORT extern "C" __declspec(dllexport)
        #define GPA_CPP_EXPORT extern __declspec(dllexport)
        #define GPA_CLASS_EXPORT __declspec(dllexport)
    #else
        #define GPA_EXPORT extern "C" __declspec(dllimport)
        #define GPA_CPP_EXPORT extern __declspec(dllimport)
        #define GPA_CLASS_EXPORT __declspec(dllimport)
    #endif

    // for layers, we don't want to re-use GPA_EXPORT[S] (because this
    // can cause issues for symbols exported from DLLs that the layer use)
    // and instead define macros specifically for layers
    #if defined(GPA_LAYER_EXPORTS)
        #define GPA_LAYER_EXPORT extern "C" __declspec(dllexport)
    #else
        #define GPA_LAYER_EXPORT extern "C" __declspec(dllimport)
    #endif

    #if defined(GPA_CAPTURE_SUPPORT_EXPORTS)
        #define GPA_CAPTURE_SUPPORT_EXPORT extern "C" __declspec(dllexport)
    #else
        #define GPA_CAPTURE_SUPPORT_EXPORT extern "C" __declspec(dllimport)
    #endif

    #if defined(GPA_FUNCTIONAL_TEST_SUPPORT_EXPORTS)
        #define GPA_FUNCTIONAL_TEST_SUPPORT_EXPORT extern "C" __declspec(dllexport)
    #else
        #define GPA_FUNCTIONAL_TEST_SUPPORT_EXPORT extern "C" __declspec(dllimport)
    #endif

    #include <tchar.h>



    #if defined(UNICODE) || defined(_UNICODE)
        #define STD_STRING std::wstring
        #define SPRINTF(dst, count, fmt, ...) swprintf_s(dst, count, fmt, __VA_ARGS__)
        #define STRCMP(a, b) wcscmp(a, b)
        #define ATOI(str) _wtoi(str)
        #define TCHAR_FORMAT_SPECIFIER "%ls"
        #define TO_STRING std::to_wstring
    #else
        #define STD_STRING std::string
        #define SPRINTF(dst, count, fmt, ...) sprintf_s sprintf_s(dst, count, fmt, __VA_ARGS__)
        #define STRCMP(a, b) strcmp(a, b)
        #define ATOI(str) atoi(str)
        #define TCHAR_FORMAT_SPECIFIER "%s"
        #define TO_STRING std::to_string
    #endif

    #define STRCPY(dst, src, size) strcpy_s(dst, size, src )
#else
    #if defined(__APPLE__)
        #define GPA_EXPORT extern "C" __attribute__((visibility("default")))
        #define GPA_LAYER_EXPORT extern "C" __attribute__((visibility("default")))
        #define GPA_CAPTURE_SUPPORT_EXPORT extern "C" __attribute__((visibility("default")))
        #define GPA_FUNCTIONAL_TEST_SUPPORT_EXPORT extern "C" __attribute__((visibility("default")))
        #define GPA_CPP_EXPORT __attribute__((visibility("default")))
        #define GPA_CLASS_EXPORT __attribute__((visibility("default")))
    #else
        #define GPA_EXPORT extern "C"
        #define GPA_LAYER_EXPORT extern "C"
        #define GPA_CAPTURE_SUPPORT_EXPORT extern "C"
        #define GPA_FUNCTIONAL_TEST_SUPPORT_EXPORT extern "C"
        #define GPA_CPP_EXPORT
        #define GPA_CLASS_EXPORT
    #endif
    #define TCHAR char
    #define _T(str) str
    #define _tmain main
    #define STD_STRING std::string
    #define SPRINTF(dst, count, fmt, ...) snprintf(dst, count, fmt, __VA_ARGS__)
    #define STRCMP(a, b) strcmp(a, b)
    #define ATOI(str) atoi(str)
    #define TCHAR_FORMAT_SPECIFIER "%s"
    #define TO_STRING std::to_string
    #include <stdio.h>
    #include <string.h>
    #define STRCPY(dst, src, size) strncpy(dst, src, size )
#endif


#if defined(GPA_NO_EXCEPTIONS)
    #define __GPA_NOEXCEPT
    #define __GPA_THROW
#else
    #define __GPA_NOEXCEPT noexcept
    #define __GPA_THROW throw()
#endif // GPA_NO_EXCEPTIONS

#if defined(NDEBUG)
    #define GPA_ASSERT_EQ(expected, actual) (void)actual
#else
    #define GPA_ASSERT_EQ(expected, actual) assert(expected == actual)
#endif // NDEBUG
