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
namespace cpathapi {


void  Passthrough_NoParameter(struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PrimitiveParameter(int bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PointerParameter(int * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_ConstPointerParameter(const int * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_FixedSizeArrayParameter(int  bar[4], struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_FixedSizeConstArrayParameter(const int  bar[4], struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_FixedSizePointerParameter(int * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_FixedSizeConstPointerParameter(const int * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_FixedSizePointerParameterNoAnnotation(const int * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PointerParamterWithLengthToCalculate(int * data, int count, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_ConstPointerParameterWithLengthToCalculate(const int * data, int count, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_OutputPointerParameter(int * bar, int newBar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_InputOutputPointerParameter(int * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_InputOutputPointerParameter1(int * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_OutputPointerParameterWithEnum(int * bar, SomeEnum inEnum, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PrimitiveStructParameter(StructWithPrimitiveMember bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PointerToPrimitiveStructParameter(StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_ConstPointerToPrimitiveStructParameter(const StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_OutputPointerToPrimitiveStructParameter(StructWithPrimitiveMember * bar, int resultVal, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PointerToPrimitiveStructWithSizeParameter(StructWithPrimitiveMember * bar, size_t count, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_NullTerminatedPointerToPrimitiveStructParameter(StructWithPrimitiveMember ** bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_EndElementTerminatedPointerToPrimitiveStructParameter(StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_EndElementTerminatedPointerToPrimitiveStructParameterNoAnnotation(StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_OutputInterfaceParameter(IResource ** bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_OutputInterfaceParameter1(IResource ** bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_OutputInterfaceParameter2(IResource ** bar, struct ::GPADispatchTable const*& tlsRef);

GPARESULT  Passthrough_OutputInterfaceParameterWithEnum(IResource ** bar, SomeEnum inEnum, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_InterfaceParameter(IResource * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_InterfaceParameterArrayWithSize(IResource ** bar, int count, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_OutputArrayInterfaceParameter(IResource ** bar, int count, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_BlobParameter(void * data, size_t size, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_ConstBlobParameter(const void * data, size_t size, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_NullTerminatedStringParameter(const char * str, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_OutputPointerWithSizeParameter(int * dataSize, void * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_DataPointerParameter_DependentOnResource(IResource * resource, void ** bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_ArrayParameterWithLengthToCalculate(IResource * resource, void * data, int pitch, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PointerToStructWithArrayParameter(StructWithArray * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PointerToStructWithInterfaceParameter(StructWithInterface * StructWithInterface, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PointerToStructWithUnionWithSizeParameter(int count, StructWithUnion * bars, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_DataPointerInStructArrayCountInStructPointerParameter(SizeStruct * size, DataStruct * data, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_NullTerminatedStringInStructArrayInStructInPointerStructParameter(const StructWithNames * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_EnumInFunctionCallParameter(GuitarNotes note, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_EmbeddedEnumInReferencedStructCallParameter(const StructWithEmbeddedGuitarNotes * bar, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_ReferencedEnumInReferencedStructCallParameter(const StructWithGuitarNotesPointer * bar, struct ::GPADispatchTable const*& tlsRef);

int  Passthrough_PrimitiveReturnValue(int resultVal, struct ::GPADispatchTable const*& tlsRef);

StructWithPrimitiveMember  Passthrough_PritiveStructReturnValue(int resultVal, struct ::GPADispatchTable const*& tlsRef);

IResource *  Passthrough_InterfaceReturnValue(const bool returnNull, struct ::GPADispatchTable const*& tlsRef);


namespace iresource {

size_t  Passthrough_GetSize(IResource* self, struct ::GPADispatchTable const*& tlsRef);

size_t  Passthrough_GetHeight(IResource* self, struct ::GPADispatchTable const*& tlsRef);

void *  Passthrough_Map(IResource* self, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_Unmap(IResource* self, struct ::GPADispatchTable const*& tlsRef);

void  Passthrough_PrintContent(IResource* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace iresource


} // cpathapi
} // gpa
