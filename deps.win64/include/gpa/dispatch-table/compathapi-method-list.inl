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
    
    IPrimitiveParameter * ( *CreatePrimitiveParameter)();
    
    IStructParameter * ( *CreateStructParameter)();
    
    IInterfaceParameter * ( *CreateInterfaceParameter)();
    
    IDataParameter * ( *CreateDataParameter)();
    
    IVariousParameter * ( *CreateVariousParameter)();
    
    IReturnValues * ( *CreateReturnValues)();
    
        struct
        {
            
            HRESULT ( *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG ( *AddRef)(IUnknown* self);
                        ULONG ( *Release)(IUnknown* self);
            
        } IUnknownTable;
            struct
        {
            
            HRESULT ( *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG ( *AddRef)(IUnknown* self);
                        ULONG ( *Release)(IUnknown* self);
                        size_t ( *GetSize)(ICOMResource* self);
                        void * ( *Map)(ICOMResource* self);
                        void ( *Unmap)(ICOMResource* self);
                        void ( *PrintContent)(ICOMResource* self);
            
        } ICOMResourceTable;
            struct
        {
            
            void ( *PrintContentEx)(ICOMResource1* self);
            
        } ICOMResource1Table;
            struct
        {
            
            HRESULT ( *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG ( *AddRef)(IUnknown* self);
                        ULONG ( *Release)(IUnknown* self);
                        void ( *NoParameter)(INoParameter* self);
            
        } INoParameterTable;
            struct
        {
            
            HRESULT ( *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG ( *AddRef)(IUnknown* self);
                        ULONG ( *Release)(IUnknown* self);
                        void ( *PrimitiveParameter)(IPrimitiveParameter* self, int bar);
                        void ( *PointerParameter)(IPrimitiveParameter* self, int * bar);
                        void ( *ConstPointerParameter)(IPrimitiveParameter* self, const int * bar);
                        void ( *FixedSizeArrayParameter)(IPrimitiveParameter* self, int  bar[4]);
                        void ( *FixedSizeConstArrayParameter)(IPrimitiveParameter* self, const int  bar[4]);
                        void ( *FixedSizePointerParameter)(IPrimitiveParameter* self, int * bar);
                        void ( *FixedSizeConstPointerParameter)(IPrimitiveParameter* self, const int * bar);
                        void ( *FixedSizePointerParameterNoAnnotation)(IPrimitiveParameter* self, const int * bar);
                        void ( *PointerParamterWithLengthToCalculate)(IPrimitiveParameter* self, int * data, int count);
                        void ( *ConstPointerParameterWithLengthToCalculate)(IPrimitiveParameter* self, const int * data, int count);
                        void ( *OutputPointerParameter)(IPrimitiveParameter* self, int * bar, int newBar);
                        void ( *InputOutputPointerParameter)(IPrimitiveParameter* self, int * bar);
                        void ( *InputOutputPointerParameter1)(IPrimitiveParameter* self, int * bar);
                        void ( *OutputPointerParameterWithEnum)(IPrimitiveParameter* self, int * bar, SomeEnum inEnum);
            
        } IPrimitiveParameterTable;
            struct
        {
            
            HRESULT ( *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG ( *AddRef)(IUnknown* self);
                        ULONG ( *Release)(IUnknown* self);
                        void ( *PrimitiveStructParameter)(IStructParameter* self, StructWithPrimitiveMember bar);
                        void ( *PointerToPrimitiveStructParameter)(IStructParameter* self, StructWithPrimitiveMember * bar);
                        void ( *ConstPointerToPrimitiveStructParameter)(IStructParameter* self, const StructWithPrimitiveMember * bar);
                        void ( *OutputPointerToPrimitiveStructParameter)(IStructParameter* self, StructWithPrimitiveMember * bar, int resultVal);
                        void ( *PointerToPrimitiveStructWithSizeParameter)(IStructParameter* self, StructWithPrimitiveMember * bar, size_t count);
                        void ( *NullTerminatedPointerToPrimitiveStructParameter)(IStructParameter* self, StructWithPrimitiveMember ** bar);
                        void ( *EndElementTerminatedPointerToPrimitiveStructParameter)(IStructParameter* self, StructWithPrimitiveMember * bar);
                        void ( *EndElementTerminatedPointerToPrimitiveStructParameterNoAnnotation)(IStructParameter* self, StructWithPrimitiveMember * bar);
            
        } IStructParameterTable;
            struct
        {
            
            HRESULT ( *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG ( *AddRef)(IUnknown* self);
                        ULONG ( *Release)(IUnknown* self);
                        void ( *OutputInterfaceParameter)(IInterfaceParameter* self, ICOMResource ** bar);
                        void ( *OutputInterfaceParameter1)(IInterfaceParameter* self, ICOMResource ** bar);
                        void ( *OutputInterfaceParameter2)(IInterfaceParameter* self, ICOMResource ** bar);
                        GPARESULT ( *OutputInterfaceParameterWithGUID)(IInterfaceParameter* self, GUID guid, void ** bar);
                        GPARESULT ( *OutputInterfaceParameterWithEnum)(IInterfaceParameter* self, ICOMResource ** bar, SomeEnum inEnum);
                        void ( *InterfaceParameter)(IInterfaceParameter* self, ICOMResource * bar);
                        void ( *InterfaceParameterArrayWithSize)(IInterfaceParameter* self, ICOMResource ** bar, int count);
                        void ( *OutputArrayInterfaceParameter)(IInterfaceParameter* self, ICOMResource ** bar, int count);
            
        } IInterfaceParameterTable;
            struct
        {
            
            HRESULT ( *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG ( *AddRef)(IUnknown* self);
                        ULONG ( *Release)(IUnknown* self);
                        void ( *BlobParameter)(IDataParameter* self, void * data, size_t size);
                        void ( *ConstBlobParameter)(IDataParameter* self, void *const data, size_t size);
                        void ( *NullTerminatedStringParameter)(IDataParameter* self, const char * str);
                        void ( *OutputPointerWithSizeParameter)(IDataParameter* self, int * dataSize, void * bar);
                        void ( *DataPointerParameter_DependentOnResource)(IDataParameter* self, ICOMResource * resource, void ** bar);
                        void ( *ArrayParameterWithLengthToCalculate)(IDataParameter* self, ICOMResource * resource, void * data, int pitch);
            
        } IDataParameterTable;
            struct
        {
            
            HRESULT ( *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG ( *AddRef)(IUnknown* self);
                        ULONG ( *Release)(IUnknown* self);
                        void ( *PointerToStructWithArrayParameter)(IVariousParameter* self, StructWithArray * bar);
                        void ( *PointerToStructWithInterfaceParameter)(IVariousParameter* self, StructWithCOMInterface * StructWithInterface);
                        void ( *PointerToStructWithUnionWithSizeParameter)(IVariousParameter* self, int count, StructWithUnionCOMInterfaces * bars);
                        void ( *DataPointerInStructArrayCountInStructPointerParameter)(IVariousParameter* self, SizeStruct * size, DataStruct * data);
                        void ( *NullTerminatedStringInStructArrayInStructInPointerStructParameter)(IVariousParameter* self, const StructWithNames * bar);
            
        } IVariousParameterTable;
            struct
        {
            
            HRESULT ( *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG ( *AddRef)(IUnknown* self);
                        ULONG ( *Release)(IUnknown* self);
                        int ( *PrimitiveReturnValue)(IReturnValues* self, int resultVal);
                        StructWithPrimitiveMember* ( *PritiveStructReturnValue)(IReturnValues* self, StructWithPrimitiveMember* outReturnValue, int resultVal);
                        ICOMResource * ( *InterfaceReturnValue)(IReturnValues* self, const bool returnNull);
            
        } IReturnValuesTable;
    
} COMPathApi;
