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

#include "annotate.h"
#include "pathological-structs.h"
#include <stdlib.h>
#include <stddef.h>
#ifdef _WIN32
#include <guiddef.h>

struct IResource
{
    virtual size_t GetSize() = 0;
    virtual size_t GetHeight() = 0;
    virtual void* Map() = 0;
    virtual void Unmap() = 0;
    virtual void PrintContent() = 0;
};
#endif

// clang-format off

PATHAPI_EXPORT void NoParameter();

// START primitive_parameter
PATHAPI_EXPORT void PrimitiveParameter(int bar);                                                      /* glEnable(GLenum cap) */
PATHAPI_EXPORT void PointerParameter(ANNOTATE_LEN(1) int * bar);                                      /* IDirect3D9::CreateDevice(..., *pPresentationParameters, ...) */
PATHAPI_EXPORT void ConstPointerParameter(ANNOTATE_LEN(1) int const* bar);                            /* */
PATHAPI_EXPORT void FixedSizeArrayParameter(int bar[4]);                                              /* ClearRenderTargetView(ID3D11RenderTargetView*, ..., float pClearColor[4]) */
PATHAPI_EXPORT void FixedSizeConstArrayParameter(int const bar[4]);                                        /* */
PATHAPI_EXPORT void FixedSizePointerParameter(ANNOTATE_LEN(4) int * bar);                             /* */
PATHAPI_EXPORT void FixedSizeConstPointerParameter(ANNOTATE_LEN(4) int const * bar);                       /* */
PATHAPI_EXPORT void FixedSizePointerParameterNoAnnotation(int const * bar);                           /* IDirect3DDevice9::SetClipPlane( .., const float * pPlane) -- pPlane is four elements array*/
PATHAPI_EXPORT void PointerParamterWithLengthToCalculate(ANNOTATE_LEN(count) int * data, int count);  /* */
PATHAPI_EXPORT void ConstPointerParameterWithLengthToCalculate(ANNOTATE_LEN(count) int const * data, int count);  /* */
PATHAPI_EXPORT void OutputPointerParameter(ANNOTATE_LEN(1) int * bar, int newBar);                    /* glGetIntegeriv(GLenum cap, GLint* data) */
PATHAPI_EXPORT void InputOutputPointerParameter(ANNOTATE_LEN(1) int * bar);                           /* Use case needed */
PATHAPI_EXPORT void InputOutputPointerParameter1(_Inout_opt_ int * bar);                              /* D3D12Device2::GetResourceTiling( ... , _Inout_opt_ UINT * pNumSubresourceTilings, ...) */
PATHAPI_EXPORT void OutputPointerParameterWithEnum(ANNOTATE_LEN(1) int * bar, SomeEnum inEnum);       /* glGetIntegeriv(GLenum cap, GLint* data) */
// END primitive_parameter

// START struct_parameter
PATHAPI_EXPORT void PrimitiveStructParameter(StructWithPrimitiveMember bar);                                                        /* Use case needed */
PATHAPI_EXPORT void PointerToPrimitiveStructParameter(ANNOTATE_LEN(1) StructWithPrimitiveMember* bar);                              /* vkCmdBeginRenderPass(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents) */
PATHAPI_EXPORT void ConstPointerToPrimitiveStructParameter(ANNOTATE_LEN(1) StructWithPrimitiveMember const* bar);                   /* vkGetPhysicalDeviceFeatures(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures) */
PATHAPI_EXPORT void OutputPointerToPrimitiveStructParameter(ANNOTATE_LEN(1) StructWithPrimitiveMember * bar, int resultVal);        /* vkGetPhysicalDeviceFeatures(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures) */
PATHAPI_EXPORT void PointerToPrimitiveStructWithSizeParameter(ANNOTATE_LEN(count) StructWithPrimitiveMember* bar, size_t count);    /* vkCmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors) */
PATHAPI_EXPORT void NullTerminatedPointerToPrimitiveStructParameter(ANNOTATE_LEN(null-terminated) StructWithPrimitiveMember** bar); /* */
PATHAPI_EXPORT void EndElementTerminatedPointerToPrimitiveStructParameter(ANNOTATE_ARRAY_END_ELEM(PRIM_STRUCT_END_ELEM()) StructWithPrimitiveMember* bar); /* */
PATHAPI_EXPORT void EndElementTerminatedPointerToPrimitiveStructParameterNoAnnotation(StructWithPrimitiveMember* bar);              /* HRESULT IDirect3DDevice9::CreateVertexDeclaration( const D3DVERTEXELEMENT9 * pVertexElements, … ) */
// END struct_parameter

// START interface_parameter
#ifdef _WIN32
PATHAPI_EXPORT void OutputInterfaceParameter(ANNOTATE_LEN(1) IResource ** bar);                                      /* vkCreateDevice(..., VkDevice* pDevice); */
PATHAPI_EXPORT void OutputInterfaceParameter1(_Outptr_opt_ IResource ** bar);                                        /* ID3D11Device::GetImmediateContext(...) */
PATHAPI_EXPORT void OutputInterfaceParameter2(_COM_Outptr_opt_ IResource ** bar);                                    /*  */
PATHAPI_EXPORT GPARESULT OutputInterfaceParameterWithEnum(ANNOTATE_LEN(1) IResource ** bar, SomeEnum inEnum);        /* ID3D11Device::CreateTexture2D(...); */
PATHAPI_EXPORT void InterfaceParameter(IResource * bar);                                                             /* vkCmdDispatch(VkCommandBuffer commandBuffer, ...); */
PATHAPI_EXPORT void InterfaceParameterArrayWithSize(ANNOTATE_LEN(count) IResource ** bar, int count);                /* vkCmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer*                      pCommandBuffers);*/
PATHAPI_EXPORT void OutputArrayInterfaceParameter(_Out_writes_opt_(count) IResource** bar, int count);               /* ID3D11DeviceContext::OMGetRenderTargetsAndUnorderedAccessViews(UINT NumRTVs, _Out_writes_opt_(NumRTVs) ID3D11RenderTargetView **ppRenderTargetViews, ...); */
#endif
// END interface_paramter

// START data_parameter
PATHAPI_EXPORT void BlobParameter(ANNOTATE_LEN(size) void* data, size_t size);                                                         /* glBufferData(GLuint buffer, GLusize size, GLvoid* data) */
PATHAPI_EXPORT void ConstBlobParameter(ANNOTATE_LEN(size) void const* data, size_t size);                                                   /* */
PATHAPI_EXPORT void NullTerminatedStringParameter(ANNOTATE_LEN(null-terminated) char const* str);                                      /* vkGetDeviceProcAddr(VkDevice device, const char* pName) */
PATHAPI_EXPORT void OutputPointerWithSizeParameter(ANNOTATE_LEN(1) int * dataSize, ANNOTATE_LEN(*dataSize) void * bar);                /* ID3D12Object::GetPrivateData*/
#ifdef _WIN32
PATHAPI_EXPORT void DataPointerParameter_DependentOnResource(IResource * resource, ANNOTATE_LEN2(1, resource->GetSize()) void ** bar);                                           /* vkMapMemory */
PATHAPI_EXPORT void ArrayParameterWithLengthToCalculate(IResource * resource, ANNOTATE_LEN(resource->GetSize()*pitch) void * data, int pitch); /* ID3D12Resource::WriteToSubresource(..., const void *pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch);*/
#endif
// END data_parameter

// START various_parameters
PATHAPI_EXPORT void PointerToStructWithArrayParameter(ANNOTATE_LEN(1) StructWithArray * bar);
#ifdef _WIN32
PATHAPI_EXPORT void PointerToStructWithInterfaceParameter(ANNOTATE_LEN(1) StructWithInterface* StructWithInterface);      /* Use case needed */
PATHAPI_EXPORT void PointerToStructWithUnionWithSizeParameter(int count, ANNOTATE_LEN(count) StructWithUnion * bars);           /* ID3D12GraphicsCommandList::ResourceBarrier( UINT NumBarriers,  _In_reads_(NumBarriers) const D3D12_RESOURCE_BARRIER *pBarriers);*/
#endif

/* CreateTexture2D(_In_  const D3D11_TEXTURE2D_DESC *pDesc, _In_reads_opt_(_Inexpressible_(pDesc->MipLevels * pDesc->ArraySize))  const D3D11_SUBRESOURCE_DATA *pInitialData, ...);*/
PATHAPI_EXPORT void DataPointerInStructArrayCountInStructPointerParameter(SizeStruct* size, DataStruct* data);

/* ID3D12Device::CreateGraphicsPipelineState` D3D12_GRAPHICS_PIPELINE_STATE_DESC <- D3D12_STREAM_OUTPUT_DESC <- D3D12_SO_DECLARATION_ENTRY * <- LPCSTR */
PATHAPI_EXPORT void NullTerminatedStringInStructArrayInStructInPointerStructParameter(ANNOTATE_LEN(1) const StructWithNames * bar);

// END various_parameters

// START enum_in_function_call
PATHAPI_EXPORT void EnumInFunctionCallParameter(GuitarNotes note);
PATHAPI_EXPORT void EmbeddedEnumInReferencedStructCallParameter(StructWithEmbeddedGuitarNotes const* bar);
PATHAPI_EXPORT void ReferencedEnumInReferencedStructCallParameter(StructWithGuitarNotesPointer const* bar);
// END enum_in_function_call


// START return_values
PATHAPI_EXPORT int PrimitiveReturnValue(int resultVal);                            /* VkResult vkBeginCommandBuffer(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo) */
PATHAPI_EXPORT StructWithPrimitiveMember PritiveStructReturnValue(int resultVal);  /* Use case needed */
#ifdef _WIN32
PATHAPI_EXPORT IResource* InterfaceReturnValue(bool const returnNull);             /* IDirect3D9 * WINAPI Direct3DCreate9(UINT SDKVersion) */
#endif
// END return_values

// clang-format on
