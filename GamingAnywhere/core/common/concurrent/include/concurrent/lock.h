/*
Copyright (2017) Intel Corporation

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
/******************************************************************************
@file lock.h

Reader-writer lock: Sync primitive that allows concurrent access for read-only
operations, while write operations require exclusive access. This means that
multiple threads can read the data in parallel but an exclusive lock is needed
for writing or modifying data. When a writer is writing the data, all other
writers or readers will be blocked until the writer is finished writing.

A common use might be to control access to a data structure in memory that
cannot be updated atomically and is invalid (and should not be read by another
thread) until the update is complete.

Also known as: shared-exclusive lock, multiple readers/single-writer lock

Reference: https://en.wikipedia.org/wiki/Readers%E2%80%93writer_lock

Depends on int32_t (e.g. stdint.h)

******************************************************************************/
#pragma once
#include <cstdint>
#include <atomic>
#include <immintrin.h>

namespace gpa {

constexpr size_t kCacheLineBytes = 64;

class RWLock
{
    std::atomic<int32_t> mNumWriters;

    // Separate the two counts into separate cache lines using padding
    int8_t _unused[(2 * kCacheLineBytes) - (2 * sizeof(int32_t))];

    std::atomic<int32_t> mNumReaders;

   public:
    RWLock()
        : mNumWriters(0)
        , mNumReaders(0)
    {
        (void)_unused;
    }

    // Override standard new and delete to force cache line alignment
    void* operator new(size_t size)
    {
        void* const addr = _mm_malloc(size, kCacheLineBytes);
        return addr;
    }
    void operator delete(void* addr) { _mm_free(addr); }
    // Single writer...
    inline void LockWrite()
    {
        // First, wait for the write lock to be released
        while (mNumWriters) {
            _mm_pause();
        }

        // Then, acquire the write lock
        while (mNumWriters.exchange(1)) {
            _mm_pause();
        }
        // Then, wait until all of the reader locks are released
        while (mNumReaders) {
            _mm_pause();
        }
    }
    inline bool TryLockWrite()
    {
        // Fail if a writer has the lock
        if (mNumWriters) {
            return false;
        }
        // Acquire the write lock or fail
        if (mNumWriters.exchange(1)) {
            return false;
        }
        // If a reader has a lock, back out and fail
        if (mNumReaders) {
            mNumWriters = 0;
            return false;
        }
        // If we get this far, we have the write lock
        return true;
    }
    inline void UnlockWrite() { mNumWriters = 0; }
    // ...or multiple readers
    inline void LockRead()
    {
        while (1) {
            // First, wait until the write lock has been released
            while (mNumWriters) {
                _mm_pause();
            }
            // Acquire a reader lock
            mNumReaders.fetch_add(1);

            // If no writers acquired a lock, we are done...
            if (mNumWriters == 0) {
                break;
            }

            // ...otherwise, back out the reader lock and try again
            mNumReaders.fetch_add(-1);
        }
    }
    inline bool TryLockRead()
    {
        // Fail if a writer has the lock
        if (mNumWriters) {
            return false;
        }
        // Try to acquire the reader lock
        mNumReaders.fetch_add(1);

        // If a writer has the lock, back out and fail
        if (mNumWriters) {
            mNumReaders.fetch_add(-1);
            return false;
        }
        // If we got this far, we got the read lock
        return true;
    }
    inline void UnlockRead() { mNumReaders.fetch_add(-1); }
};

struct ScopedReadLock
{
    ScopedReadLock(RWLock* const lock)
        : mLock(lock)
    {
        mLock->LockRead();
    }
    ~ScopedReadLock() { mLock->UnlockRead(); }

    RWLock* const mLock;
};

struct ScopedWriteLock
{
    ScopedWriteLock(RWLock* const lock)
        : mLock(lock)
    {
        mLock->LockWrite();
    }
    ~ScopedWriteLock() { mLock->UnlockWrite(); }

    RWLock* const mLock;
};

}  // namespace gpa
