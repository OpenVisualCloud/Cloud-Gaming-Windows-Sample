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
#include "gtest/gtest.h"

#include "utility/enum-mask.h"

namespace {

using namespace gpa;
using namespace utility;

enum TestEnum {
    Zero = 0,
    One = 1 << 1,
    Two = 1 << 2,
    Three = 1 << 3,
    Four = 1 << 4,
    Five = 1 << 5
};
ENUM_AS_BITSET(TestEnum)

TEST(EnumMask, And)
{
    TestEnum x, y;

    x = TestEnum::Two;
    y = TestEnum::Five;
    ASSERT_TRUE((x & y) == TestEnum::Zero);

    x = TestEnum::Two;
    y = TestEnum::Two;
    ASSERT_TRUE((x & y) == TestEnum::Two);

    x = TestEnum::Two;
    x &= TestEnum::Two;
    ASSERT_TRUE(x == TestEnum::Two);

    x = TestEnum::Two;
    x &= TestEnum::Four;
    ASSERT_TRUE(x == TestEnum::Zero);
}

TEST(EnumMask, Or)
{
    TestEnum x;

    x = TestEnum::Zero | TestEnum::One;
    ASSERT_TRUE(x == TestEnum::One);

    x = TestEnum::Zero;
    x |= TestEnum::Three;
    ASSERT_TRUE(x == TestEnum::Three);
}

TEST(EnumMask, Xor)
{
    TestEnum x, y, z;

    x = TestEnum::One | TestEnum::Two;
    y = TestEnum::One | TestEnum::Three;
    z = x ^ y;
    ASSERT_TRUE(z == (TestEnum::Two | TestEnum::Three));

    x = TestEnum::One | TestEnum::Two;
    y = TestEnum::One | TestEnum::Three;
    x ^= y;
    ASSERT_TRUE(z == (TestEnum::Two | TestEnum::Three));
}

TEST(EnumMask, Not)
{
    TestEnum x;

    x = TestEnum::One | TestEnum::Two | Three;
    x = ~x;
    x &= TestEnum::Four | TestEnum::Five;
    ASSERT_TRUE(x == (TestEnum::Four | TestEnum::Five));
}

}  // anonymous namespace
