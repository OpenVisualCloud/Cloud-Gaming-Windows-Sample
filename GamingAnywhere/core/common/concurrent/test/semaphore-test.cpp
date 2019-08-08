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

#include "gtest/gtest.h"

#include <atomic>
#include <thread>
#include "concurrent/semaphore.h"

namespace {

TEST(ConcurrentTest, SemaphoreWaitPost)
{
    using gpa::concurrent::Semaphore;

    // initialize semaphore with initial value of 5
    Semaphore sem(5);

    // atomic variable for each thread to access
    std::atomic_int test(0);

    // kick off 10 threads
    std::thread threads[10];
    for (int i = 0; i < 10; ++i) {
        threads[i] = std::thread([&]() {
            sem.Wait();

            // increment the atomic
            test++;

            // fake some work...
            std::this_thread::sleep_for(std::chrono::milliseconds(250));

            // decrement the atomic
            test--;

            sem.Post();
        });
    }

    // pause this thread to let the others start
    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    // 5 threads should have acquired the semaphore, and the value of test should
    // be 5
    EXPECT_EQ(5, test);

    // now wait for the others to acquire and then finish
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    // and the atomic should be back to zero
    EXPECT_EQ(0, test);

    for (int i = 0; i < 10; ++i) {
        threads[i].join();
    }
}

}  // namespace
