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
#include "gtest/gtest.h"
#include "concurrent-map.h"

namespace {

using namespace testing;
using namespace gpa;

TEST(Map, EmptyOnCreate)
{
    concurrent::Map<int, int> map;
    ASSERT_TRUE(map.Empty());
}

TEST(Map, AddElement)
{
    int const key = 10;
    int const value = 33;
    concurrent::Map<int, int> map;
    map.Insert(key, value);

    ASSERT_FALSE(map.Empty());
    ASSERT_EQ(1ul, map.Size());
    ASSERT_TRUE(map.Exists(key));
}

TEST(Map, GetElement)
{
    int const key = 10;
    int const value = 33;
    concurrent::Map<int, int> map;
    map.Insert(key, value);

    ASSERT_EQ(value, map.Get(key));
}

TEST(Map, GetInvalidElement)
{
    int const key = 10;
    concurrent::Map<int, int> map;

    ASSERT_EQ(0, map.Get(key));
}

TEST(Map, AddMultipleElementsSameKey)
{
    int const key = 10;
    int const value1 = 33;
    int const value2 = 45;
    concurrent::Map<int, int> map;

    map.Insert(key, value1);
    map.Insert(key, value2);

    ASSERT_EQ(1ul, map.Size());
    ASSERT_TRUE(map.Exists(key));
    ASSERT_EQ(value2, map.Get(key));
}

TEST(Map, AddMultipleElementsDifferentKeys)
{
    int const key1 = 10;
    int const key2 = 16;
    int const value1 = 33;
    int const value2 = 45;
    concurrent::Map<int, int> map;

    map.Insert(key1, value1);
    map.Insert(key2, value2);

    ASSERT_FALSE(map.Empty());
    ASSERT_EQ(2ul, map.Size());
    ASSERT_TRUE(map.Exists(key1));
    ASSERT_EQ(value1, map.Get(key1));
    ASSERT_TRUE(map.Exists(key2));
    ASSERT_EQ(value2, map.Get(key2));
}

TEST(Map, EraseElement)
{
    int const key1 = 10;
    int const key2 = 16;
    int const value1 = 33;
    int const value2 = 45;
    concurrent::Map<int, int> map;

    map.Insert(key1, value1);
    map.Insert(key2, value2);
    map.Erase(key2);

    ASSERT_EQ(1ul, map.Size());
    ASSERT_TRUE(map.Exists(key1));
    ASSERT_FALSE(map.Exists(key2));
}

TEST(Map, Clear)
{
    int const key1 = 10;
    int const key2 = 16;
    int const value1 = 33;
    int const value2 = 45;
    concurrent::Map<int, int> map;

    map.Insert(key1, value1);
    map.Insert(key2, value2);

    ASSERT_EQ(2ul, map.Size());

    map.Clear();

    ASSERT_EQ(0ul, map.Size());
    ASSERT_FALSE(map.Exists(key1));
    ASSERT_FALSE(map.Exists(key2));
}

}  // anonymous namespace
