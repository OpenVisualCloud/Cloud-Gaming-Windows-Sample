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


void  Passthrough_NoParameter(struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.NoParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(tlsRef);
}

void  Passthrough_PrimitiveParameter(int bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.PrimitiveParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_PointerParameter(int * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.PointerParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_ConstPointerParameter(const int * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.ConstPointerParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_FixedSizeArrayParameter(int  bar[4], struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.FixedSizeArrayParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_FixedSizeConstArrayParameter(const int  bar[4], struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.FixedSizeConstArrayParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_FixedSizePointerParameter(int * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.FixedSizePointerParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_FixedSizeConstPointerParameter(const int * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.FixedSizeConstPointerParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_FixedSizePointerParameterNoAnnotation(const int * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.FixedSizePointerParameterNoAnnotation;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_PointerParamterWithLengthToCalculate(int * data, int count, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.PointerParamterWithLengthToCalculate;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(data, count, tlsRef);
}

void  Passthrough_ConstPointerParameterWithLengthToCalculate(const int * data, int count, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.ConstPointerParameterWithLengthToCalculate;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(data, count, tlsRef);
}

void  Passthrough_OutputPointerParameter(int * bar, int newBar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.OutputPointerParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, newBar, tlsRef);
}

void  Passthrough_InputOutputPointerParameter(int * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.InputOutputPointerParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_InputOutputPointerParameter1(int * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.InputOutputPointerParameter1;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_OutputPointerParameterWithEnum(int * bar, SomeEnum inEnum, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.OutputPointerParameterWithEnum;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, inEnum, tlsRef);
}

void  Passthrough_PrimitiveStructParameter(StructWithPrimitiveMember bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.PrimitiveStructParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_PointerToPrimitiveStructParameter(StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.PointerToPrimitiveStructParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_ConstPointerToPrimitiveStructParameter(const StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.ConstPointerToPrimitiveStructParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_OutputPointerToPrimitiveStructParameter(StructWithPrimitiveMember * bar, int resultVal, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.OutputPointerToPrimitiveStructParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, resultVal, tlsRef);
}

void  Passthrough_PointerToPrimitiveStructWithSizeParameter(StructWithPrimitiveMember * bar, size_t count, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.PointerToPrimitiveStructWithSizeParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, count, tlsRef);
}

void  Passthrough_NullTerminatedPointerToPrimitiveStructParameter(StructWithPrimitiveMember ** bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.NullTerminatedPointerToPrimitiveStructParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_EndElementTerminatedPointerToPrimitiveStructParameter(StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.EndElementTerminatedPointerToPrimitiveStructParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_EndElementTerminatedPointerToPrimitiveStructParameterNoAnnotation(StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.EndElementTerminatedPointerToPrimitiveStructParameterNoAnnotation;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_OutputInterfaceParameter(IResource ** bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.OutputInterfaceParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_OutputInterfaceParameter1(IResource ** bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.OutputInterfaceParameter1;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_OutputInterfaceParameter2(IResource ** bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.OutputInterfaceParameter2;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

GPARESULT  Passthrough_OutputInterfaceParameterWithEnum(IResource ** bar, SomeEnum inEnum, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.OutputInterfaceParameterWithEnum;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, inEnum, tlsRef);
}

void  Passthrough_InterfaceParameter(IResource * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.InterfaceParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_InterfaceParameterArrayWithSize(IResource ** bar, int count, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.InterfaceParameterArrayWithSize;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, count, tlsRef);
}

void  Passthrough_OutputArrayInterfaceParameter(IResource ** bar, int count, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.OutputArrayInterfaceParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, count, tlsRef);
}

void  Passthrough_BlobParameter(void * data, size_t size, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.BlobParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(data, size, tlsRef);
}

void  Passthrough_ConstBlobParameter(const void * data, size_t size, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.ConstBlobParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(data, size, tlsRef);
}

void  Passthrough_NullTerminatedStringParameter(const char * str, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.NullTerminatedStringParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(str, tlsRef);
}

void  Passthrough_OutputPointerWithSizeParameter(int * dataSize, void * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.OutputPointerWithSizeParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(dataSize, bar, tlsRef);
}

void  Passthrough_DataPointerParameter_DependentOnResource(IResource * resource, void ** bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.DataPointerParameter_DependentOnResource;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(resource, bar, tlsRef);
}

void  Passthrough_ArrayParameterWithLengthToCalculate(IResource * resource, void * data, int pitch, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.ArrayParameterWithLengthToCalculate;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(resource, data, pitch, tlsRef);
}

void  Passthrough_PointerToStructWithArrayParameter(StructWithArray * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.PointerToStructWithArrayParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_PointerToStructWithInterfaceParameter(StructWithInterface * StructWithInterface, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.PointerToStructWithInterfaceParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(StructWithInterface, tlsRef);
}

void  Passthrough_PointerToStructWithUnionWithSizeParameter(int count, StructWithUnion * bars, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.PointerToStructWithUnionWithSizeParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(count, bars, tlsRef);
}

void  Passthrough_DataPointerInStructArrayCountInStructPointerParameter(SizeStruct * size, DataStruct * data, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.DataPointerInStructArrayCountInStructPointerParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(size, data, tlsRef);
}

void  Passthrough_NullTerminatedStringInStructArrayInStructInPointerStructParameter(const StructWithNames * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.NullTerminatedStringInStructArrayInStructInPointerStructParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_EnumInFunctionCallParameter(GuitarNotes note, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.EnumInFunctionCallParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(note, tlsRef);
}

void  Passthrough_EmbeddedEnumInReferencedStructCallParameter(const StructWithEmbeddedGuitarNotes * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.EmbeddedEnumInReferencedStructCallParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

void  Passthrough_ReferencedEnumInReferencedStructCallParameter(const StructWithGuitarNotesPointer * bar, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.ReferencedEnumInReferencedStructCallParameter;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(bar, tlsRef);
}

int  Passthrough_PrimitiveReturnValue(int resultVal, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.PrimitiveReturnValue;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(resultVal, tlsRef);
}

StructWithPrimitiveMember  Passthrough_PritiveStructReturnValue(int resultVal, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.PritiveStructReturnValue;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(resultVal, tlsRef);
}

IResource *  Passthrough_InterfaceReturnValue(const bool returnNull, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.InterfaceReturnValue;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(returnNull, tlsRef);
}



namespace iresource {


size_t  Passthrough_GetSize(IResource* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.IResourceTable.GetSize;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

size_t  Passthrough_GetHeight(IResource* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.IResourceTable.GetHeight;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

void *  Passthrough_Map(IResource* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.IResourceTable.Map;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

void  Passthrough_Unmap(IResource* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.IResourceTable.Unmap;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}

void  Passthrough_PrintContent(IResource* self, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->CPathApi.IResourceTable.PrintContent;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(self, tlsRef);
}


} // namespace iresource


} // cpathapi
} // gpa
