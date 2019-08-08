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
#include <semaphore.h>
#include <cassert>

namespace gpa {
namespace concurrent {

Semaphore::Semaphore(long initialValue)
{
    // ensure our stack object has enough space to "be" a sem_t
    static_assert(
        sizeof(sem_t) <= sizeof(Semaphore::m_t),
        "Not enough space in m_t to accomodate sem_t!");

    sem_t* pSem = (sem_t*)&m_t;

    int rtn = sem_init(pSem, 0, (unsigned)initialValue);
    (void)rtn;
    assert(rtn == 0);

    // if not zero, then throw?
}

Semaphore::~Semaphore()
{
    sem_t* pSem = (sem_t*)&m_t;

    sem_destroy(pSem);
}

void Semaphore::Post()
{
    sem_t* pSem = (sem_t*)&m_t;

    sem_post(pSem);
    mNumWaiting--;
}

void Semaphore::PostAll()
{
    sem_t* pSem = (sem_t*)&m_t;

    while (mNumWaiting--) {
        sem_post(pSem);
    }
}

void Semaphore::Wait()
{
    sem_t* pSem = (sem_t*)&m_t;

    mNumWaiting++;
    sem_wait(pSem);
}

}  // namespace gpa
}  // namespace concurrent
