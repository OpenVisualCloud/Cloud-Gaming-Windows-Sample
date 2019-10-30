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

#include <d3d9.h>
#include <d3d10_1.h>
#include <d3d10misc.h>
#include <d3d11_4.h>
#include <d3d12.h>
#include <dxgi1_6.h>

#if defined(_WIN32)
#define GPA_EXTERN GPA_EXPORT
#else
#define GPA_EXTERN extern
#endif

struct GPADispatchTable;

namespace gpa {
namespace dynamic_directx {

#include "directx-method-def-list.inl"
#define METHOD(method) GPA_EXTERN PFN_##method method;
#include "directx-method-list.inl"
#undef METHOD

}  // namespace dynamic_directx
}  // namespace gpa
