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

#include "igpa-config.h"
#include "utility/common.h"

#include <cstdint>
#include <cstddef>
#include <map>

struct GPADispatchTable;
struct EventHandler;

namespace gpa {

typedef std::map<STD_STRING, std::vector<utility::KeyValPair> > LayerArgLookup;

GPA_EXPORT void LoadLayer(TCHAR const* const layerName, TCHAR const* layersPath, size_t argc = 0, utility::KeyValPair const* keyValPairs = nullptr);

//! @brief Adds a new layer to the beginning of the current layer chain
//! @details This method adds a new layer as the first step after the hook. All
//!     methods within `dispatchTable` should be NULL unless they are overridden/
//!     implemented by this specific layer. After this method is called, every
//!     function pointer within `dispatchTable` will point down to the next layer
//!     within the layer chain. These methods should be considered safe to call
//!     upon returning from this method.
//! @param[in] dispatchTable A partially filled out dispatch table.
//! @return True on success, false if dispatchTable is NULL.
GPA_EXPORT bool gpaAddLayer(GPADispatchTable* dispatchTable);

//! @brief Removes an installed layer by name
//! @details Once a layer is removed, the layer's d ispatch table is not restored
//!     to what it was when originally added. The caller will have to reset their
//!     dispatch table if they want to re-add it.
//! @param[in] layerName The named layer to remove
//! @return True if removed, false if not found
GPA_EXPORT bool gpaRemoveLayer(char const* layerName);

GPA_EXPORT GPADispatchTable* GetHeadDispatchTable();

//! @brief Obtain object used to notify loaded layers about various events
//! @details This method obtains object that calls notification methods
//!     on event handlers defined by every installed layer
GPA_EXPORT EventHandler* getLayersEventHandler();

//! @brief Loads the specified layers into the injected process. Pass `kLoadAllLayers` to load all
//! layers within the "layers" folder next to gpa-injector.
//! @param[in] numLayers the number of layers specified to be loaded
//! @param[in] layers a list of layers to load, in order
//! @param[in] argLookup an optional pointer to a map that correlates layer names to
//!     lists of key-value arguments for controlling the behaviour of certain layers
//!     can be omited if not using layer arguments
GPA_EXPORT void LoadLayers(size_t numLayers = 0, TCHAR const* const layers[] = nullptr,
                           LayerArgLookup const* argLookup = nullptr);

GPA_EXPORT void UnloadLayers();

}  // namespace gpa
