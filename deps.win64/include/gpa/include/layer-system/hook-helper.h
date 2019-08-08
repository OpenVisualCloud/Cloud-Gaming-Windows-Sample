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

struct GPADispatchTable;

namespace gpa {

//! @brief Internal method used to get access to the thread's current dispatch
//!     table.
GPA_CPP_EXPORT GPADispatchTable const*& ThreadDispatchTable();

//! @details Internal helper for specifying that the real hooked API is about to
//!     be entered to ensure we avoid hooking methods coming from within the
//!     target API (e.g: the D3D11CreateDeviceAndSwapChain call from within
//!     D3D11CreateDevice)
//! @note Declaration stored in this file for global access within hooks.
//!     Implementation lives within shim.
struct TailHelper
{
    TailHelper(GPADispatchTable const*& currTable)
        : tlsRef(currTable)
    {
        tailTable = tlsRef;
        tlsRef = nullptr;
    }
    ~TailHelper() { tlsRef = tailTable; }

private:
    GPADispatchTable const*& tlsRef;
    GPADispatchTable const* tailTable;
};

}  // namespace gpa

#define TAIL_HELPER(tlsRef) ::gpa::TailHelper _tailHelper(tlsRef)
