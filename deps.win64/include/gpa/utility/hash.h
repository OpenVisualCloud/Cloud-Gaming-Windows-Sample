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

}  // namespace utility
}  // namespace gpa
