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

#import <Foundation/Foundation.h>

#include "annotate.h"

#include "pathological-structs.h"
#include <ostream>
#include <stddef.h>
// clang-format off

@interface IPrimitiveParameter : NSObject
+ (void) PrimitiveParameter:(int) bar;
+ (void) PointerParameter:(ANNOTATE_LEN(1) int*) bar;
+ (void) ConstPointerParameter:(ANNOTATE_LEN(1) int const*) bar;
+ (void) FixedSizeArrayParameter:(int[4]) bar;
+ (void) FixedSizeArrayParameterConst:(int const[4]) bar;
+ (void) FixedSizePointerParameter:(ANNOTATE_LEN(4) int*) bar;
+ (void) FixedSizePointerParameterConst:(ANNOTATE_LEN(4) int const*) bar;
+ (void) FixedSizePointerParameterNoAnnotation:(int const*) bar;
+ (void) PointerParamter:(ANNOTATE_LEN(count) int*) data WithLengthToCalculate:(size_t) count;
+ (void) PointerParamterConst:(ANNOTATE_LEN(count) int const*) data WithLengthToCalculate:(size_t) count;
+ (void) OutputPointerParameter:(ANNOTATE_LEN(1) int*) bar WithValue:(int) value;
+ (void) InputOutputPointerParameter:(ANNOTATE_LEN(1) int*) bar;
+ (void) InputOutputPointerParameter2:(_Inout_opt_ int*) bar;
+ (void) OutputPointerParameter:(ANNOTATE_LEN(1) int*) bar WithEnum:(SomeEnum) inEnum;
@end

@interface IStructParameter : NSObject
+ (void) PrimitiveStructParameter:(StructWithPrimitiveMember) bar;
+ (void) PointerToPrimitiveStructParameter:(ANNOTATE_LEN(1) StructWithPrimitiveMember *) bar;
+ (void) ConstPointerToPrimitiveStructParameter:(ANNOTATE_LEN(1) StructWithPrimitiveMember const*) bar;
+ (void) OutputPointerToPrimitiveStructParameter:(ANNOTATE_LEN(1) StructWithPrimitiveMember *) bar WithValue:(int) value;
+ (void) PointerToPrimitiveStruct:(ANNOTATE_LEN(count) StructWithPrimitiveMember * ) bar WithSizeParameter:(size_t) count;
+ (void) NullTerminatedPointerToPrimitiveStructParameter:(ANNOTATE_LEN(null-terminated) StructWithPrimitiveMember **) bar;
+ (void) EndElementTerminatedPointerToPrimitiveStructParameter:(ANNOTATE_ARRAY_END_ELEM(PRIM_STRUCT_END_ELEM()) StructWithPrimitiveMember*) bar;
+ (void) EndElementTerminatedPointerToPrimitiveStructParameterNoAnnotation:(StructWithPrimitiveMember*) bar;
@end

struct ObjCIdHolder
{
    uint32_t const id;
};

@protocol IObjCResourceProtocol <NSObject>
@property char * mData;

- (instancetype)init;
- (instancetype)initWithValue:(char) value;
- (size_t) GetSize;
- (size_t) GetHeight;
- (void*) Map;
- (void) Unmap;
- (void) PrintContent;
- (uint32_t) DumpId;
@end

@interface IObjCResource : NSObject<IObjCResourceProtocol> {
    @public
    char mData[16];
    uint32_t mId;
}
@end

struct StructWithObjCInterface
{
    ~StructWithObjCInterface() {}
    IObjCResource *barPtr;
};
struct StructTwoObjCInterfaces
{
    ~StructTwoObjCInterfaces() {}
    IObjCResource *barPtr;
    IObjCResource *otherBarPtr;
};
struct StructWithUnionObjCInterfaces
{
   int type;
    union
    {
        StructWithObjCInterface option1;
        StructTwoObjCInterfaces option2;
    };
    StructWithUnionObjCInterfaces() {}
    StructWithUnionObjCInterfaces(const StructWithUnionObjCInterfaces& obj)
    {
        memcpy(this, &obj, sizeof(obj));
    }
    ~StructWithUnionObjCInterfaces() {}
    StructWithUnionObjCInterfaces& operator = (const StructWithUnionObjCInterfaces& obj)
    {
        memcpy(this, &obj, sizeof(obj));
        return *this;
    }
};

typedef void (^NewObjCResourceCompletionHandler)(id <IObjCResourceProtocol> object, NSError * error);

@interface IInterfaceParameter : NSObject
+ (void) OutputInterfaceParameter:(ANNOTATE_LEN(1) IObjCResource **) bar;
+ (void) OutputInterfaceParameter1:(_Outptr_opt_ IObjCResource **) bar;
+ (void) OutputInterfaceParameter2:(_COM_Outptr_opt_ IObjCResource **) bar; // suitable ? necessary ?
+ (GPARESULT) OutputInterfaceParameter:(ANNOTATE_LEN(1) IObjCResource **) bar WithEnum:(SomeEnum) inEnum;
+ (void) InterfaceParameter:(IObjCResource *) bar;
+ (void) ProtocolParameter:(id<IObjCResourceProtocol>) bar;
+ (void) InterfaceParameterArray:(ANNOTATE_LEN(count) IObjCResource *__strong*) bar WithSize:(size_t) count;
+ (void) OutputArrayInterfaceParameter:(_Out_writes_opt_(count) IObjCResource*__strong*) bar WithSize:(size_t) count;
+ (void) ProtocolParameterArray:(id<IObjCResourceProtocol> const *) bars offsets:(const NSUInteger *) offsets withRange:(NSRange) range;
+ (id<IObjCResourceProtocol>) OutputProtocolParameter;
+ (void) OutputProtocolParameter:(bool) createObject completionHandler:(NewObjCResourceCompletionHandler) block;
@end

@interface IDataParameter : NSObject
+ (void) BlobParameter:(ANNOTATE_LEN(size) void*) data withSize:(size_t) size;
+ (void) NullTerminatedStringParameter:(ANNOTATE_LEN(null-terminated) char const*) str;
+ (void) OutputPointer:(ANNOTATE_LEN(*dataSize) void *) bar WithSizeParameter:(ANNOTATE_LEN(1) int *) dataSize;
+ (void) DataPointerParameter:(ANNOTATE_LEN2(1, [resource GetSize]) void **) bar dependentOnResource:(IObjCResource *) resource;
+ (void) ArrayParameterWithLengthToCalculate:(ANNOTATE_LEN([resource GetHeight]*pitch) void *)data withPitch:(size_t)pitch withResource:(IObjCResource *) resource;
 @end

@interface IVariousParameters : NSObject
+ (void) PointerToStructWithArrayParameter:(ANNOTATE_LEN(1) StructWithArray *) bar;
+ (void) PointerToStructWithInterfaceParameter:(ANNOTATE_LEN(1) StructWithObjCInterface *) StructWithInterface;
+ (void) PointerToStructWithUnion:(ANNOTATE_LEN(count) StructWithUnionObjCInterfaces *) bars WithSizeParameter:(size_t) count;
+ (void) DataPointerInStructArrayCountInStructPointerParameter:(DataStruct*) data WithSizeStruct:(SizeStruct*) size;
+ (void) NullTerminatedStringInStructArrayInStructInPointerStructParameter:(ANNOTATE_LEN(1) const StructWithNames *) bar;
@end

@interface IReturnValues : NSObject
+ (int) PrimitiveReturnValue:(int) resultVal;
+ (StructWithPrimitiveMember) PritiveStructReturnValue:(int) resultVal;
+ (IObjCResource*) InterfaceReturnValue:(bool const) returnNull;
+ (NSArray <id<IObjCResourceProtocol>> *) OutputProtocolArray;
@end

std::ostream& operator<< (std::ostream& o, NSRange const& r);
std::ostream& operator<< (std::ostream& o, IObjCResource const& r);
std::ostream& operator<< (std::ostream& o, IObjCResource * const r);
std::ostream& operator<< (std::ostream& o, id<IObjCResourceProtocol> const& r);
std::ostream& operator<< (std::ostream& o, StructWithObjCInterface const& s);
std::ostream& operator<< (std::ostream& o, StructWithUnionObjCInterfaces const& s);
// clang-format on
