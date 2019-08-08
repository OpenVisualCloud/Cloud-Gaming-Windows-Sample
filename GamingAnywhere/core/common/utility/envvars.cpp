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

#include <stdlib.h>
#include <cstdlib>
#include <string.h>
#include "utility/envvars.h"

#if defined(WIN32)
#include <Windows.h>
#endif // WIN32

namespace gpa {
namespace utility {

bool GetEnvVariable(char const * key, char * outValueBuffer, size_t const outValueBufferSize) {
    size_t varValueSize = outValueBufferSize;
#if defined(WIN32)
    getenv_s(&varValueSize, outValueBuffer, outValueBufferSize, key);
    return varValueSize != 0;
#else
    char * varValue = std::getenv(key);
    varValueSize = (varValue ? strlen(varValue) : 0);
    if (varValue && outValueBuffer && outValueBufferSize > varValueSize)
    {
        strncpy(outValueBuffer, varValue, varValueSize);
    }
    return (varValue != nullptr);
#endif // WIN32
}

bool SetEnvVariable(char const* key, char const* value)
{
#if defined(WIN32)
    return (_putenv_s(key, value) == 0);
#else
    return (setenv(key, value, 1) == 0);
#endif // WIN32
}

}  // namespace utility
}  // namespace gpa
