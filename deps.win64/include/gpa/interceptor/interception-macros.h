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

//////
// Helper macros
/////
#if defined(_WIN32)  // Windows ------------------------------------------------

#include "interceptor/win32-interception.h"

#define HOOK_METHOD(methodName) Hook##methodName

#define TRAMPOLINE_DECLARATION(methodName)                         \
    static decltype(&methodName) Trampoline##methodName = nullptr; \
    static decltype(&methodName) Original##methodName = nullptr

#define TRAMPOLINE(methodName) Trampoline##methodName

#define BEGIN_HOOK_LIST(hooksName) static gpa::Hook const k##hooksName##HookList[] = {
#define HOOK(methodName)                 \
    {                                    \
        #methodName,                     \
        (void**)&Hook##methodName,       \
        (void**)&Trampoline##methodName, \
        (void**)&Original##methodName,   \
    },

#define END_HOOK_LIST(hooksName, ...)                                           \
    }                                                                           \
    ;                                                                           \
    char const* const k##hooksName##DynamicLibraries[] = {__VA_ARGS__};         \
    gpa::Module hooksName##Hooks(k##hooksName##DynamicLibraries,                \
                                 sizeof(k##hooksName##DynamicLibraries) /       \
                                     sizeof(k##hooksName##DynamicLibraries[0]), \
                                 k##hooksName##HookList,                        \
                                 sizeof(k##hooksName##HookList) /               \
                                     sizeof(k##hooksName##HookList[0]));

#define DECLARE_HOOK_LIST(hooksName) extern gpa::Module hooksName##Hooks

#define HOOK_MODULE(hooksName) hooksName##Hooks.Hook()

#define UNHOOK_MODULE(hooksName) hooksName##Hooks.Unhook()

#elif defined(__APPLE__)  // macOS ---------------------------------------------

#include "interceptor/darwin-interpose.h"

#define HOOK_METHOD(methodName) Hook##methodName

#define TRAMPOLINE_DECLARATION(methodName)

#define TRAMPOLINE_DECLARATION_WITH_ATTRIBUTE(methodName, attribute)

#define TRAMPOLINE(methodName) methodName

#define BEGIN_HOOK_LIST(hooksName)

#define HOOK(methodName) DYLD_INTERPOSE(Hook##methodName, methodName);

#define END_HOOK_LIST(hooksName, ...)

#define DECLARE_HOOK_LIST(hooksName)

#define HOOK_MODULE(hooksName)

#define UNHOOK_MODULE(hooksName)

#elif defined(__ANDROID__)  // Android ---------------------------------------------

#include <dlfcn.h>

#define HOOK_METHOD(methodName) Hook##methodName

#define TRAMPOLINE(methodName) Trampoline##methodName

#define TRAMPOLINE_DECLARATION(methodName) \
    static decltype(&methodName) Trampoline##methodName = nullptr;

#define TRAMPOLINE_DECLARATION_WITH_ATTRIBUTE(methodName, attribute) \
    static decltype(&methodName) Trampoline##methodName __attribute((attribute)) = nullptr;

#define TRAMPOLINE_DECLARATION_NODEF(methodName) static decltype(&methodName) Trampoline##methodName

#define HOOK_MODULE(hooksName)

#define UNHOOK_MODULE(hooksName)

#define BEGIN_HOOK_LIST(hooksName)

#define HOOK(methodName)

#define END_HOOK_LIST(hooksName, ...)

#define DECLARE_HOOK_LIST(hooksName)

#elif defined(__linux__) || !defined(__ANDROID__)  // Linux ---------------------------------------------

#include <dlfcn.h>

#define HOOK_METHOD(methodName) methodName

#define TRAMPOLINE_INIT(methodName) \
    Trampoline##methodName = (decltype(&methodName))dlsym(RTLD_NEXT, #methodName)

#define TRAMPOLINE_INIT_WITH_ATTRIBUTE(methodName, attribute) \
    Trampoline##methodName __attribute((attribute)) =         \
        (decltype(&methodName))dlsym(RTLD_NEXT, #methodName)

#define TRAMPOLINE_DECLARATION(methodName) static decltype(&methodName) TRAMPOLINE_INIT(methodName)

#define TRAMPOLINE_DECLARATION_WITH_ATTRIBUTE(methodName, attribute) \
    static decltype(&methodName) TRAMPOLINE_INIT_WITH_ATTRIBUTE(methodName, attribute)

#define TRAMPOLINE_DECLARATION_NODEF(methodName) static decltype(&methodName) Trampoline##methodName

#define TRAMPOLINE(methodName) Trampoline##methodName

#define BEGIN_HOOK_LIST(hooksName)

#define HOOK(methodName)

#define END_HOOK_LIST(hooksName, ...)

#define DECLARE_HOOK_LIST(hooksName)

#define HOOK_MODULE(hooksName)

#define UNHOOK_MODULE(hooksName)

#else  // Unknown --------------------------------------------------------------
#error "Define macros for platform!"
#endif  // ----------------------------------------------------------------------
