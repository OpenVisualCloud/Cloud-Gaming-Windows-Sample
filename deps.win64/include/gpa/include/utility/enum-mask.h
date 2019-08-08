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

namespace gpa {
namespace utility {

#define ENUM_AS_BITSET(ENUM)                                                                                                                                                           \
    inline constexpr ENUM operator|(ENUM x, ENUM y) { return static_cast<ENUM>(static_cast<std::underlying_type<ENUM>::type>(x) | static_cast<std::underlying_type<ENUM>::type>(y)); } \
    inline ENUM& operator|=(ENUM& x, ENUM y)                                                                                                                                           \
    {                                                                                                                                                                                  \
        x = x | y;                                                                                                                                                                     \
        return x;                                                                                                                                                                      \
    }                                                                                                                                                                                  \
    inline constexpr ENUM operator&(ENUM x, ENUM y) { return static_cast<ENUM>(static_cast<std::underlying_type<ENUM>::type>(x) & static_cast<std::underlying_type<ENUM>::type>(y)); } \
    inline ENUM& operator&=(ENUM& x, ENUM y)                                                                                                                                           \
    {                                                                                                                                                                                  \
        x = x & y;                                                                                                                                                                     \
        return x;                                                                                                                                                                      \
    }                                                                                                                                                                                  \
    inline constexpr ENUM operator^(ENUM x, ENUM y) { return static_cast<ENUM>(static_cast<std::underlying_type<ENUM>::type>(x) ^ static_cast<std::underlying_type<ENUM>::type>(y)); } \
    inline ENUM& operator^=(ENUM& x, ENUM y)                                                                                                                                           \
    {                                                                                                                                                                                  \
        x = x ^ y;                                                                                                                                                                     \
        return x;                                                                                                                                                                      \
    }                                                                                                                                                                                  \
    inline ENUM operator~(ENUM x) { return static_cast<ENUM>(~static_cast<std::underlying_type<ENUM>::type>(x)); }

}  // namespace utility
}  // namespace gpa
