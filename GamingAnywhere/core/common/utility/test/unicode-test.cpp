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

#include "utility/unicode.h"

namespace {

enum { kShortLen = 8,
       kMaxLen = 1024 };

char const* kTestString = "My Test String";
wchar_t const* kTestStringW = L"My Test String";
char const* kTestString8 = "My Test ";
wchar_t const* kTestStringW8 = L"My Test ";

TEST(Unicode, UnicodeToUTF8)
{
    char utf8[kMaxLen] = {};

    int nChars = gpa::utility::UnicodeLen(kTestStringW);
    int nBytes = gpa::utility::UnicodeToUTF8(kTestStringW, utf8, kMaxLen);

    ASSERT_EQ(nChars, nBytes);
    ASSERT_STREQ(utf8, kTestString);
}

TEST(Unicode, UTF8ToUnicode)
{
    wchar_t unicode[kMaxLen] = {};

    int nChars = (int)strlen(kTestString);
    int nBytes = gpa::utility::UTF8ToUnicode(kTestString, unicode, kMaxLen);

    ASSERT_EQ(nChars, nBytes);
    ASSERT_STREQ(unicode, kTestStringW);
}

TEST(Unicode, UnicodeToUTF8Truncated)
{
    char utf8[kShortLen] = {};

    int nChars = gpa::utility::UnicodeLen(kTestStringW8);
    int nBytes = gpa::utility::UnicodeToUTF8(kTestStringW, utf8, kShortLen);

    ASSERT_EQ(nChars, nBytes);
    ASSERT_EQ(0, memcmp(utf8, kTestString8, kShortLen - 1));
}

TEST(Unicode, UTF8ToUnicodeTruncated)
{
    wchar_t unicode[kShortLen] = {};

    int nChars = (int)strlen(kTestString8);
    int nBytes = gpa::utility::UTF8ToUnicode(kTestString, unicode, kShortLen);

    ASSERT_EQ(nChars, nBytes);
    ASSERT_EQ(0, memcmp(unicode, kTestStringW8, (kShortLen - 1) * 2));
}

}  // namespace
