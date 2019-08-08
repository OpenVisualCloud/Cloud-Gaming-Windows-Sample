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
    
    void ( *NoParameter)(struct ::GPADispatchTable const*& tlsRef);
    
    void ( *PrimitiveParameter)(int bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *PointerParameter)(int * bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *ConstPointerParameter)(const int * bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *FixedSizeArrayParameter)(int  bar[4], struct ::GPADispatchTable const*& tlsRef);
    
    void ( *FixedSizeConstArrayParameter)(const int  bar[4], struct ::GPADispatchTable const*& tlsRef);
    
    void ( *FixedSizePointerParameter)(int * bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *FixedSizeConstPointerParameter)(const int * bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *FixedSizePointerParameterNoAnnotation)(const int * bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *PointerParamterWithLengthToCalculate)(int * data, int count, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *ConstPointerParameterWithLengthToCalculate)(const int * data, int count, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *OutputPointerParameter)(int * bar, int newBar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *InputOutputPointerParameter)(int * bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *InputOutputPointerParameter1)(int * bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *OutputPointerParameterWithEnum)(int * bar, SomeEnum inEnum, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *PrimitiveStructParameter)(StructWithPrimitiveMember bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *PointerToPrimitiveStructParameter)(StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *ConstPointerToPrimitiveStructParameter)(const StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *OutputPointerToPrimitiveStructParameter)(StructWithPrimitiveMember * bar, int resultVal, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *PointerToPrimitiveStructWithSizeParameter)(StructWithPrimitiveMember * bar, size_t count, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *NullTerminatedPointerToPrimitiveStructParameter)(StructWithPrimitiveMember ** bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *EndElementTerminatedPointerToPrimitiveStructParameter)(StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *EndElementTerminatedPointerToPrimitiveStructParameterNoAnnotation)(StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *OutputInterfaceParameter)(IResource ** bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *OutputInterfaceParameter1)(IResource ** bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *OutputInterfaceParameter2)(IResource ** bar, struct ::GPADispatchTable const*& tlsRef);
    
    GPARESULT ( *OutputInterfaceParameterWithEnum)(IResource ** bar, SomeEnum inEnum, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *InterfaceParameter)(IResource * bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *InterfaceParameterArrayWithSize)(IResource ** bar, int count, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *OutputArrayInterfaceParameter)(IResource ** bar, int count, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *BlobParameter)(void * data, size_t size, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *ConstBlobParameter)(const void * data, size_t size, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *NullTerminatedStringParameter)(const char * str, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *OutputPointerWithSizeParameter)(int * dataSize, void * bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *DataPointerParameter_DependentOnResource)(IResource * resource, void ** bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *ArrayParameterWithLengthToCalculate)(IResource * resource, void * data, int pitch, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *PointerToStructWithArrayParameter)(StructWithArray * bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *PointerToStructWithInterfaceParameter)(StructWithInterface * StructWithInterface, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *PointerToStructWithUnionWithSizeParameter)(int count, StructWithUnion * bars, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *DataPointerInStructArrayCountInStructPointerParameter)(SizeStruct * size, DataStruct * data, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *NullTerminatedStringInStructArrayInStructInPointerStructParameter)(const StructWithNames * bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *EnumInFunctionCallParameter)(GuitarNotes note, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *EmbeddedEnumInReferencedStructCallParameter)(const StructWithEmbeddedGuitarNotes * bar, struct ::GPADispatchTable const*& tlsRef);
    
    void ( *ReferencedEnumInReferencedStructCallParameter)(const StructWithGuitarNotesPointer * bar, struct ::GPADispatchTable const*& tlsRef);
    
    int ( *PrimitiveReturnValue)(int resultVal, struct ::GPADispatchTable const*& tlsRef);
    
    StructWithPrimitiveMember ( *PritiveStructReturnValue)(int resultVal, struct ::GPADispatchTable const*& tlsRef);
    
    IResource * ( *InterfaceReturnValue)(const bool returnNull, struct ::GPADispatchTable const*& tlsRef);
    
        struct
        {
            
            size_t ( *GetSize)(IResource* self, struct ::GPADispatchTable const*& tlsRef);
                        size_t ( *GetHeight)(IResource* self, struct ::GPADispatchTable const*& tlsRef);
                        void * ( *Map)(IResource* self, struct ::GPADispatchTable const*& tlsRef);
                        void ( *Unmap)(IResource* self, struct ::GPADispatchTable const*& tlsRef);
                        void ( *PrintContent)(IResource* self, struct ::GPADispatchTable const*& tlsRef);
            
        } IResourceTable;
    
} CPathApi;
