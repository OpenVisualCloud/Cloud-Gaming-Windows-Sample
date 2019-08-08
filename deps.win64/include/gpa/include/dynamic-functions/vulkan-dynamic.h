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

#include <igpa-config.h>

namespace gpa {
namespace dynamic_vulkan {

//! @brief Function for loading vulkan functions dynamically.
//! @details Function pointers are obtained from vulkan module loaded
//!     by the host application. The functions will remain null if
//!     vulkan has not been loaded.
//! @return True id vulkan module is found and functions are loaded, false otherwise.
GPA_EXPORT bool LoadVulkanFunctions(bool loadLibrary = false);

//! @brief Function for updating function pointer
GPA_EXPORT bool UpdateFunctionPointer(const char *, void *);

}  // namespace dynamic_vulkan
}  // namespace gpa
