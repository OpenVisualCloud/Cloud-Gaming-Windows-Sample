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






#include "dispatch-table/dispatch-table.h"

namespace gpa {
namespace compathapi {


IPrimitiveParameter *  Passthrough_CreatePrimitiveParameter(struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.CreatePrimitiveParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(tlsRef);
}

IStructParameter *  Passthrough_CreateStructParameter(struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.CreateStructParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(tlsRef);
}

IInterfaceParameter *  Passthrough_CreateInterfaceParameter(struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.CreateInterfaceParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(tlsRef);
}

IDataParameter *  Passthrough_CreateDataParameter(struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.CreateDataParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(tlsRef);
}

IVariousParameter *  Passthrough_CreateVariousParameter(struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.CreateVariousParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(tlsRef);
}

IReturnValues *  Passthrough_CreateReturnValues(struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.CreateReturnValues;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(tlsRef);
}



namespace iunknown {


HRESULT  Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IUnknownTable.QueryInterface;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, riid, ppvObject, tlsRef);
}

ULONG  Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IUnknownTable.AddRef;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

ULONG  Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IUnknownTable.Release;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}


} // namespace iunknown

namespace icomresource {


HRESULT  Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.ICOMResourceTable.QueryInterface;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, riid, ppvObject, tlsRef);
}

ULONG  Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.ICOMResourceTable.AddRef;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

ULONG  Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.ICOMResourceTable.Release;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

size_t  Passthrough_GetSize(ICOMResource* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.ICOMResourceTable.GetSize;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

void *  Passthrough_Map(ICOMResource* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.ICOMResourceTable.Map;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

void  Passthrough_Unmap(ICOMResource* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.ICOMResourceTable.Unmap;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

void  Passthrough_PrintContent(ICOMResource* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.ICOMResourceTable.PrintContent;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}


} // namespace icomresource

namespace icomresource1 {


void  Passthrough_PrintContentEx(ICOMResource1* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.ICOMResource1Table.PrintContentEx;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}


} // namespace icomresource1

namespace inoparameter {


HRESULT  Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.INoParameterTable.QueryInterface;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, riid, ppvObject, tlsRef);
}

ULONG  Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.INoParameterTable.AddRef;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

ULONG  Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.INoParameterTable.Release;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

void  Passthrough_NoParameter(INoParameter* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.INoParameterTable.NoParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}


} // namespace inoparameter

namespace iprimitiveparameter {


HRESULT  Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IPrimitiveParameterTable.QueryInterface;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, riid, ppvObject, tlsRef);
}

ULONG  Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IPrimitiveParameterTable.AddRef;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

ULONG  Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IPrimitiveParameterTable.Release;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

void  Passthrough_PrimitiveParameter(IPrimitiveParameter* self, int bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IPrimitiveParameterTable.PrimitiveParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

void  Passthrough_PointerParameter(IPrimitiveParameter* self, int * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IPrimitiveParameterTable.PointerParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

void  Passthrough_ConstPointerParameter(IPrimitiveParameter* self, const int * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IPrimitiveParameterTable.ConstPointerParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

void  Passthrough_FixedSizeArrayParameter(IPrimitiveParameter* self, int  bar[4], struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IPrimitiveParameterTable.FixedSizeArrayParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

void  Passthrough_FixedSizeConstArrayParameter(IPrimitiveParameter* self, const int  bar[4], struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IPrimitiveParameterTable.FixedSizeConstArrayParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

void  Passthrough_FixedSizePointerParameter(IPrimitiveParameter* self, int * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IPrimitiveParameterTable.FixedSizePointerParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

void  Passthrough_FixedSizeConstPointerParameter(IPrimitiveParameter* self, const int * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IPrimitiveParameterTable.FixedSizeConstPointerParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

void  Passthrough_FixedSizePointerParameterNoAnnotation(IPrimitiveParameter* self, const int * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IPrimitiveParameterTable.FixedSizePointerParameterNoAnnotation;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

void  Passthrough_PointerParamterWithLengthToCalculate(IPrimitiveParameter* self, int * data, int count, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IPrimitiveParameterTable.PointerParamterWithLengthToCalculate;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, data, count, tlsRef);
}

void  Passthrough_ConstPointerParameterWithLengthToCalculate(IPrimitiveParameter* self, const int * data, int count, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IPrimitiveParameterTable.ConstPointerParameterWithLengthToCalculate;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, data, count, tlsRef);
}

void  Passthrough_OutputPointerParameter(IPrimitiveParameter* self, int * bar, int newBar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IPrimitiveParameterTable.OutputPointerParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, newBar, tlsRef);
}

void  Passthrough_InputOutputPointerParameter(IPrimitiveParameter* self, int * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IPrimitiveParameterTable.InputOutputPointerParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

void  Passthrough_InputOutputPointerParameter1(IPrimitiveParameter* self, int * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IPrimitiveParameterTable.InputOutputPointerParameter1;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

void  Passthrough_OutputPointerParameterWithEnum(IPrimitiveParameter* self, int * bar, SomeEnum inEnum, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IPrimitiveParameterTable.OutputPointerParameterWithEnum;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, inEnum, tlsRef);
}


} // namespace iprimitiveparameter

namespace istructparameter {


HRESULT  Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IStructParameterTable.QueryInterface;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, riid, ppvObject, tlsRef);
}

ULONG  Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IStructParameterTable.AddRef;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

ULONG  Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IStructParameterTable.Release;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

void  Passthrough_PrimitiveStructParameter(IStructParameter* self, StructWithPrimitiveMember bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IStructParameterTable.PrimitiveStructParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

void  Passthrough_PointerToPrimitiveStructParameter(IStructParameter* self, StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IStructParameterTable.PointerToPrimitiveStructParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

void  Passthrough_ConstPointerToPrimitiveStructParameter(IStructParameter* self, const StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IStructParameterTable.ConstPointerToPrimitiveStructParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

void  Passthrough_OutputPointerToPrimitiveStructParameter(IStructParameter* self, StructWithPrimitiveMember * bar, int resultVal, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IStructParameterTable.OutputPointerToPrimitiveStructParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, resultVal, tlsRef);
}

void  Passthrough_PointerToPrimitiveStructWithSizeParameter(IStructParameter* self, StructWithPrimitiveMember * bar, size_t count, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IStructParameterTable.PointerToPrimitiveStructWithSizeParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, count, tlsRef);
}

void  Passthrough_NullTerminatedPointerToPrimitiveStructParameter(IStructParameter* self, StructWithPrimitiveMember ** bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IStructParameterTable.NullTerminatedPointerToPrimitiveStructParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

void  Passthrough_EndElementTerminatedPointerToPrimitiveStructParameter(IStructParameter* self, StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IStructParameterTable.EndElementTerminatedPointerToPrimitiveStructParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

void  Passthrough_EndElementTerminatedPointerToPrimitiveStructParameterNoAnnotation(IStructParameter* self, StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IStructParameterTable.EndElementTerminatedPointerToPrimitiveStructParameterNoAnnotation;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}


} // namespace istructparameter

namespace iinterfaceparameter {


HRESULT  Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IInterfaceParameterTable.QueryInterface;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, riid, ppvObject, tlsRef);
}

ULONG  Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IInterfaceParameterTable.AddRef;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

ULONG  Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IInterfaceParameterTable.Release;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

void  Passthrough_OutputInterfaceParameter(IInterfaceParameter* self, ICOMResource ** bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IInterfaceParameterTable.OutputInterfaceParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

void  Passthrough_OutputInterfaceParameter1(IInterfaceParameter* self, ICOMResource ** bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IInterfaceParameterTable.OutputInterfaceParameter1;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

void  Passthrough_OutputInterfaceParameter2(IInterfaceParameter* self, ICOMResource ** bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IInterfaceParameterTable.OutputInterfaceParameter2;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

GPARESULT  Passthrough_OutputInterfaceParameterWithGUID(IInterfaceParameter* self, GUID guid, void ** bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IInterfaceParameterTable.OutputInterfaceParameterWithGUID;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, guid, bar, tlsRef);
}

GPARESULT  Passthrough_OutputInterfaceParameterWithEnum(IInterfaceParameter* self, ICOMResource ** bar, SomeEnum inEnum, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IInterfaceParameterTable.OutputInterfaceParameterWithEnum;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, inEnum, tlsRef);
}

void  Passthrough_InterfaceParameter(IInterfaceParameter* self, ICOMResource * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IInterfaceParameterTable.InterfaceParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

void  Passthrough_InterfaceParameterArrayWithSize(IInterfaceParameter* self, ICOMResource ** bar, int count, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IInterfaceParameterTable.InterfaceParameterArrayWithSize;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, count, tlsRef);
}

void  Passthrough_OutputArrayInterfaceParameter(IInterfaceParameter* self, ICOMResource ** bar, int count, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IInterfaceParameterTable.OutputArrayInterfaceParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, count, tlsRef);
}


} // namespace iinterfaceparameter

namespace idataparameter {


HRESULT  Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IDataParameterTable.QueryInterface;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, riid, ppvObject, tlsRef);
}

ULONG  Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IDataParameterTable.AddRef;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

ULONG  Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IDataParameterTable.Release;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

void  Passthrough_BlobParameter(IDataParameter* self, void * data, size_t size, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IDataParameterTable.BlobParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, data, size, tlsRef);
}

void  Passthrough_ConstBlobParameter(IDataParameter* self, void *const data, size_t size, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IDataParameterTable.ConstBlobParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, data, size, tlsRef);
}

void  Passthrough_NullTerminatedStringParameter(IDataParameter* self, const char * str, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IDataParameterTable.NullTerminatedStringParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, str, tlsRef);
}

void  Passthrough_OutputPointerWithSizeParameter(IDataParameter* self, int * dataSize, void * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IDataParameterTable.OutputPointerWithSizeParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, dataSize, bar, tlsRef);
}

void  Passthrough_DataPointerParameter_DependentOnResource(IDataParameter* self, ICOMResource * resource, void ** bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IDataParameterTable.DataPointerParameter_DependentOnResource;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, resource, bar, tlsRef);
}

void  Passthrough_ArrayParameterWithLengthToCalculate(IDataParameter* self, ICOMResource * resource, void * data, int pitch, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IDataParameterTable.ArrayParameterWithLengthToCalculate;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, resource, data, pitch, tlsRef);
}


} // namespace idataparameter

namespace ivariousparameter {


HRESULT  Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IVariousParameterTable.QueryInterface;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, riid, ppvObject, tlsRef);
}

ULONG  Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IVariousParameterTable.AddRef;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

ULONG  Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IVariousParameterTable.Release;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

void  Passthrough_PointerToStructWithArrayParameter(IVariousParameter* self, StructWithArray * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IVariousParameterTable.PointerToStructWithArrayParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}

void  Passthrough_PointerToStructWithInterfaceParameter(IVariousParameter* self, StructWithCOMInterface * StructWithInterface, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IVariousParameterTable.PointerToStructWithInterfaceParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, StructWithInterface, tlsRef);
}

void  Passthrough_PointerToStructWithUnionWithSizeParameter(IVariousParameter* self, int count, StructWithUnionCOMInterfaces * bars, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IVariousParameterTable.PointerToStructWithUnionWithSizeParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, count, bars, tlsRef);
}

void  Passthrough_DataPointerInStructArrayCountInStructPointerParameter(IVariousParameter* self, SizeStruct * size, DataStruct * data, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IVariousParameterTable.DataPointerInStructArrayCountInStructPointerParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, size, data, tlsRef);
}

void  Passthrough_NullTerminatedStringInStructArrayInStructInPointerStructParameter(IVariousParameter* self, const StructWithNames * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IVariousParameterTable.NullTerminatedStringInStructArrayInStructInPointerStructParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, bar, tlsRef);
}


} // namespace ivariousparameter

namespace ireturnvalues {


HRESULT  Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IReturnValuesTable.QueryInterface;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, riid, ppvObject, tlsRef);
}

ULONG  Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IReturnValuesTable.AddRef;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

ULONG  Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IReturnValuesTable.Release;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

int  Passthrough_PrimitiveReturnValue(IReturnValues* self, int resultVal, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IReturnValuesTable.PrimitiveReturnValue;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, resultVal, tlsRef);
}

StructWithPrimitiveMember*  Passthrough_PritiveStructReturnValue(IReturnValues* self, StructWithPrimitiveMember* outReturnValue, int resultVal, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IReturnValuesTable.PritiveStructReturnValue;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, outReturnValue, resultVal, tlsRef);
}

ICOMResource *  Passthrough_InterfaceReturnValue(IReturnValues* self, const bool returnNull, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->COMPathApi.IReturnValuesTable.InterfaceReturnValue;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, returnNull, tlsRef);
}


} // namespace ireturnvalues


} // compathapi
} // gpa
