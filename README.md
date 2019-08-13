# Introduction

&nbsp;&nbsp;&nbsp;&nbsp;The purpose of this document to provide guidance how to use Cloud Gaming For Windows reference solution on Windows 10 OS. Document describes how to configure environment for building this solution and how to run it.

&nbsp;&nbsp;&nbsp;&nbsp;This product is based on open source GamingAnywhere solution, which is available on public github. It provides end to end solution for cloud gaming,  based on client – server architecture. Base solution has been modified and improved to benefit advantages of the Intel hardware architecture.  Modified code is provided as reference solution for future implementations.

# Architecture

&nbsp;&nbsp;&nbsp;&nbsp;Architecture of the Cloud Gaming For Windows is based on client-server model of communication. Server is responsible for receive request from client, launch and get content from game, encode content and send it to the client. Client is responsible for connect to the server, receive content from server, decode content and display it on the client screen.


# Hardware configuration

Following table describes recommended hardware configuration:

| Componenty Type | Part Name |
|---|---|
| Host| Intel Purley based|
|Host CPU|w/SKX/CLX|
|Card|Intel Paradise Creek (VCGA)|
|Node CPU| 8th Gen Intel Core i7|
|Node GPU|Radeon RX Vega M GH graphics (integrated with Intel CPU)|


# Software configuration

&nbsp;&nbsp;&nbsp;&nbsp;This is software requirements for hardware listed above. Software specific for Cloud Gaming For Windows is described in the next section named Additional Specific Software requirements for Cloud Gaming For Windows.

&nbsp;&nbsp;&nbsp;&nbsp;The following table describes recommended software configuration for selected hardware:

|Component Type|Part Name|
|---|---|
|Host OS|CentOS 7.6 3.10-0.693|
|Card software on host|VCA SW 2.6 |
|Card node OS|Windows 10 1803|
|Card software|VCA SW 2.6 |


# Additional Specific Software requirements for Cloud Gaming For Windows

&nbsp;&nbsp;&nbsp;&nbsp;*Cloud Gaming For Windows* to working properly needs properly graphics drivers. KBL-G have two graphics adapters (Intel and AMD). Proper version of graphics drivers:
1. Intel HD Graphics 630 driver (proper version 25.20.100.6373) - [https://downloadmirror.intel.com/28289/a08/win64_25.20.100.6373.exe](https://downloadmirror.intel.com/28289/a08/win64_25.20.100.6373.exe)
2. Radeon RX Vega M GH Graphics driver (proper version 24.20.13017.1009) - [https://downloadmirror.intel.com/28172/a08/GFX_Radeon_BETA_Win10_64_18.9.1.exe](https://downloadmirror.intel.com/28172/a08/GFX_Radeon_BETA_Win10_64_18.9.1.exe)

&nbsp;&nbsp;&nbsp;&nbsp;This release of the *Cloud Gaming For Windows* is dedicated for Windows 10 OS. Following resources are needed to build and run *Cloud Gaming For Windows*:

## Required to build and run:
1. Microsoft Visual Studio 2017 (Windows SDK verison: 10.0.17763.0)
2. Intel Media SDK 2018 R2 - [https://software.intel.com/en-us/media-sdk/choose-download/client](https://software.intel.com/en-us/media-sdk/choose-download/client)
3. FFMPEG binaries(supported version 4.1.4):
   1. Shared: [https://ffmpeg.zeranoe.com/builds/win64/shared/ffmpeg-4.1.4-win64-shared.zip](https://ffmpeg.zeranoe.com/builds/win64/shared/ffmpeg-4.1.4-win64-shared.zip)
   2. Dev: [https://ffmpeg.zeranoe.com/builds/win64/dev/ffmpeg-4.1.4-win64-dev.zip](https://ffmpeg.zeranoe.com/builds/win64/dev/ffmpeg-4.1.4-win64-dev.zip)
4. EasyHook binaries (supported version 2.7) - [https://github.com/EasyHook/EasyHook/releases/tag/v2.7.6789.0](https://github.com/EasyHook/EasyHook/releases/tag/v2.7.6789.0)

## Required to run only:
1. Microsoft Visual C++ Redistributable for Visual Studio 2010:
   1. x86 - [https://www.microsoft.com/en-us/download/confirmation.aspx?id=5555](https://www.microsoft.com/en-us/download/confirmation.aspx?id=5555)
   2. x64 - [https://download.microsoft.com/download/3/2/2/3224B87F-CFA0-4E70-BDA3-3DE650EFEBA5/vcredist_x64.exe](https://download.microsoft.com/download/3/2/2/3224B87F-CFA0-4E70-BDA3-3DE650EFEBA5/vcredist_x64.exe)
2. Microsoft Visual C++ Redistributable for Visual Studio 2017:
   1. x86 - [https://aka.ms/vs/16/release/vc_redist.x86.exe](https://aka.ms/vs/16/release/vc_redist.x86.exe)
   2. x64 - [https://aka.ms/vs/16/release/vc_redist.x64.exe](https://aka.ms/vs/16/release/vc_redist.x64.exe)
3. Intel Media SDK 2018 R2 - [https://software.intel.com/en-us/media-sdk/choose-download/client](https://software.intel.com/en-us/media-sdk/choose-download/client)
4. FFMPEG binaries(supported version 4.1.4):
   1. Shared: [https://ffmpeg.zeranoe.com/builds/win64/shared/ffmpeg-4.1.4-win64-shared.zip](https://ffmpeg.zeranoe.com/builds/win64/shared/ffmpeg-4.1.4-win64-shared.zip)
   2. Dev: [https://ffmpeg.zeranoe.com/builds/win64/dev/ffmpeg-4.1.4-win64-dev.zip](https://ffmpeg.zeranoe.com/builds/win64/dev/ffmpeg-4.1.4-win64-dev.zip)
5. EasyHook binaries (supported version 2.7) - [https://github.com/EasyHook/EasyHook/releases/tag/v2.7.6789.0](https://github.com/EasyHook/EasyHook/releases/tag/v2.7.6789.0)


# List of modules

&nbsp;&nbsp;&nbsp;&nbsp;*Cloud Gaming For Windows* solution containing following projects:

1. **asource-system** – audio initialization and configuration
2. **CloudGamingForWindows** – bundle of installers
3. **CloudGamingForWindowsInstaller** – main installer of components
4. **ctr-sdl** – sdl events handling
5. **download-extra-elements** – download 3rd party component as FFMPEG and EasyHook
6. **encoder-audio** – audio encoding handling
7. **encoder-mxf** – video encoder handling
8. **filter-rgb2yuv** – screen image processing
9. **ga-client** – client related components
10. **ga-hook** - additional GFX API calls hooking mechanism implementation
11. **ga-server-event-driven** – run media server and start injecting into game process 
12. **ga-server-manager** – Main application, run server and wait for response from client
13. **gpa-hook** – main GFX API calls hooking mechanism implementation
14. **libga** – processing components, configurations, loading modules
15. **live555-adapter** – make dll from static libraries of live555 streaming media
16. **server-live555** – live555 media server related components

# Automatically environment configuration

&nbsp;&nbsp;&nbsp;&nbsp;Configuration of *Cloud Gaming For Windows* can be proceed in the two different methods. First, preferred one is automatically method of configuration which is proceed using specially prepared installer. Installer require internet access, to working properly. 

# Manually environment configuration


Another option of configuration is manual preparation of the environment. See below steps to do it:
1. Install MS Visual Studio 2017 
2. Install Intel Media SDK 2018 R2
3. Download Cloud Gaming For Windows source code from: [https://github.com/OpenVisualCloud/Cloud-Gaming-Windows-Sample](https://github.com/OpenVisualCloud/Cloud-Gaming-Windows-Sample)
4. Download all required external resources and place in proper directories:
    1. Static libraries (FFMPEG and EasyHook) files (.lib) should be placed in:
        1. deps.win64 >lib (for 64 bit version of files)
        2. deps.win32 >lib (for 32 bit version of files)
    2. Header files (.h) schould be placed in: 
        1. FFMPEG:
            1. deps.win64 >include >ffmpeg (for 64 bit version of files)
            2. deps.win32 >include >ffmpeg (for 32 bit version of files) 
        2. EasyHook:
            1. deps.win64 >include >easyhook (for 64 bit version of files)
            2. deps.win32 >include >easyhook (for 32 bit version of files)
    3. Executable files (.exe) and dynamic linked libraries files (.dll) schould be placed in: 
        1. FFMPEG:
            1. deps.win64 >bin >ffmpeg (for 64 bit version of files)
            2. deps.win32 >bin >ffmpeg (for 32 bit version of files) 
        2. EasyHook:
            1. deps.win64 >bin >easyhook (for 64 bit version of files)
            2. deps.win32 >bin >easyhook (for 32 bit version of files)

# Build

&nbsp;&nbsp;&nbsp;&nbsp;Build process is executed by MS Visual Studio 2017. To perform it user should open GamingAnywhere.sln solution. IDE should allow to build x64 configuration only (in case of manual environment configuration, should be possible to build also Win32 configuration). To build click select build configuration e.g.:
*Release & x64*
then click *Build-->Build Solution*

Build results should be divided into client and server side. Installer is independent from client and server.

# Run game server

&nbsp;&nbsp;&nbsp;&nbsp;If environment configuration was proceed automatically, there are two methods of launching *Cloud Gaming For Windows*. First method is launch using icon placed in the Start menu. Separatelly icons for client and for server. Another option is to run *Cloud Gaming For Windows* via command line shell.
To run *Cloud Gaming For Windows* game server, open Windows command line shell and navigate to the folder with server binaries:

&nbsp;&nbsp;&nbsp;&nbsp;Example:

&nbsp;&nbsp;&nbsp;&nbsp;``C:\ >cd <path_to_the_server_bin_folder>``

&nbsp;&nbsp;&nbsp;&nbsp;Next, ensure *ga-server-manager.exe* file and other binaries are present in that folder.

&nbsp;&nbsp;&nbsp;&nbsp;Then execute ga-server-manager.exe file, which create process waiting for request from client to launch the selected game. When client send request, chosen game will be runned. 

&nbsp;&nbsp;&nbsp;&nbsp;To launch server following command line should be executed:

&nbsp;&nbsp;&nbsp;&nbsp;``C:\<path_to_the_server_bin_folder>ga-server-manager.exe <optional_path_to_conf_file>``

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<optional_path_to_conf_file> - path to the server configuration file.

&nbsp;&nbsp;&nbsp;&nbsp;If *ga-server-manager.exe* will be runned without <optional_path_to_conf_file> parameter, application will get default config file which is placed in config subdirectory in the directory with binaries.

***Note:** Before start *Cloud Gaming For Windows* game server, make sure, that process which will be runned by *Cloud Gaming For Windows* is not running already.*

# Run client

&nbsp;&nbsp;&nbsp;&nbsp;Same as in the server case, if environment configuration was proceed automatically, 
there are two methods of launching Cloud Gaming For Windows. First method is launch using icon placed in the Start menu. 
Separatelly icons for client and for server. Another option is to run Cloud Gaming For Windows via command line shell.

&nbsp;&nbsp;&nbsp;&nbsp;To run *Cloud Gaming For Windows* client, run Windows command line shell and navigate to the folder wuth client binaries: 

&nbsp;&nbsp;&nbsp;&nbsp;``C:\ >cd <path_to_the_client_bin_folder>``

&nbsp;&nbsp;&nbsp;&nbsp;Next, ensure ga-client.exe file and other binaries are present in that folder.

&nbsp;&nbsp;&nbsp;&nbsp;Then launch *ga-client.exe* file which send request to the server. After sending request client waits some time and try to connect to the running game. 

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Before run client, set proper ip address of server in the config file.**

&nbsp;&nbsp;&nbsp;&nbsp;To launch client following command line should be executed:

&nbsp;&nbsp;&nbsp;&nbsp;``C:\<path_to_the_client_bin_folder>ga-client.exe <optional_path_to_conf_file>``

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<path_to_conf_file> - path to the client configuration file.

&nbsp;&nbsp;&nbsp;&nbsp;If *ga-client.exe* will be runned without <optional_path_to_conf_file> parameter, application will get default 
config file which is placed in config subdirectory in the directory with binaries.

***Note:** If client doesn't connect to the game try to run ga-client.exe one more time. Problem could be caused by above average game launching time.*

# Legal Information

INFORMATION IN THIS DOCUMENT IS PROVIDED IN CONNECTION WITH INTEL PRODUCTS. NO LICENSE, EXPRESS OR IMPLIED, BY ESTOPPEL OR OTHERWISE, TO ANY INTELLECTUAL PROPERTY RIGHTS IS GRANTED BY THIS DOCUMENT. EXCEPT AS PROVIDED IN INTEL'S TERMS AND CONDITIONS OF SALE FOR SUCH PRODUCTS, INTEL ASSUMES NO LIABILITY WHATSOEVER AND INTEL DISCLAIMS ANY EXPRESS OR IMPLIED WARRANTY, RELATING TO SALE AND/OR USE OF INTEL PRODUCTS INCLUDING LIABILITY OR WARRANTIES RELATING TO FITNESS FOR A PARTICULAR PURPOSE, MERCHANTABILITY, OR INFRINGEMENT OF ANY PATENT, COPYRIGHT OR OTHER INTELLECTUAL PROPERTY RIGHT. 

A "Mission Critical Application" is any application in which failure of the Intel Product could result, directly or indirectly, in personal injury or death. SHOULD YOU PURCHASE OR USE INTEL'S PRODUCTS FOR ANY SUCH MISSION CRITICAL APPLICATION, YOU SHALL INDEMNIFY AND HOLD INTEL AND ITS SUBSIDIARIES, SUBCONTRACTORS AND AFFILIATES, AND THE DIRECTORS, OFFICERS, AND EMPLOYEES OF EACH, HARMLESS AGAINST ALL CLAIMS COSTS, DAMAGES, AND EXPENSES AND REASONABLE ATTORNEYS' FEES ARISING OUT OF, DIRECTLY OR INDIRECTLY, ANY CLAIM OF PRODUCT LIABILITY, PERSONAL INJURY, OR DEATH ARISING IN ANY WAY OUT OF SUCH MISSION CRITICAL APPLICATION, WHETHER OR NOT INTEL OR ITS SUBCONTRACTOR WAS NEGLIGENT IN THE DESIGN, MANUFACTURE, OR WARNING OF THE INTEL PRODUCT OR ANY OF ITS PARTS

Intel may make changes to specifications and product descriptions at any time, without notice. Designers must not rely on the absence or characteristics of any features or instructions marked "reserved" or "undefined". Intel reserves these for future definition and shall have no responsibility whatsoever for conflicts or incompatibilities arising from future changes to them. The information here is subject to change without notice. Do not finalize a design with this information. 

The products described in this document may contain design defects or errors known as errata which may cause the product to deviate from published specifications. Current characterized errata are available on request. 

Contact your local Intel sales office or your distributor to obtain the latest specifications and before placing your product order. 

Copies of documents which have an order number and are referenced in this document, or other Intel literature, may be obtained by calling 1-800-548-4725, or go to: http://www.intel.com/design/literature.htm 

MPEG-1, MPEG-2, MPEG-4, H.261, H.263, H.264, MP3, DV, VC-1, MJPEG, AC3, AAC, G.711, G.722, G.722.1, G.722.2, AMRWB, Extended AMRWB (AMRWB+), G.167, G.168, G.169, G.723.1, G.726, G.728, G.729, G.729.1, GSM AMR, GSM FR are international standards promoted by ISO, IEC, ITU, ETSI, 3GPP and other organizations. Implementations of these standards, or the standard enabled platforms, may require licenses from various entities, including Intel Corporation.

This document contains information on products in the design phase of development.

Software and workloads used in performance tests may have been optimized for performance only on Intel microprocessors.  Performance tests, such as SYSmark and MobileMark, are measured using specific computer systems, components, software, operations and functions.  Any change to any of those factors may cause the results to vary.  You should consult other information and performance tests to assist you in fully evaluating your contemplated purchases, including the performance of that product when combined with other products.  

BlueMoon, BunnyPeople, Celeron, Centrino, Cilk, Flexpipe, Intel, the Intel logo, the Intel Anti-Theft technology logo, Intel AppUp, the Intel AppUp logo, Intel Atom, Intel CoFluent, Intel Core, Intel Inside, the Intel Inside logo, Intel Insider, Intel NetMerge, Intel NetStructure, Intel SingleDriver, Intel SpeedStep, Intel Sponsors of Tomorrow., the Intel Sponsors of Tomorrow. logo, Intel vPro, Intel Xeon Phi, Intel XScale, InTru, the InTru logo, the InTru Inside logo, InTru soundmark, Iris, Itanium, Look Inside, the Look Inside logo, MCS, MMX, Pentium, Puma, RealSense, skoool, the skoool logo, SMARTi, Sound Mark, Stay With It, the Engineering Stay With It logo, The Creators Project, The Journey Inside, Thunderbolt, the Thunderbolt logo, Ultrabook, VTune, Xeon, X-GOLD and XMM are trademarks of Intel Corporation in the U.S. and/or other countries.

Microsoft, Windows, and the Windows logo are trademarks, or registered trademarks of Microsoft Corporation in the United States and/or other countries.

Java is a registered trademark of Oracle and/or its affiliates.

Bluetooth is a trademark owned by its proprietor and used by Intel Corporation under license.

Intel Corporation uses the Palm OS* Ready mark under license from Palm, Inc.

OpenCL and the OpenCL logo are trademarks of Apple Inc. used by permission by Khronos.

Copyright (C) 2019, Intel Corporation. All rights reserved. 
