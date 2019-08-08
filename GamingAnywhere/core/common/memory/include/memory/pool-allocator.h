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

#include "memory/allocator.h"

#include <inttypes.h>  // uint8_t
#include <unordered_set>

namespace gpa {
namespace memory {

//! @brief Allocator that works on previously allocated memory pool
//! @details If the memory pool depletes, new allocations are made with use of default allocator
class PoolAllocator : public Allocator
{
public:
    PoolAllocator(void* memPool, size_t memPoolSize);
    ~PoolAllocator();

    // Allocator implementation
    void* Allocate(size_t nBytes) override;
    void Deallocate(void* memory) override;

    // clear out and free all allocations (WARNING: MAKE SURE THAT THERE ARE NO USAGES
    // OF PREVIOUSLY-ALLOCATED MEMORY FIRST!!!!)
    void Clear();

private:
    //! @brief Vector of memory regions allocated in RequestMemory method.
    std::unordered_set<void*> mAllocatedRegions;

    // this class is implemented in terms of another allocator implementation
    Allocator* mAllocator;

    //! @brief Pointer to start of memory pool
    void* mStart;
    //! @brief Size of memory pool
    size_t mSize;
    //! @brief Pointer to the start of currently free memory region in the pool
    uint8_t* mCurr;
    //! @brief Size of the currently free memory region in the pool
    size_t mSizeRemaining;
};

}  // namespace memory
}  // namespace gpa
