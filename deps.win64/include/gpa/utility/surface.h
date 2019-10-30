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

#include <cstdint>

namespace gpa {

struct Surface
{
    void* handle = nullptr;  ///< Surface handle for all platforms (where applicable)

    // these "extra" fields will be populated only on Linux (X11)
    void* display = nullptr;     ///< X11/Xlib Display* for window surfaces
    void* connection = nullptr;  ///< X11/Xcb xcb_connection_t* for window surfaces
};

struct SurfaceCreateInfo
{
    enum Type : int32_t {
        kInvalid,    ///< Type not specified
        kOffscreen,  ///< Surface not associated with a windowing system
        kWin32,      ///< Win32 window
        kX11,        ///< Xcb or Xlib window
        kWayland,    ///< Wayland compositor
        kCocoa,      ///< Cocoa (MacOS) window
        kAndroid,    ///< Android surface
    };

    Type type = kInvalid;  ///< Type of window (window system) for surface

    int32_t x = 0;       ///< X coordinate of top-left corner of surface (if applicable)
    int32_t y = 0;       ///< Y coordinate of top-left corner of surface (if applicable)
    int32_t width = 0;   ///< (2D) Width of surface (pixels/texels)
    int32_t height = 0;  ///< (2D) Height of surface (pixels/texels)
};

gpa::Surface* CreateDefaultSurface(gpa::SurfaceCreateInfo const* info);
void DestroyDefaultSurface(gpa::Surface* handle);
void OnDefaultSurfaceYield(gpa::Surface* handle);

}  // namespace gpa
