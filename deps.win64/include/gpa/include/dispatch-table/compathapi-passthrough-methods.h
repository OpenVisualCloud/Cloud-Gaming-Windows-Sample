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


IPrimitiveParameter *  Passthrough_CreatePrimitiveParameter(struct ::GPADispatchTable const*& tlsRef);

IStructParameter *  Passthrough_CreateStructParameter(struct ::GPADispatchTable const*& tlsRef);

IInterfaceParameter *  Passthrough_CreateInterfaceParameter(struct ::GPADispatchTable const*& tlsRef);

IDataParameter *  Passthrough_CreateDataParameter(struct ::GPADispatchTable const*& tlsRef);

IVariousParameter *  Passthrough_CreateVariousParameter(struct ::GPADispatchTable const*& tlsRef);

IReturnValues *  Passthrough_CreateReturnValues(struct ::GPADispatchTable const*& tlsRef);


namespace iunknown {

HRESULT  Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG  Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG  Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace iunknown
namespace icomresource {

HRESULT  Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG  Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG  Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

size_t  Passthrough_GetSize(ICOMResource* self, struct ::GPADispatchTable const*& tlsRef);

void *  Passthrough_Map(ICOMResource* self, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_Unmap(ICOMResource* self, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PrintContent(ICOMResource* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace icomresource
namespace icomresource1 {

void  Passthrough_PrintContentEx(ICOMResource1* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace icomresource1
namespace inoparameter {

HRESULT  Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG  Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG  Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_NoParameter(INoParameter* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace inoparameter
namespace iprimitiveparameter {

HRESULT  Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG  Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG  Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PrimitiveParameter(IPrimitiveParameter* self, int bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PointerParameter(IPrimitiveParameter* self, int * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_ConstPointerParameter(IPrimitiveParameter* self, const int * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_FixedSizeArrayParameter(IPrimitiveParameter* self, int  bar[4], struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_FixedSizeConstArrayParameter(IPrimitiveParameter* self, const int  bar[4], struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_FixedSizePointerParameter(IPrimitiveParameter* self, int * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_FixedSizeConstPointerParameter(IPrimitiveParameter* self, const int * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_FixedSizePointerParameterNoAnnotation(IPrimitiveParameter* self, const int * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PointerParamterWithLengthToCalculate(IPrimitiveParameter* self, int * data, int count, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_ConstPointerParameterWithLengthToCalculate(IPrimitiveParameter* self, const int * data, int count, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_OutputPointerParameter(IPrimitiveParameter* self, int * bar, int newBar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_InputOutputPointerParameter(IPrimitiveParameter* self, int * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_InputOutputPointerParameter1(IPrimitiveParameter* self, int * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_OutputPointerParameterWithEnum(IPrimitiveParameter* self, int * bar, SomeEnum inEnum, struct ::GPADispatchTable const*& tlsRef);

} // namespace iprimitiveparameter
namespace istructparameter {

HRESULT  Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG  Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG  Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PrimitiveStructParameter(IStructParameter* self, StructWithPrimitiveMember bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PointerToPrimitiveStructParameter(IStructParameter* self, StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_ConstPointerToPrimitiveStructParameter(IStructParameter* self, const StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_OutputPointerToPrimitiveStructParameter(IStructParameter* self, StructWithPrimitiveMember * bar, int resultVal, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PointerToPrimitiveStructWithSizeParameter(IStructParameter* self, StructWithPrimitiveMember * bar, size_t count, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_NullTerminatedPointerToPrimitiveStructParameter(IStructParameter* self, StructWithPrimitiveMember ** bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_EndElementTerminatedPointerToPrimitiveStructParameter(IStructParameter* self, StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_EndElementTerminatedPointerToPrimitiveStructParameterNoAnnotation(IStructParameter* self, StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef);

} // namespace istructparameter
namespace iinterfaceparameter {

HRESULT  Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG  Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG  Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_OutputInterfaceParameter(IInterfaceParameter* self, ICOMResource ** bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_OutputInterfaceParameter1(IInterfaceParameter* self, ICOMResource ** bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_OutputInterfaceParameter2(IInterfaceParameter* self, ICOMResource ** bar, struct ::GPADispatchTable const*& tlsRef);

GPARESULT  Passthrough_OutputInterfaceParameterWithGUID(IInterfaceParameter* self, GUID guid, void ** bar, struct ::GPADispatchTable const*& tlsRef);

GPARESULT  Passthrough_OutputInterfaceParameterWithEnum(IInterfaceParameter* self, ICOMResource ** bar, SomeEnum inEnum, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_InterfaceParameter(IInterfaceParameter* self, ICOMResource * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_InterfaceParameterArrayWithSize(IInterfaceParameter* self, ICOMResource ** bar, int count, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_OutputArrayInterfaceParameter(IInterfaceParameter* self, ICOMResource ** bar, int count, struct ::GPADispatchTable const*& tlsRef);

} // namespace iinterfaceparameter
namespace idataparameter {

HRESULT  Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG  Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG  Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_BlobParameter(IDataParameter* self, void * data, size_t size, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_ConstBlobParameter(IDataParameter* self, void *const data, size_t size, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_NullTerminatedStringParameter(IDataParameter* self, const char * str, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_OutputPointerWithSizeParameter(IDataParameter* self, int * dataSize, void * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_DataPointerParameter_DependentOnResource(IDataParameter* self, ICOMResource * resource, void ** bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_ArrayParameterWithLengthToCalculate(IDataParameter* self, ICOMResource * resource, void * data, int pitch, struct ::GPADispatchTable const*& tlsRef);

} // namespace idataparameter
namespace ivariousparameter {

HRESULT  Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG  Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG  Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PointerToStructWithArrayParameter(IVariousParameter* self, StructWithArray * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PointerToStructWithInterfaceParameter(IVariousParameter* self, StructWithCOMInterface * StructWithInterface, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PointerToStructWithUnionWithSizeParameter(IVariousParameter* self, int count, StructWithUnionCOMInterfaces * bars, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_DataPointerInStructArrayCountInStructPointerParameter(IVariousParameter* self, SizeStruct * size, DataStruct * data, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_NullTerminatedStringInStructArrayInStructInPointerStructParameter(IVariousParameter* self, const StructWithNames * bar, struct ::GPADispatchTable const*& tlsRef);

} // namespace ivariousparameter
namespace ireturnvalues {

HRESULT  Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG  Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG  Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

int  Passthrough_PrimitiveReturnValue(IReturnValues* self, int resultVal, struct ::GPADispatchTable const*& tlsRef);

StructWithPrimitiveMember*  Passthrough_PritiveStructReturnValue(IReturnValues* self, StructWithPrimitiveMember* outReturnValue, int resultVal, struct ::GPADispatchTable const*& tlsRef);

ICOMResource *  Passthrough_InterfaceReturnValue(IReturnValues* self, const bool returnNull, struct ::GPADispatchTable const*& tlsRef);

} // namespace ireturnvalues


} // compathapi
} // gpa
