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
#include <cassert>

// macOS Grand Central Dispatch, for Mac semaphores
#include <dispatch/dispatch.h>

namespace gpa {
namespace concurrent {

Semaphore::Semaphore(long initialValue)
    : mNumWaiting(0)
{
    // ensure our stack object has enough space to "be" a sem_t
    static_assert(
        sizeof(dispatch_semaphore_t) <= sizeof(Semaphore::m_t),
        "Not enough space in m_t to accomodate dispatch_semaphore_t!");

    dispatch_semaphore_t sem   = dispatch_semaphore_create((long)initialValue);
    (dispatch_semaphore_t&)m_t = sem;
}

Semaphore::~Semaphore()
{
    dispatch_semaphore_t& sem = (dispatch_semaphore_t&)m_t;
    dispatch_release(sem);
}

void Semaphore::Post()
{
    dispatch_semaphore_t& sem = (dispatch_semaphore_t&)m_t;
    dispatch_semaphore_signal(sem);
    mNumWaiting--;
}

void Semaphore::PostAll()
{
    dispatch_semaphore_t& sem = (dispatch_semaphore_t&)m_t;
    while (mNumWaiting.load()) {
        dispatch_semaphore_signal(sem);
        mNumWaiting--;
    }
}

// wait until semaphore becomes non-zero and then decrement the count by one
void Semaphore::Wait()
{
    mNumWaiting++;
    dispatch_semaphore_t& sem = (dispatch_semaphore_t&)m_t;
    dispatch_semaphore_wait(sem, DISPATCH_TIME_FOREVER);
}

}  // namespace concurrent
}  // namespace gpa
