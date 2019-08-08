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

#include "memory/pool-allocator.h"
#include "memory/default-allocator.h"

#include <cassert>

namespace gpa {
namespace memory {

PoolAllocator::PoolAllocator(void* memPool, size_t memPoolSize)
    : mAllocator(new gpa::memory::DefaultAllocator)
    , mStart(memPool)
    , mSize(memPoolSize)
    , mCurr((uint8_t*)memPool)
    , mSizeRemaining(memPoolSize)
{
}

PoolAllocator::~PoolAllocator()
{
    Clear();
    delete mAllocator;
}

void* PoolAllocator::Allocate(size_t nBytes)
{
    if (nBytes > mSizeRemaining) {
        void* mem = mAllocator->Allocate(nBytes);
        mAllocatedRegions.insert(mem);
        return mem;
    }

    void* const ptr = mCurr;
    mCurr += nBytes;
    mSizeRemaining -= nBytes;
    return ptr;
}

void PoolAllocator::Deallocate(void* memory)
{
    if (memory < mStart || memory >= (uint8_t*)mStart + mSize) {
        // This condition checks if the memory was allocated outside of memory pool
        // the allocator is working with, which means the memory was allocated by default allocator
        mAllocatedRegions.erase(memory);
        mAllocator->Deallocate(memory);
    }
}

void PoolAllocator::Clear()
{
    mCurr = (uint8_t*)mStart;
    mSizeRemaining = mSize;

    if (mAllocatedRegions.empty()) {
        return;
    }

    for (auto* iter : mAllocatedRegions) {
        mAllocator->Deallocate(iter);
    }

    mAllocatedRegions.clear();
}

}  // namespace memory
}  // namespace gpa
