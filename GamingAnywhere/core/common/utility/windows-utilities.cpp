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

#include <Windows.h>
#include "logger/logger.h"

namespace gpa {
namespace utility {

bool GetDLLPath(LPCWSTR moduleName, bool address, wchar_t* const path, size_t pathSize)
{
    // To get the handle from within a DLL, we need to grab the address of a
    // static function from within or pass in the name of the module.
    HMODULE module = nullptr;

    if (GetModuleHandleExW((address ? GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS : 0) |
        GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        moduleName, &module) == 0) {
        GPA_LOG_ERROR("GetModuleHandleExW failed while looking for module %S returning: %d", moduleName, GetLastError());
        return false;
    }
    if (GetModuleFileNameW(module, path, (DWORD)pathSize) == 0) {
        GPA_LOG_ERROR("GetModuleFileNameW failed: %d", GetLastError());
        return false;
    }
    return true;
}

} // utility
} // gpa
