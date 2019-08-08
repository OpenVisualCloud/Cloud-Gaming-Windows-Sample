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

#ifndef __clang__
// do not use Unknwn.h header during parsing
#include <Unknwn.h>
#endif

// required for MIDL_INTERFACE
#include <rpc.h>
#include <rpcndr.h>

#include <guiddef.h>

// clang-format off
MIDL_INTERFACE("34BBFF44-5CDB-11E7-907B-A6006AD3DBA0")
ICOMResource : public IUnknown
{
    virtual size_t GetSize() = 0;
    virtual void* Map() = 0;
    virtual void Unmap() = 0;
    virtual void PrintContent() = 0;
};

MIDL_INTERFACE("54E01924-67C4-11E7-907B-A6006AD3DBA0")
ICOMResource1 : public ICOMResource
{
    virtual void PrintContentEx() = 0;
};


MIDL_INTERFACE("B8B57C97-C934-4025-A2C0-0ECA73FE2928")
INoParameter : public IUnknown
{
    virtual void NoParameter() = 0;
};

MIDL_INTERFACE("B144B9DA-5CCB-11E7-907B-A6006AD3DBA0")
IPrimitiveParameter : public IUnknown
{
    virtual void PrimitiveParameter(int bar) = 0;
    virtual void PointerParameter(ANNOTATE_LEN(1) int* bar) = 0;
    virtual void ConstPointerParameter(ANNOTATE_LEN(1) int const* bar) = 0;
    virtual void FixedSizeArrayParameter(int bar[4]) = 0;
    virtual void FixedSizeConstArrayParameter(int const bar[4]) = 0;
    virtual void FixedSizePointerParameter(ANNOTATE_LEN(4) int* bar) = 0;
    virtual void FixedSizeConstPointerParameter(ANNOTATE_LEN(4) int const* bar) = 0;
    virtual void FixedSizePointerParameterNoAnnotation(int const* bar) = 0;
    virtual void PointerParamterWithLengthToCalculate(ANNOTATE_LEN(count) int* data, int count) = 0;
    virtual void ConstPointerParameterWithLengthToCalculate(ANNOTATE_LEN(count) int const* data, int count) = 0;
    virtual void OutputPointerParameter(ANNOTATE_LEN(1) int* bar, int newBar) = 0;
    virtual void InputOutputPointerParameter(ANNOTATE_LEN(1) int* bar) = 0;
    virtual void InputOutputPointerParameter1(_Inout_opt_ int* bar) = 0;
    virtual void OutputPointerParameterWithEnum(ANNOTATE_LEN(1) int* bar, SomeEnum inEnum) = 0;
};

PATHAPI_EXPORT IPrimitiveParameter* CreatePrimitiveParameter();

MIDL_INTERFACE("CB1BDC38-5CD7-11E7-907B-A6006AD3DBA0")
IStructParameter : public IUnknown
{
    virtual void PrimitiveStructParameter(StructWithPrimitiveMember bar) = 0;
    virtual void PointerToPrimitiveStructParameter(ANNOTATE_LEN(1) StructWithPrimitiveMember * bar) = 0;
    virtual void ConstPointerToPrimitiveStructParameter(ANNOTATE_LEN(1) StructWithPrimitiveMember const* bar);
    virtual void OutputPointerToPrimitiveStructParameter(ANNOTATE_LEN(1) StructWithPrimitiveMember * bar, int resultVal) = 0;
    virtual void PointerToPrimitiveStructWithSizeParameter(ANNOTATE_LEN(count) StructWithPrimitiveMember * bar, size_t count) = 0;
    virtual void NullTerminatedPointerToPrimitiveStructParameter(ANNOTATE_LEN(null-terminated) StructWithPrimitiveMember * *bar) = 0;
    virtual void EndElementTerminatedPointerToPrimitiveStructParameter(ANNOTATE_ARRAY_END_ELEM(PRIM_STRUCT_END_ELEM()) StructWithPrimitiveMember* bar) = 0;
    virtual void EndElementTerminatedPointerToPrimitiveStructParameterNoAnnotation(StructWithPrimitiveMember* bar) = 0;
};

PATHAPI_EXPORT IStructParameter* CreateStructParameter();

MIDL_INTERFACE("34BBF7E2-5CDB-11E7-907B-A6006AD3DBA0")
IInterfaceParameter : public IUnknown
{
    virtual void OutputInterfaceParameter(ANNOTATE_LEN(1) ICOMResource ** bar) = 0;
    virtual void OutputInterfaceParameter1(_Outptr_opt_ ICOMResource ** bar) = 0;
    virtual void OutputInterfaceParameter2(_COM_Outptr_opt_ ICOMResource ** bar) = 0;
    virtual GPARESULT OutputInterfaceParameterWithGUID(GUID guid, void ** bar) = 0;
    virtual GPARESULT OutputInterfaceParameterWithEnum(ANNOTATE_LEN(1) ICOMResource ** bar, SomeEnum inEnum) = 0;
    virtual void InterfaceParameter(ICOMResource * bar) = 0;
    virtual void InterfaceParameterArrayWithSize(ANNOTATE_LEN(count) ICOMResource ** bar, int count) = 0;
    virtual void OutputArrayInterfaceParameter(_Out_writes_opt_(count) ICOMResource** bar, int count) = 0;
};

PATHAPI_EXPORT IInterfaceParameter* CreateInterfaceParameter();

MIDL_INTERFACE("C2F92BE4-5CD9-11E7-907B-A6006AD3DBA0")
IDataParameter : public IUnknown
{
    virtual void BlobParameter(ANNOTATE_LEN(size) void* data, size_t size) = 0;
    virtual void ConstBlobParameter(ANNOTATE_LEN(size) void* const data, size_t size) = 0;
    virtual void NullTerminatedStringParameter(ANNOTATE_LEN(null-terminated) char const* str) = 0;
    virtual void OutputPointerWithSizeParameter(ANNOTATE_LEN(1) int * dataSize, ANNOTATE_LEN(*dataSize) void * bar) = 0;
    virtual void DataPointerParameter_DependentOnResource(ICOMResource * resource, ANNOTATE_LEN2(1, resource->GetSize()) void ** bar) = 0;
    virtual void ArrayParameterWithLengthToCalculate(ICOMResource * resource, ANNOTATE_LEN(resource->GetSize()*pitch) void * data, int pitch) = 0;
};

PATHAPI_EXPORT IDataParameter* CreateDataParameter();

MIDL_INTERFACE("6646A368-5DA1-11E7-907B-A6006AD3DBA0")
IVariousParameter : public IUnknown
{
    virtual void PointerToStructWithArrayParameter(ANNOTATE_LEN(1) StructWithArray * bar) = 0;
    virtual void PointerToStructWithInterfaceParameter(ANNOTATE_LEN(1) StructWithCOMInterface* StructWithInterface) = 0;
    virtual void PointerToStructWithUnionWithSizeParameter(int count, ANNOTATE_LEN(count) StructWithUnionCOMInterfaces * bars) = 0;
    virtual void DataPointerInStructArrayCountInStructPointerParameter(SizeStruct* size, DataStruct* data) = 0;
    virtual void NullTerminatedStringInStructArrayInStructInPointerStructParameter(ANNOTATE_LEN(1) const StructWithNames * bar) = 0;
};

PATHAPI_EXPORT IVariousParameter* CreateVariousParameter();

MIDL_INTERFACE("95200C9E-5DA4-11E7-907B-A6006AD3DBA0")
IReturnValues : public IUnknown
{
    virtual int PrimitiveReturnValue(int resultVal) = 0;
    virtual StructWithPrimitiveMember PritiveStructReturnValue(int resultVal) = 0;
    virtual ICOMResource* InterfaceReturnValue(bool const returnNull) = 0;
};

PATHAPI_EXPORT IReturnValues* CreateReturnValues();

// clang-format on
