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
    
    IPrimitiveParameter * ( *CreatePrimitiveParameter)(struct ::GPADispatchTable const*& tlsRef);
    
    IStructParameter * ( *CreateStructParameter)(struct ::GPADispatchTable const*& tlsRef);
    
    IInterfaceParameter * ( *CreateInterfaceParameter)(struct ::GPADispatchTable const*& tlsRef);
    
    IDataParameter * ( *CreateDataParameter)(struct ::GPADispatchTable const*& tlsRef);
    
    IVariousParameter * ( *CreateVariousParameter)(struct ::GPADispatchTable const*& tlsRef);
    
    IReturnValues * ( *CreateReturnValues)(struct ::GPADispatchTable const*& tlsRef);
    
        struct
        {
            
            HRESULT ( *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG ( *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG ( *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
            
        } IUnknownTable;
            struct
        {
            
            HRESULT ( *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG ( *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG ( *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        size_t ( *GetSize)(ICOMResource* self, struct ::GPADispatchTable const*& tlsRef);
                        void * ( *Map)(ICOMResource* self, struct ::GPADispatchTable const*& tlsRef);
                        void ( *Unmap)(ICOMResource* self, struct ::GPADispatchTable const*& tlsRef);
                        void ( *PrintContent)(ICOMResource* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ICOMResourceTable;
            struct
        {
            
            void ( *PrintContentEx)(ICOMResource1* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ICOMResource1Table;
            struct
        {
            
            HRESULT ( *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG ( *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG ( *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void ( *NoParameter)(INoParameter* self, struct ::GPADispatchTable const*& tlsRef);
            
        } INoParameterTable;
            struct
        {
            
            HRESULT ( *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG ( *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG ( *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void ( *PrimitiveParameter)(IPrimitiveParameter* self, int bar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *PointerParameter)(IPrimitiveParameter* self, int * bar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *ConstPointerParameter)(IPrimitiveParameter* self, const int * bar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *FixedSizeArrayParameter)(IPrimitiveParameter* self, int  bar[4], struct ::GPADispatchTable const*& tlsRef);
                        void ( *FixedSizeConstArrayParameter)(IPrimitiveParameter* self, const int  bar[4], struct ::GPADispatchTable const*& tlsRef);
                        void ( *FixedSizePointerParameter)(IPrimitiveParameter* self, int * bar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *FixedSizeConstPointerParameter)(IPrimitiveParameter* self, const int * bar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *FixedSizePointerParameterNoAnnotation)(IPrimitiveParameter* self, const int * bar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *PointerParamterWithLengthToCalculate)(IPrimitiveParameter* self, int * data, int count, struct ::GPADispatchTable const*& tlsRef);
                        void ( *ConstPointerParameterWithLengthToCalculate)(IPrimitiveParameter* self, const int * data, int count, struct ::GPADispatchTable const*& tlsRef);
                        void ( *OutputPointerParameter)(IPrimitiveParameter* self, int * bar, int newBar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *InputOutputPointerParameter)(IPrimitiveParameter* self, int * bar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *InputOutputPointerParameter1)(IPrimitiveParameter* self, int * bar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *OutputPointerParameterWithEnum)(IPrimitiveParameter* self, int * bar, SomeEnum inEnum, struct ::GPADispatchTable const*& tlsRef);
            
        } IPrimitiveParameterTable;
            struct
        {
            
            HRESULT ( *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG ( *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG ( *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void ( *PrimitiveStructParameter)(IStructParameter* self, StructWithPrimitiveMember bar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *PointerToPrimitiveStructParameter)(IStructParameter* self, StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *ConstPointerToPrimitiveStructParameter)(IStructParameter* self, const StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *OutputPointerToPrimitiveStructParameter)(IStructParameter* self, StructWithPrimitiveMember * bar, int resultVal, struct ::GPADispatchTable const*& tlsRef);
                        void ( *PointerToPrimitiveStructWithSizeParameter)(IStructParameter* self, StructWithPrimitiveMember * bar, size_t count, struct ::GPADispatchTable const*& tlsRef);
                        void ( *NullTerminatedPointerToPrimitiveStructParameter)(IStructParameter* self, StructWithPrimitiveMember ** bar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *EndElementTerminatedPointerToPrimitiveStructParameter)(IStructParameter* self, StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *EndElementTerminatedPointerToPrimitiveStructParameterNoAnnotation)(IStructParameter* self, StructWithPrimitiveMember * bar, struct ::GPADispatchTable const*& tlsRef);
            
        } IStructParameterTable;
            struct
        {
            
            HRESULT ( *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG ( *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG ( *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void ( *OutputInterfaceParameter)(IInterfaceParameter* self, ICOMResource ** bar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *OutputInterfaceParameter1)(IInterfaceParameter* self, ICOMResource ** bar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *OutputInterfaceParameter2)(IInterfaceParameter* self, ICOMResource ** bar, struct ::GPADispatchTable const*& tlsRef);
                        GPARESULT ( *OutputInterfaceParameterWithGUID)(IInterfaceParameter* self, GUID guid, void ** bar, struct ::GPADispatchTable const*& tlsRef);
                        GPARESULT ( *OutputInterfaceParameterWithEnum)(IInterfaceParameter* self, ICOMResource ** bar, SomeEnum inEnum, struct ::GPADispatchTable const*& tlsRef);
                        void ( *InterfaceParameter)(IInterfaceParameter* self, ICOMResource * bar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *InterfaceParameterArrayWithSize)(IInterfaceParameter* self, ICOMResource ** bar, int count, struct ::GPADispatchTable const*& tlsRef);
                        void ( *OutputArrayInterfaceParameter)(IInterfaceParameter* self, ICOMResource ** bar, int count, struct ::GPADispatchTable const*& tlsRef);
            
        } IInterfaceParameterTable;
            struct
        {
            
            HRESULT ( *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG ( *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG ( *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void ( *BlobParameter)(IDataParameter* self, void * data, size_t size, struct ::GPADispatchTable const*& tlsRef);
                        void ( *ConstBlobParameter)(IDataParameter* self, void *const data, size_t size, struct ::GPADispatchTable const*& tlsRef);
                        void ( *NullTerminatedStringParameter)(IDataParameter* self, const char * str, struct ::GPADispatchTable const*& tlsRef);
                        void ( *OutputPointerWithSizeParameter)(IDataParameter* self, int * dataSize, void * bar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *DataPointerParameter_DependentOnResource)(IDataParameter* self, ICOMResource * resource, void ** bar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *ArrayParameterWithLengthToCalculate)(IDataParameter* self, ICOMResource * resource, void * data, int pitch, struct ::GPADispatchTable const*& tlsRef);
            
        } IDataParameterTable;
            struct
        {
            
            HRESULT ( *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG ( *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG ( *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void ( *PointerToStructWithArrayParameter)(IVariousParameter* self, StructWithArray * bar, struct ::GPADispatchTable const*& tlsRef);
                        void ( *PointerToStructWithInterfaceParameter)(IVariousParameter* self, StructWithCOMInterface * StructWithInterface, struct ::GPADispatchTable const*& tlsRef);
                        void ( *PointerToStructWithUnionWithSizeParameter)(IVariousParameter* self, int count, StructWithUnionCOMInterfaces * bars, struct ::GPADispatchTable const*& tlsRef);
                        void ( *DataPointerInStructArrayCountInStructPointerParameter)(IVariousParameter* self, SizeStruct * size, DataStruct * data, struct ::GPADispatchTable const*& tlsRef);
                        void ( *NullTerminatedStringInStructArrayInStructInPointerStructParameter)(IVariousParameter* self, const StructWithNames * bar, struct ::GPADispatchTable const*& tlsRef);
            
        } IVariousParameterTable;
            struct
        {
            
            HRESULT ( *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG ( *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG ( *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        int ( *PrimitiveReturnValue)(IReturnValues* self, int resultVal, struct ::GPADispatchTable const*& tlsRef);
                        StructWithPrimitiveMember* ( *PritiveStructReturnValue)(IReturnValues* self, StructWithPrimitiveMember* outReturnValue, int resultVal, struct ::GPADispatchTable const*& tlsRef);
                        ICOMResource * ( *InterfaceReturnValue)(IReturnValues* self, const bool returnNull, struct ::GPADispatchTable const*& tlsRef);
            
        } IReturnValuesTable;
    
} COMPathApi;
