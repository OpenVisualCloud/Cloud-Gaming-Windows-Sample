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

#include <cstdint>

namespace gpa {

struct Surface
{
    void* handle = nullptr;         ///< Surface handle for all platforms (where applicable)

    // these "extra" fields will be populated only on Linux (X11)
    void* display = nullptr;        ///< X11/Xlib Display* for window surfaces
    void* connection = nullptr;     ///< X11/Xcb xcb_connection_t* for window surfaces
};

struct SurfaceCreateInfo
{
    enum Type : int32_t {
        kInvalid,                   ///< Type not specified
        kOffscreen,                 ///< Surface not associated with a windowing system
        kWin32,                     ///< Win32 window
        kX11,                       ///< Xcb or Xlib window
        kWayland,                   ///< Wayland compositor
        kCocoa,                     ///< Cocoa (MacOS) window
        kAndroid,                   ///< Android surface
    };

    Type type = kInvalid;           ///< Type of window (window system) for surface

    int32_t x = 0;                  ///< X coordinate of top-left corner of surface (if applicable)
    int32_t y = 0;                  ///< Y coordinate of top-left corner of surface (if applicable)
    int32_t width = 0;              ///< (2D) Width of surface (pixels/texels)
    int32_t height = 0;             ///< (2D) Height of surface (pixels/texels)
};

gpa::Surface* CreateDefaultSurface(gpa::SurfaceCreateInfo const* info);
void DestroyDefaultSurface(gpa::Surface* handle);
void OnDefaultSurfaceYield(gpa::Surface* handle);
    
} // namespace gpa
