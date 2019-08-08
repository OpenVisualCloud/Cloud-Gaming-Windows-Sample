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

#include <cstdint>

namespace gpa {
namespace utility {

class UUID
{
public:
    UUID();
    UUID(UUID const& other);
    UUID(char const* strRep);
    ~UUID();

    bool operator==(const UUID& other) const;
    bool operator!=(const UUID& other) const;
    bool operator<(const UUID& other) const;

    void Generate();
    char* ToString(char* strRepBuffer, uint32_t* bufferLen) const;

protected:
    uint64_t mLow;
    uint64_t mHigh;

    char* ToStringImpl(char* strRepBuffer) const;
};

}  // namespace utility
}  // namespace gpa
