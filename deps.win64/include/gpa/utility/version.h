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

#include <stdint.h>

namespace gpa {
namespace utility {
//! Build Type
char const * const kGpaBuildName = "Development";
//! Release Year
int const kGpaReleaseYear = 0;
//! Release Quarter
int const kGpaReleaseQuarter = 0;
//! Sprint Number
int const kGpaReleaseSprint = 0;
//! CI build number
int const kGpaBuildNumber = 000;
//! Source Control Commit Hash
char const * const kGpaCommitHash = "b6833154";

//! @brief Returns the version numbers for the given file.
//! @param filename The filepath
//! @param version An array of size 4, expected to contain the 
//! version in the format [major, minor, build, revision].
//! @return true if the file version could be accessed
bool GetFileVersion(wchar_t const* const filename, int* const version);

//! @brief Print current gpa build version
void PrintVersion();

} // namespace utility
} // namespace gpa
