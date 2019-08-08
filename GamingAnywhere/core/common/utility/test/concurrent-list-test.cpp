/*
 Copyright (2016) Intel Corporation

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

#include "utility/concurrent-list.h"

namespace {

using namespace gpa;
using namespace utility;

TEST(ConcurrentList, PushBack)
{
    int value = 5;
    ConcurrentList<int> list;
    ASSERT_EQ(0u, list.Size());
    list.PushBack(value);
    ASSERT_EQ(1u, list.Size());
}

TEST(ConcurrentList, PushBackMultipleElements)
{
    int value0 = 5;
    int value1 = 3;
    ConcurrentList<int> list;
    list.PushBack(value0);
    list.PushBack(value1);
    ASSERT_EQ(2u, list.Size());
}

TEST(ConcurrentList, Remove)
{
    int value0 = 5;
    int value1 = 3;
    ConcurrentList<int> list;
    list.PushBack(value0);
    list.PushBack(value1);
    ASSERT_EQ(2u, list.Size());
    list.Remove(value0);
    ASSERT_EQ(1u, list.Size());
}

TEST(ConcurrentList, Iterate)
{
    int value0 = 5;
    int value1 = 3;
    std::function<void(int)> cb = [&](int element) {
        static int index = 0;
        if (index == 0) {
            ASSERT_EQ(value0, element);
        } else if (index == 1) {
            ASSERT_EQ(value1, element);
        }
        index++;
    };
    ConcurrentList<int> list;
    list.PushBack(value0);
    list.PushBack(value1);
    list.Iterate(cb);
}

TEST(ConcurrentList, Clear)
{
    int value0 = 5;
    int value1 = 3;
    ConcurrentList<int> list;
    list.PushBack(value0);
    list.PushBack(value1);
    ASSERT_EQ(2u, list.Size());
    list.Clear();
    ASSERT_EQ(0u, list.Size());
}

}  // anonymous namespace
