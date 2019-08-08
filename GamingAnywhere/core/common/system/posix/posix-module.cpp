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

#include "system/module.h"

#include <dlfcn.h>

namespace gpa {
namespace system {

void* LoadModule(TCHAR const* libraryName, int flags)
{
    int mode = 0;

    if ((flags & kLoadNow) != 0) {
        mode |= RTLD_NOW;
    }

    if ((flags & kLoadDeferred) != 0) {
        mode |= RTLD_LAZY;
    }

    // one of the above two are required for dlopen; if neither were supplied,
    // then we default to RTLD_NOW
    if (!mode) {
        mode = RTLD_NOW;
    }

    if ((flags & kGlobalScope) != 0) {
        mode |= RTLD_GLOBAL;
    }

    if ((flags & kLocalScope) != 0) {
        mode |= RTLD_LOCAL;
    }

    return dlopen(libraryName, mode);
}

void* GetSymbolAddress(void* moduleHandle, const char* symbolName, bool searchNextModule)
{
    // if moduleHandle is NULL and the searchNextModule is false, then the behavior
    // is the same as if we used RTLD_DEFAULT explicitly (since RTLD_DEFAULT is
    // defined as (void*)0x0)
    if (!moduleHandle && searchNextModule) {
        moduleHandle = RTLD_NEXT;
    }

    return dlsym(moduleHandle, symbolName);
}

void* FindModuleHandle(char const* libraryName)
{
    return dlopen(libraryName, RTLD_NOLOAD | RTLD_LAZY);
}

void CloseModule(void *moduleHandle)
{
    if (moduleHandle) {
        dlclose(moduleHandle);
    }
}

char const* GetLastModuleError()
{
    return dlerror();
}

} // namespace system
} // namespace gpa
