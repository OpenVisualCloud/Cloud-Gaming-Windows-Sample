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
struct
{
    
    void ( *NoParameter)();
    
    void ( *PrimitiveParameter)(int bar);
    
    void ( *PointerParameter)(int * bar);
    
    void ( *ConstPointerParameter)(const int * bar);
    
    void ( *FixedSizeArrayParameter)(int  bar[4]);
    
    void ( *FixedSizeConstArrayParameter)(const int  bar[4]);
    
    void ( *FixedSizePointerParameter)(int * bar);
    
    void ( *FixedSizeConstPointerParameter)(const int * bar);
    
    void ( *FixedSizePointerParameterNoAnnotation)(const int * bar);
    
    void ( *PointerParamterWithLengthToCalculate)(int * data, int count);
    
    void ( *ConstPointerParameterWithLengthToCalculate)(const int * data, int count);
    
    void ( *OutputPointerParameter)(int * bar, int newBar);
    
    void ( *InputOutputPointerParameter)(int * bar);
    
    void ( *InputOutputPointerParameter1)(int * bar);
    
    void ( *OutputPointerParameterWithEnum)(int * bar, SomeEnum inEnum);
    
    void ( *PrimitiveStructParameter)(StructWithPrimitiveMember bar);
    
    void ( *PointerToPrimitiveStructParameter)(StructWithPrimitiveMember * bar);
    
    void ( *ConstPointerToPrimitiveStructParameter)(const StructWithPrimitiveMember * bar);
    
    void ( *OutputPointerToPrimitiveStructParameter)(StructWithPrimitiveMember * bar, int resultVal);
    
    void ( *PointerToPrimitiveStructWithSizeParameter)(StructWithPrimitiveMember * bar, size_t count);
    
    void ( *NullTerminatedPointerToPrimitiveStructParameter)(StructWithPrimitiveMember ** bar);
    
    void ( *EndElementTerminatedPointerToPrimitiveStructParameter)(StructWithPrimitiveMember * bar);
    
    void ( *EndElementTerminatedPointerToPrimitiveStructParameterNoAnnotation)(StructWithPrimitiveMember * bar);
    
    void ( *OutputInterfaceParameter)(IResource ** bar);
    
    void ( *OutputInterfaceParameter1)(IResource ** bar);
    
    void ( *OutputInterfaceParameter2)(IResource ** bar);
    
    GPARESULT ( *OutputInterfaceParameterWithEnum)(IResource ** bar, SomeEnum inEnum);
    
    void ( *InterfaceParameter)(IResource * bar);
    
    void ( *InterfaceParameterArrayWithSize)(IResource ** bar, int count);
    
    void ( *OutputArrayInterfaceParameter)(IResource ** bar, int count);
    
    void ( *BlobParameter)(void * data, size_t size);
    
    void ( *ConstBlobParameter)(const void * data, size_t size);
    
    void ( *NullTerminatedStringParameter)(const char * str);
    
    void ( *OutputPointerWithSizeParameter)(int * dataSize, void * bar);
    
    void ( *DataPointerParameter_DependentOnResource)(IResource * resource, void ** bar);
    
    void ( *ArrayParameterWithLengthToCalculate)(IResource * resource, void * data, int pitch);
    
    void ( *PointerToStructWithArrayParameter)(StructWithArray * bar);
    
    void ( *PointerToStructWithInterfaceParameter)(StructWithInterface * StructWithInterface);
    
    void ( *PointerToStructWithUnionWithSizeParameter)(int count, StructWithUnion * bars);
    
    void ( *DataPointerInStructArrayCountInStructPointerParameter)(SizeStruct * size, DataStruct * data);
    
    void ( *NullTerminatedStringInStructArrayInStructInPointerStructParameter)(const StructWithNames * bar);
    
    void ( *EnumInFunctionCallParameter)(GuitarNotes note);
    
    void ( *EmbeddedEnumInReferencedStructCallParameter)(const StructWithEmbeddedGuitarNotes * bar);
    
    void ( *ReferencedEnumInReferencedStructCallParameter)(const StructWithGuitarNotesPointer * bar);
    
    int ( *PrimitiveReturnValue)(int resultVal);
    
    StructWithPrimitiveMember ( *PritiveStructReturnValue)(int resultVal);
    
    IResource * ( *InterfaceReturnValue)(const bool returnNull);
    
        struct
        {
            
            size_t ( *GetSize)(IResource* self);
                        size_t ( *GetHeight)(IResource* self);
                        void * ( *Map)(IResource* self);
                        void ( *Unmap)(IResource* self);
                        void ( *PrintContent)(IResource* self);
            
        } IResourceTable;
    
} CPathApi;
