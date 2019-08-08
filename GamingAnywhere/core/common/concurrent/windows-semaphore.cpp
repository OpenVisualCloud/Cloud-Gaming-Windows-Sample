/*
 Copyright (2016) Intel Corporation

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

#include "concurrent/semaphore.h"
#include <Windows.h>
#include <cassert>

namespace gpa {
namespace concurrent {

Semaphore::Semaphore(long initialValue)
{
    // ensure our stack object has enough space to "be" a sem_t
    static_assert(
        sizeof(HANDLE) <= sizeof(Semaphore::m_t),
        "Not enough space in m_t to accomodate HANDLE!");

    HANDLE hSem = CreateSemaphore(
        nullptr,       // no security needed as this is not shared
        initialValue,  // initialize to provided starting value
        10000000,      // no practical limits
        nullptr        // no name needed as this is not shared
        );

    assert(hSem != nullptr);

    // if not valid, then throw?

    ((HANDLE&)m_t) = hSem;
}

Semaphore::~Semaphore()
{
    HANDLE hSem = (HANDLE&)m_t;
    CloseHandle(hSem);
}

void Semaphore::Post()
{
    HANDLE hSem = (HANDLE&)m_t;

    // signal the object (increment semaphore count by one)
    ReleaseSemaphore(hSem, 1, nullptr);
    mNumWaiting--;
}

void Semaphore::PostAll()
{
    HANDLE hSem = (HANDLE&)m_t;

    // signal all threads waiting on this semaphore
    while (mNumWaiting--) {
        ReleaseSemaphore(hSem, 1, nullptr);
    }
}

void Semaphore::Wait()
{
    HANDLE hSem = (HANDLE&)m_t;

    // blocking wait until the semaphore is signaled (non-zero)
    mNumWaiting++;
    WaitForSingleObject(hSem, INFINITE);
}

}  // namespace gpa
}  // namespace concurrent
