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

#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "filesystem/directory.h"

using namespace testing;

namespace {

TCHAR kFolderSuffix[] = _T("/GPA/");

TEST(DirectoryTest, GetDocumentsFolder)
{
    TCHAR const* const documentsFolder = gpa::filesystem::Directory::GetDocumentsFolder();
    ASSERT_NE(nullptr, documentsFolder);
    EXPECT_THAT(documentsFolder, HasSubstr(kFolderSuffix));
}
TEST(DirectoryTest, GetPreferencesFolder)
{
    TCHAR const* const preferencesFolder = gpa::filesystem::Directory::GetPreferencesFolder();
    ASSERT_NE(nullptr, preferencesFolder);
    EXPECT_THAT(preferencesFolder, HasSubstr(kFolderSuffix));
}
TEST(DirectoryTest, GetApplicationSupportFolder)
{
    TCHAR const* const appSupportFolder = gpa::filesystem::Directory::GetApplicationSupportFolder();
    ASSERT_NE(nullptr, appSupportFolder);
    EXPECT_THAT(appSupportFolder, HasSubstr(kFolderSuffix));
}

}  // namespace
