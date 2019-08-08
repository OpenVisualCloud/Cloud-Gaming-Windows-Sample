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

#pragma once

#include "igpa-config.h"

namespace gpa {
namespace system {

// These flags have meaning primarily on POSIX systems; Windows implementation
// will ignore these
enum SymbolFlags {
    kLoadNow        = 0x01,     ///< Load all symbols upon module load
    kLoadDeferred   = 0x02,     ///< Load symbols as they are needed
    kGlobalScope    = 0x04,     ///< All symbols in module available to all modules
    kLocalScope     = 0x08,     ///< Symbols in module available only to loading module

    kDefaultScope = kLocalScope,
};

/**
 * @brief Load a shared object from the filesystem into the current process'
 *        address space.
 * @param libraryName Pathname to the shared object file to load. Standard system-
 *        specific search path algorithms are used.
 * @param flags Flags specifying particular loader behavior (typically POSIX-only).
 *        Default POSIX behavior is to load all symbols in the shared object into
 *        the module's local scope.
 * @return Handle to the loaded module if success; NULL otherwise
 * @note If the caller prefers to load all of the module's symbols into the global
 *       scope (so they can be found by subsequent modules and calls to GetSymbolAddress()
 *       with NULL moduleHandle), then bitwise-OR kGlobalScope into @a flags.
 */
void* LoadModule(TCHAR const* libraryName, int flags = kLoadNow | kDefaultScope);

/**
 * @brief Resolve the symbol named @symbolName defined in the module referred to
 *        by @a moduleHandle, into its virtual address.
 * @param moduleHandle Handle to module obtained previously via @LoadModule or
 *        @a FindModuleHandle.
 * @param symbolName Name of the symbol defined in the module
 * @param searchNextModule Specify the symbol search behavior when @moduleHandle is NULL
 * @return Virtual address of the symbol in the process' virtual address space;
 *         NULL if symbol could not be found
 * @note If @a searchNextModule is true, and moduleHandle is NULL, then look in
 *       the "next" module(s) for the symbol name. If false and moduleHandle is
 *       NULL, then search in the "global" symbol space (all modules loaded into
 *       the process). If moduleHandle is not NULL, then @a searchNextModule is
 *       ignored.
 */
void* GetSymbolAddress(void* moduleHandle, char const* symbolName, bool searchNextModule = true);

/**
 * @brief Obtain handle to a previously-loaded module. Can be used to test if the
 *        module has already been loaded.
 * @param libraryName Pathname to the shared object file to load. Standard system-
 *        specific search path algorithms are used.
 * @return NULL if the module has not been loaded into the process; handle to the
 *         previously-loaded module otherwise.
 */
void* FindModuleHandle(TCHAR const* libraryName);

/**
 * @brief Close the module handle.
 * @param moduleHandle Handle to previously-loaded module.
 * @note If @moduleHandle is NULL, this call is a NOP.
 * @remark This function is not guaranteed to unload a module from the process'
 *         address space, even if the module reference count drops to zero.
 */
void CloseModule(void* moduleHandle);

/**
 * @brief If a module operation fails, this function retrieves the system-defined
 *        string version of the error reason.
 * @return Pointer to error string.
 * @note Caller should not free the returned pointer; it is owned by the runtime.
 */
char const* GetLastModuleError();

} // namespace system
} // namespace gpa
