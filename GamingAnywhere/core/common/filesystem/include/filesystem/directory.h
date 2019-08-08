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

#pragma once

#include "igpa-config.h"

#include <cstddef>

namespace gpa {
namespace filesystem {

struct FileDescriptor; // file-desc.h

typedef void (*FindAllFilesCallback)(FileDescriptor const* desc, void* userData);

class Directory
{
public:
    static void FindAllFiles(TCHAR const* directoryName, FindAllFilesCallback callback, TCHAR const* pattern = nullptr, void* userData = nullptr);
    
    //! @brief Returns the GPA folder in the user's documents folder
    static TCHAR const* GetDocumentsFolder(void);

    //! @brief Returns the preferences folder for GPA
    static TCHAR const* GetPreferencesFolder(void);

    //! @brief Returns the application support folder for GPA
    static TCHAR const* GetApplicationSupportFolder(void);

    //! @brief Recursive creates the directory given by path.
    //! @return true on success, false otherwise
    //! @param path The directory path.  Requires a trailing /.
    static bool MakeDirectoryRecursive(TCHAR const* path);

    static void DeleteEntry(TCHAR const* directory, TCHAR const* fileName);
    static TCHAR const* GetTempDirectory();

    //! @brief Write the directory containing the path to a given input buffer
    static void GetDirectoryForPath(TCHAR const* const path, TCHAR* const parentDirectory, int const parentDirectoryLength);

    //! @brief Get path to current executable's location in the filesystem
    static void GetCurrentExecutableDirectory(TCHAR *const path, size_t const pathSize);
};

} // namespace filesystem
} // namespace gpa
