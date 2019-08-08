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

#include "utility/hash.h"

#include <string.h>

namespace gpa {
namespace utility {

uint16_t XORFold16(uint32_t num)
{
    uint16_t const mask16 = 0xFFFF;
    return (uint16_t)((num >> 16) ^ (num & mask16));
}

uint32_t CalculateHash(uint8_t const* bytes, size_t length)
{
    if (!bytes) {
        return 0;
    }
    
    uint32_t hash = 2166136261;
    for (size_t ii = 0; ii < length; ii++) {
        hash = (hash * 16777619) ^ bytes[ii];
    }
    return hash;
}
    
uint32_t CalculateStringHash(char const* str)
{
    if (!str) {
        return 0;
    }
    
    size_t size = strlen(str); // subtract null-terminator
    return CalculateHash((uint8_t*)str, size);
}

} // namespace utility
} // namespace gpa
