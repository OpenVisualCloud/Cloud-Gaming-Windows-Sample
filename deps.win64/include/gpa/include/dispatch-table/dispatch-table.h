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
#include <stdio.h>
#if defined(_WIN32)
#include <Windows.h>
#endif
#if HAVE_VULKAN
#include <vulkan/vulkan.h>
#endif  // HAVE_VULKAN
#if HAVE_DIRECTX
#include <d3d9.h>
#include <d3d10_1.h>
#include <d3d10effect.h>
#include <d3d11_4.h>
#include <d3d12.h>
#include <dxgi1_6.h>
#endif  // HAVE_DIRECTX
#if HAVE_METAL
#import <Metal/Metal.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/CAMetalLayer.h>
#endif  // HAVE_METAL
#if HAVE_CPATHAPI
#include <pathological-api.h>
#endif  // HAVE_CPATHAPI
#if HAVE_COMPATHAPI
#include <com-pathological-api.h>
#endif  // HAVE_COMPATHAPI
#if HAVE_OBJCPATHAPI
#include <objc-pathological-api.h>
#endif  // HAVE_OBJCPATHAPI

//! @brief Struct used to provide event notifications to layers
struct EventHandler
{
    virtual ~EventHandler(){};
    virtual void OnApiLibraryLoaded(wchar_t const* const /*libPath*/){};
};

struct GPADispatchTable
{
    char name[128];  //!< Name of a specific layer

    typedef void (*ShutdownMethod)();
    ShutdownMethod shutdownMethod;  //!< Called at layer unload time
    EventHandler* eventHandler;     //!< Used to notify layer about various events
    GPADispatchTable* prev;         //!< To be filled by layer system; should be NULL
    GPADispatchTable* next;         //!< To be filled by layer system; should be NULL
    //!< MUST BE LAST NON-FUNCTION MEMBER IN STRUCT

    // In order to avoid the layer system having to know about every single
    // function within GPADispatchTable, we assume that everything after
    // `next` is a function pointer. This allows us to loop over each of them
    // and do simple copies and comparisons to set up layers.
    ////////////////////////////////////////////////////////////////////////////

#if defined(_WIN32)
#include "dispatch-table/win32-method-list.inl"
#elif defined(__APPLE__)
#include "dispatch-table/darwin-method-list.inl"
#include "dispatch-table/posix-method-list.inl"
#else
#include "dispatch-table/posix-method-list.inl"
#endif
#if HAVE_VULKAN
#include "dispatch-table/vulkan-method-list.inl"
#endif  // HAVE_VULKAN
#if HAVE_DIRECTX
#include "dispatch-table/directx-method-list.inl"
#endif
#if HAVE_METAL
#include "dispatch-table/metal-method-list.inl"
#endif  // HAVE_METAL
#if HAVE_CPATHAPI
#include "dispatch-table/cpathapi-method-list.inl"
#endif  // HAVE_CPATHAPI
#if HAVE_COMPATHAPI
#include "dispatch-table/compathapi-method-list.inl"
#endif  // HAVE_COMPATHAPI
#if HAVE_OBJCPATHAPI
#include "dispatch-table/objcpathapi-method-list.inl"
#endif  // HAVE_OBJCPATHAPI
};

//! @brief Every layer dynamic library needs to expose a function called
//!     `LayerEntrypointName` with the signature `LayerEntrypoint`
#define LAYER_ENTRYPOINT gpaGetDispatchTable
constexpr char const* const kLayerEntrypointName = "gpaGetDispatchTable";

#define LAYER_HELP_FUNCTION gpaGetLayerHelpText
constexpr char const* const kLayerHelpFunctionName = "gpaGetLayerHelpText";

#define LAYER_GET_REQUIRED_LAYERS gpaGetRequiredLayers
constexpr char const* const kLayerGetRequiredLayersFunctionName = "gpaGetRequiredLayers";

//! @see gpa::LoadLayers
using GPALayerEntrypoint = GPADispatchTable* (*)(size_t argc,
                                                 gpa::utility::KeyValPair const* keyValPairs);
using GPALayerHelpFunction = TCHAR const* (*)(gpa::utility::HelpTextOutputMode mode);
using GPALayerGetRequiredLayers = void (*)(size_t* requiredLayersCount, gpa::utility::RequiredLayer* requiredLayers);

namespace gpa {

//! @brief RAII helper struct for calling LayerStart/EndMethod
struct LayerHelper
{
    LayerHelper(GPADispatchTable const*& tlsRefParam)
        : tlsRef(tlsRefParam)
    {
        if (this->tlsRef->next) {
            this->tlsRef = tlsRef->next;
            pushed = true;
        } else {
            pushed = false;
        }
    }

    ~LayerHelper()
    {
        if (pushed) {
            if (tlsRef->prev) {
                tlsRef = tlsRef->prev;
            }
        }
    }
    GPADispatchTable const*& tlsRef;
    bool pushed;
};

void InitializeEmptyMethods(GPADispatchTable* table);

}  // namespace gpa

#define TOKEN_CONCAT2(a, b) a##b
#define TOKEN_CONCAT(a, b) TOKEN_CONCAT2(a, b)
//! @brief Helper RAII macro to be added to each overridden method in a layer.
//! @details This simplifies the creation of a LayerHelper
//! @note `__COUNTER__` isn't standard, but it's currently (2017) supported in
//!     MSVC, GCC, and Clang. This can be replaced with `__LINE__` with the side
//!     effect that two `LAYER_PREAMBLE` could not exist on the same line.
#define LAYER_PREAMBLE(tlsRef) ::gpa::LayerHelper TOKEN_CONCAT(_layerHelper_, __COUNTER__)(tlsRef)
