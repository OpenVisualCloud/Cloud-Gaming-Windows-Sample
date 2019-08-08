/*
 Copyright (2018) Intel Corporation

  The source code contained or described herein and all documents related to
 the source code ("Material") are owned by Intel Corporation or its suppliers
 or licensors. Title to the Material remains with Intel Corporation or its
 suppliers and licensors. The Material contains trade secrets and proprietary
 and confidential information of Intel or its suppliers and licensors. The
 Material is protected by worldwide copyright and trade secret laws and treaty
 provisions. No part of the Material may be used, copied, reproduced, modified,
 published, uploaded, posted, transmitted, distributed, or disclosed in any way
 without Intel's prior express written permission.

  No license under any patent, copyright, trade secret or other intellectual
 property right is granted to or conferred upon you by disclosure or delivery
 of the Materials, either expressly, by implication, inducement, estoppel or
 otherwise. Any license under such intellectual property rights must be express
 and approved by Intel in writing.
 */

#include "gtest/gtest.h"

#include "igpa-config.h"
#include "system/module.h"
#include "filesystem/directory.h"
#include "utility/common.h"
#include "utility/unicode.h"

namespace {

using namespace testing;
using namespace gpa;
using namespace system;

TCHAR const* const sModuleName = _T(_TEST_LIB_PATHNAME);
    
// First, make sure that the shared object isn't loaded
TEST(Module, ModuleNotLoaded)
{
    TCHAR moduleDirectory[kMaxPathLength] = {};
    TCHAR fullPathToModule[kMaxPathLength] = {};
    filesystem::Directory::GetCurrentExecutableDirectory(moduleDirectory, kMaxPathLength);
    SPRINTF(fullPathToModule, kMaxPathLength, _T("%s/%s"), moduleDirectory, sModuleName);
   
    void* handle = FindModuleHandle(fullPathToModule);
    ASSERT_EQ(nullptr, handle);
}

// then, make sure we can open the shared object (keep the variables in local
// scope for now, so that some subsequent tests can work -- CloseModule() is
// not guaranteed to unload the module)
TEST(Module, LoadAModuleLocalOnly)
{
    TCHAR moduleDirectory[kMaxPathLength] = {};
    TCHAR fullPathToModule[kMaxPathLength] = {};
    filesystem::Directory::GetCurrentExecutableDirectory(moduleDirectory, kMaxPathLength);
    SPRINTF(fullPathToModule, kMaxPathLength, _T("%s/%s"), moduleDirectory, sModuleName);

    void* handle = LoadModule(fullPathToModule, kLocalScope);
    ASSERT_NE(nullptr, handle);

    CloseModule(handle);
}

// check to make sure that we can access the handle to the previously-loaded module
TEST(Module, GetHandleToLoadedModule)
{
    TCHAR moduleDirectory[kMaxPathLength] = {};
    TCHAR fullPathToModule[kMaxPathLength] = {};
    filesystem::Directory::GetCurrentExecutableDirectory(moduleDirectory, kMaxPathLength);
    SPRINTF(fullPathToModule, kMaxPathLength, _T("%s/%s"), moduleDirectory, sModuleName);

    // first, open the module
    void* module = LoadModule(fullPathToModule, kLocalScope);

    // then, get a handle to it
    void* handle = FindModuleHandle(fullPathToModule);
    ASSERT_NE(nullptr, handle);
    ASSERT_EQ(handle, module);

    // close the module
    CloseModule(module);
}

// when symbols are loaded into local scope (the module only) we should not be
// able to find them in the "global" symbol space (that is, the space we access
// by supplying NULL to GetSymbolAddress())
TEST(Module, DontFindGlobalVariableInModuleWithLocalSymbols)
{
    TCHAR moduleDirectory[kMaxPathLength] = {};
    TCHAR fullPathToModule[kMaxPathLength] = {};
    filesystem::Directory::GetCurrentExecutableDirectory(moduleDirectory, kMaxPathLength);
    SPRINTF(fullPathToModule, kMaxPathLength, _T("%s/%s"), moduleDirectory, sModuleName);

    void* handle = LoadModule(fullPathToModule, kLocalScope);
    void* symbol = GetSymbolAddress(nullptr, "MyInt");
    ASSERT_EQ(nullptr, symbol);

    CloseModule(handle);
}

// but, we can find that symbol if we ask the module directly (that is, supplying
// the module handle to GetSymbolAddress)
TEST(Module, FindVariableInModuleWithLocalSymbols)
{
    TCHAR moduleDirectory[kMaxPathLength] = {};
    TCHAR fullPathToModule[kMaxPathLength] = {};
    filesystem::Directory::GetCurrentExecutableDirectory(moduleDirectory, kMaxPathLength);
    SPRINTF(fullPathToModule, kMaxPathLength, _T("%s/%s"), moduleDirectory, sModuleName);

    void* handle = LoadModule(fullPathToModule, kLocalScope);
    void* symbol = GetSymbolAddress(handle, "MyInt");
    ASSERT_NE(nullptr, symbol);

    // symbol should have the value 4
    ASSERT_EQ(4, *(int*)symbol);

    CloseModule(handle);
}

// Apple/Windows note; we need to skip this test on Apple and Windows because DLLs there are linked
// with a two-level namespace; on Apple, it is necessary to link with -flat_namespace in order to
// attain the same behavior as we get on Linux. However, that is discouraged, and I suspect it
// breaks the interposing as well, so we'll just not run this test on Apple or Windows and move
// on...
#if !defined(__APPLE__) && !defined(_WIN32)
// and when we finally load the module with global symbol scope, we should be able
// to find the symbols in the global symbol space (again, NULL handle to GetSymbolAddress())
TEST(Module, FindVariableGloballyInModuleWithGlobalSymbols)
{
    TCHAR moduleDirectory[kMaxPathLength] = {};
    TCHAR fullPathToModule[kMaxPathLength] = {};
    filesystem::Directory::GetCurrentExecutableDirectory(moduleDirectory, kMaxPathLength);
    SPRINTF(fullPathToModule, kMaxPathLength, _T("%s/%s"), moduleDirectory, sModuleName);

    void* handle = LoadModule(fullPathToModule, kGlobalScope);
    void* symbol = GetSymbolAddress(nullptr, "MyInt");
    ASSERT_NE(nullptr, symbol);

    // symbol should have the value 4
    ASSERT_EQ(4, *(int*)symbol);

    CloseModule(handle);
}
#endif

// and the coup de gras, find a function in the module and execute it
TEST(Module, FindFunctionInModule)
{
    TCHAR moduleDirectory[kMaxPathLength] = {};
    TCHAR fullPathToModule[kMaxPathLength] = {};
    filesystem::Directory::GetCurrentExecutableDirectory(moduleDirectory, kMaxPathLength);
    SPRINTF(fullPathToModule, kMaxPathLength, _T("%s/%s"), moduleDirectory, sModuleName);

    void* handle = LoadModule(fullPathToModule);
    void* symbol = GetSymbolAddress(handle, "MyFunction");
    ASSERT_NE(nullptr, symbol);

    // function should return whatever int we give it, multiplied by 4
    typedef int (*MyFunction)(int);
    MyFunction fn = (MyFunction)symbol;
    int result = fn(8);
    ASSERT_EQ(8 * 4, result);

    CloseModule(handle);
}

}  // namespace
