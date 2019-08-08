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

#if defined(_WIN32)
#ifndef __clang__
#if defined(GPA_EXPORTS)
#define PATHAPI_EXPORT extern "C" __declspec(dllimport)
#else
#define PATHAPI_EXPORT extern "C" __declspec(dllexport)
#endif  // defined(GPA_EXPORTS)
#else
#define PATHAPI_EXPORT
#endif  // ndef __clang__
#else   // defined(_WIN32)
#ifndef __clang__
#define PATHAPI_EXPORT extern "C"
#else
#define PATHAPI_EXPORT
#endif
#endif  // defined(_WIN32)

#include "annotate.h"
typedef /*_Return_type_success_(return >= 0)*/ long GPARESULT;
#define E_GPA_INVALIDARG (GPARESULT)0x80070057
#define S_GPA_OK (GPARESULT)0x0
#define GPA_SUCCEEDED(result) (((GPARESULT)(result)) >= 0)

typedef struct
{
    int x;
} StructWithPrimitiveMember;

#define PRIM_STRUCT_END_ELEM() \
    {                          \
        0xFF                   \
    }

typedef struct
{
    int count;
    ANNOTATE_LEN(count)
    void* array;
} StructWithArray;

#ifdef _WIN32
struct IResource;
struct ICOMResource;

typedef struct
{
    struct IResource* barPtr;
} StructWithInterface;

typedef struct
{
    struct ICOMResource* barPtr;
} StructWithCOMInterface;

typedef struct
{
    struct IResource* barPtr;
    struct IResource* otherBarPtr;
} StructTwoInterfaces;

typedef struct
{
    struct ICOMResource* barPtr;
    struct ICOMResource* otherBarPtr;
} StructTwoCOMInterfaces;

typedef struct
{
    int type;
    union
    {
        StructWithInterface option1;
        StructTwoInterfaces option2;
    };
} StructWithUnion;

typedef struct
{
    int type;
    union
    {
        StructWithCOMInterface option1;
        StructTwoCOMInterfaces option2;
    };
} StructWithUnionCOMInterfaces;
#endif

typedef struct
{
    int count;
    int multiplier;
} SizeStruct;  // not sure, if size and data should be in different structures
typedef struct
{
    void* data;
    int pitch;
} DataStruct;

typedef struct
{
    ANNOTATE_LEN(null - terminated)
    char const* Name;
} NameStruct;

typedef struct
{ /*_Field_size_full_(count)*/
    ANNOTATE_LEN(count)
    const NameStruct* Names;
    int count;
} NamesSet;

typedef struct
{
    NamesSet TheSet;
} StructWithNames;

// note -- this is meant to mimic VkLayerProperties
typedef struct
{
    char someBuf[256];
    int someValue;
    int someOtherValue;
    char someOtherBuf[256];
} StructWithEmbeddedStrings;

typedef enum {
    enumValue0 = 0,
    enumValue1 = 1,
    maxEnumValue = 1
} SomeEnum;

enum GuitarNotes {
    A,
    B,
    C,
    D,
    E,
    F,
    G,
};

typedef struct
{
    int size;
    GuitarNotes note;
} StructWithEmbeddedGuitarNotes;

typedef struct
{
    int count;
    /*_Field_size_full_(count)*/
    ANNOTATE_LEN(count)
    GuitarNotes const* notes;
} StructWithGuitarNotesPointer;
