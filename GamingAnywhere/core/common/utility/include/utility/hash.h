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

#include <cstdlib>
#include <stdint.h>

namespace gpa {
namespace utility {
    
// Used to "fold" a 32-bit hash into a 16-bit number in such
// a way to minimize collisons.
// http://www.isthe.com/chongo/tech/comp/fnv/
uint16_t XORFold16(uint32_t num);

// 32-bit Fowler-Noll-Vo hash function
// https://en.wikipedia.org/wiki/Fowler%E2%80%93Noll%E2%80%93Vo_hash_function
uint32_t CalculateHash(uint8_t const* bytes, size_t length);
    
// 32-bit Fowler-Noll-Vo hash function for a null-terminated string.
// https://en.wikipedia.org/wiki/Fowler%E2%80%93Noll%E2%80%93Vo_hash_function
uint32_t CalculateStringHash(char const* bytes);

} // namespace utility
} // namespace gpa
