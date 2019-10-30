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

#include <cstdlib>

namespace gpa {
namespace utility {

//! @brief Adds the path for the desired vulkan layer
//! @param [in] layerpath full path to the manifest
//! @param [in] layerName name of the .json manifest file
//! @details Functionality is different per platform.
//!     Windows: This function will add the layerPath to the environment variable
//!     VK_LAYER_PATH if the variable is already present. Otherwise, the "path + .json" will
//!     be added to the registry in the HKEY_CURRENT_USER\Software\Khronos\Vulkan\ExplicitLayers
//!     key which is a default search location for the vulkan loader
//!     Linux: This function will add the layerPath to the environment variable
//!     VK_LAYER_PATH
void DiscoverVulkanLayer(char const* layerPath, char const* layerName);

}  // namespace utility
}  // namespace gpa
