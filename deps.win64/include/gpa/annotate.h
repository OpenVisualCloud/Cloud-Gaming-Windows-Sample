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

#pragma once

#if defined(__clang__)
#define ANNOTATE_LEN(len) __attribute__((annotate("len=" #len)))
#define ANNOTATE_LEN2(len1, len2) __attribute__((annotate("len=" #len1 "," #len2)))
#define ANNOTATE_ARRAY_END_ELEM(endelem) __attribute__((annotate("endelem=" #endelem)))
#else
#define ANNOTATE_LEN(len)
#define ANNOTATE_LEN2(len1, len2)
#define ANNOTATE_ARRAY_END_ELEM(endelem)
#endif

#ifndef _WIN32
#ifndef _Inout_opt_
#define _Inout_opt_
#endif

#ifndef _Outptr_opt_
#define _Outptr_opt_
#endif

#ifndef _COM_Outptr_opt_
#define _COM_Outptr_opt_
#endif

#ifndef _Out_writes_opt_
#define _Out_writes_opt_(count)
#endif
#endif  // #ifndef _WIN32
