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

 #include "utility/surface.h"
 
 #include <Windows.h>
 #include <tchar.h>
 
namespace {

LRESULT CALLBACK WindowProc(
    HWND   hwnd,
    UINT   uMsg,
    WPARAM wParam,
    LPARAM lParam
)
{
    return DefWindowProcA(hwnd, uMsg, wParam, lParam);
}

ATOM GetWindowClass()
{
    WNDCLASSA wndClass = {};
    wndClass.lpfnWndProc = WindowProc;
    wndClass.hInstance = GetModuleHandleA(NULL);
    wndClass.lpszClassName = "Test Window";

    static ATOM atom = RegisterClassA(&wndClass);

    return atom;
}

}  // anonymous namespace

 namespace gpa {

 gpa::Surface* CreateDefaultSurface(gpa::SurfaceCreateInfo const* info)
 {
     HWND hWnd = CreateWindowExA(
         WS_EX_APPWINDOW,
         (LPCSTR)MAKEINTATOM(GetWindowClass()),
         "Test Window",
         WS_OVERLAPPEDWINDOW | WS_VISIBLE,
         -1, -1,
         info->width, info->height,
         NULL,
         NULL,
         GetModuleHandle(NULL),
         nullptr
     );

     gpa::Surface* surface = new gpa::Surface;
     surface->handle = hWnd;

     return surface;
 }

 void DestroyDefaultSurface(gpa::Surface* surface)
 {
     if (surface == nullptr) {
         return;
     }

     DestroyWindow((HWND)surface->handle);
 }

 void OnDefaultSurfaceYield(gpa::Surface* surface)
 {
    if (surface == nullptr) {
        return;
    }

    MSG msg;
    while (PeekMessage(&msg, (HWND)surface->handle, 0, 0, PM_REMOVE)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
 }
 
 } // namespace gpa
 