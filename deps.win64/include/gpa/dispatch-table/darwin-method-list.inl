/******************************************************************************
        Copyright 2019 Intel Corporation.
 
This software and the related documents are Intel copyrighted materials,
and your use of them is governed by the express license under which they
were provided to you ("License"). Unless the License provides otherwise,
you may not use, modify, copy, publish, distribute, disclose or transmit
this software or the related documents without Intel's prior written
permission.


 This software and the related documents are provided as is, with no express
or implied warranties, other than those that are expressly stated in the
License.

******************************************************************************/
int (*CUIDraw)(CFTypeRef r, CGRect rect, CGContextRef ctx, CFDictionaryRef options,
               CFDictionaryRef* result);

kern_return_t (*task_set_exception_ports)(task_t task, exception_mask_t exception_mask,
                                          mach_port_t new_port, exception_behavior_t behavior,
                                          thread_state_flavor_t new_flavor);

kern_return_t (*task_swap_exception_ports)(
    task_t task, exception_mask_t exception_mask, mach_port_t new_port,
    exception_behavior_t behavior, thread_state_flavor_t new_flavor, exception_mask_array_t masks,
    mach_msg_type_number_t* masksCnt, exception_handler_array_t old_handlerss,
    exception_behavior_array_t old_behaviors, exception_flavor_array_t old_flavors);
