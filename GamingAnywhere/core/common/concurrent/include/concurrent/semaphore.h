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

#pragma once

#include <atomic>

namespace gpa {
namespace concurrent {

// wrapper around platform semaphore APIs
class Semaphore
{
  public:
    Semaphore(long initialValue = 0);
    ~Semaphore();

    //! increment semaphore count by one
    void Post();

    //! signal all threads currently waiting on this semaphore
    void PostAll();

    //! wait until semaphore becomes non-zero and then decrement the count by one
    void Wait();

  private:
    // track number of threads waiting on this semaphore
    std::atomic_size_t mNumWaiting;

    // opaque storage for platform-specific semaphore types
    struct __t
    {
        char m_val[64];
    };

    __t m_t
#if defined(__linux__)
        // POSIX futex code will abort if this is not aligned
        __attribute__((aligned(64)))
#endif  // __linux__
        ;
};

}  // namespace concurrent
}  // namespace gpa
