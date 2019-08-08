/*
Copyright (2019) Intel Corporation

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

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Net;
using System.IO.Compression;
using System.IO;

namespace download_extra_elements
{
    class Program
    {
        static void DownloadFFMPEG(string currentPath, bool DEV_VERSION)
        {
            try
            {
                using (var client = new WebClient())
                {
                    Console.WriteLine("Downloading FFMPEG shared started");
                    client.DownloadFile("https://ffmpeg.zeranoe.com/builds/win64/shared/ffmpeg-4.1.4-win64-shared.zip", currentPath + "\\FFMPEG_shared.zip");
                }
            }
            catch
            {
                Console.WriteLine("Unable to download FFMPEG shared");
            }

            string zipPath1 = currentPath + "\\FFMPEG_shared.zip";
            string extractPath1 = currentPath + "\\FFMPEG_shared";

            try
            {
                Console.WriteLine("Installing FFMPEG shared");
                ZipFile.ExtractToDirectory(zipPath1, extractPath1);

            }
            catch
            {
                Console.WriteLine("Unable to install FFMPEG shared");
            }

            string[] dllList = Directory.GetFiles(extractPath1, "*.dll", SearchOption.AllDirectories);
            string[] exeList = Directory.GetFiles(extractPath1, "*.exe", SearchOption.AllDirectories);

            if (!DEV_VERSION)
            {
                foreach (string file in dllList)
                {
                    File.Move(file, currentPath + "\\" + Path.GetFileName(file));
                }
                foreach (string file in exeList)
                {
                    File.Move(file, currentPath + "\\" + Path.GetFileName(file));
                }
            }
            else if(DEV_VERSION)
            {
                foreach (string file in dllList)
                {
                    if (!Directory.Exists(currentPath + "\\gaminganywhere\\deps.win64\\bin\\ffmpeg\\"))
                    {
                        System.IO.Directory.CreateDirectory(currentPath + "\\gaminganywhere\\deps.win64\\bin\\ffmpeg\\");
                    }
                    File.Move(file, currentPath + "\\gaminganywhere\\deps.win64\\bin\\ffmpeg\\" + Path.GetFileName(file));
                }
                foreach (string file in exeList)
                {
                    if (!Directory.Exists(currentPath + "\\gaminganywhere\\deps.win64\\bin\\ffmpeg\\"))
                    {
                        System.IO.Directory.CreateDirectory(currentPath + "\\gaminganywhere\\deps.win64\\bin\\ffmpeg\\");
                    }
                    File.Move(file, currentPath + "\\gaminganywhere\\deps.win64\\bin\\ffmpeg\\" + Path.GetFileName(file));
                }

                try
                {
                    using (var client = new WebClient())
                    {
                        Console.WriteLine("Downloading FFMPEG dev started");
                        client.DownloadFile("https://ffmpeg.zeranoe.com/builds/win64/dev/ffmpeg-4.1.4-win64-dev.zip", currentPath + "\\FFMPEG_dev.zip");
                    }
                }
                catch
                {
                    Console.WriteLine("Unable to download FFMPEG dev");
                }

                string zipPath2 = currentPath + "\\FFMPEG_dev.zip";
                string extractPath2 = currentPath + "\\FFMPEG_dev";

                try
                {
                    Console.WriteLine("Installing FFMPEG dev");
                    ZipFile.ExtractToDirectory(zipPath2, extractPath2);
                }
                catch
                {
                    Console.WriteLine("Unable to install FFMPEG dev");
                }

                string[] libList = Directory.GetFiles(extractPath2, "*.lib", SearchOption.AllDirectories);
                string[] includeDirList = Directory.GetDirectories(extractPath2, "lib*", SearchOption.AllDirectories);

                foreach (string file in libList)
                {
                    if (!Directory.Exists(currentPath + "\\gaminganywhere\\deps.win64\\lib\\"))
                    {
                        System.IO.Directory.CreateDirectory(currentPath + "\\gaminganywhere\\deps.win64\\lib\\");
                    }
                    File.Move(file, currentPath + "\\gaminganywhere\\deps.win64\\lib\\" + Path.GetFileName(file));
                }
                foreach (string directory in includeDirList)
                {
                    string[] includeList = Directory.GetFiles(directory, "*.h", SearchOption.AllDirectories);
                    foreach (string includeFile in includeList)
                    {
                        string lastFolderName = Path.GetFileName(Path.GetDirectoryName(includeFile));

                        if (!Directory.Exists(currentPath + "\\gaminganywhere\\deps.win64\\include\\"))
                        {
                            System.IO.Directory.CreateDirectory(currentPath + "\\gaminganywhere\\deps.win64\\include\\");
                        }
                        if (Directory.Exists(directory))
                        {
                            Directory.Move(directory, currentPath + "\\gaminganywhere\\deps.win64\\include\\" + lastFolderName);
                        }
                    }
                }
            }
            Console.WriteLine("Done!");
        }
        static void DownloadEasyHook(string currentPath, bool DEV_VERSION)
        {
            try
            {
                using (var client = new WebClient())
                {
                    Console.WriteLine("Downloading EasyHook started");
                    client.DownloadFile("https://github.com/EasyHook/EasyHook/releases/download/v2.7.6789.0/EasyHook-2.7.6789.0-Binaries.zip", currentPath + "\\EasyHook.zip");
                }
            }
            catch
            {
                Console.WriteLine("Unable to download EasyHook");
            }

            string zipPath = currentPath + "\\EasyHook.zip";
            string extractPath = currentPath + "\\EasyHook";

            try
            {
                Console.WriteLine("Installing EasyHook");
                ZipFile.ExtractToDirectory(zipPath, extractPath);
            }
            catch
            {
                Console.WriteLine("Unable to install EasyHook");
            }

            string[] libList = Directory.GetFiles(extractPath + "\\projects\\easyhook\\Deploy\\NetFX4.0", "EasyHook*.lib", SearchOption.AllDirectories);
            string[] includeList = Directory.GetFiles(extractPath + "\\projects\\easyhook\\Deploy\\NetFX4.0", "easyhook.h", SearchOption.AllDirectories);
            string[] binList = Directory.GetFiles(extractPath + "\\projects\\easyhook\\Deploy\\NetFX4.0", "EasyHook*.dll", SearchOption.AllDirectories);

            //string[] includeDirList = Directory.GetDirectories(extractPath, "*.h", SearchOption.AllDirectories);
            if (!DEV_VERSION)
            {
                foreach (string binFile in binList)
                {
                    File.Move(binFile, currentPath + "\\" + Path.GetFileName(binFile));
                }
            }
            if (DEV_VERSION)
            {
                foreach (string binFile in binList)
                {
                    if (!Directory.Exists(currentPath + "\\gaminganywhere\\deps.win64\\bin\\EasyHook\\"))
                    {
                        System.IO.Directory.CreateDirectory(currentPath + "\\gaminganywhere\\deps.win64\\bin\\EasyHook\\");
                    }
                    if (File.Exists(binFile))
                    {
                        File.Move(binFile, currentPath + "\\gaminganywhere\\deps.win64\\bin\\EasyHook\\" + Path.GetFileName(binFile));
                    }
                }
                foreach (string includeFile in includeList)
                {
                    if (!Directory.Exists(currentPath + "\\gaminganywhere\\deps.win64\\include\\"))
                    {
                        System.IO.Directory.CreateDirectory(currentPath + "\\gaminganywhere\\deps.win64\\include\\");
                    }
                    if (File.Exists(includeFile))
                    {
                        File.Move(includeFile, currentPath + "\\gaminganywhere\\deps.win64\\include\\" + Path.GetFileName(includeFile));
                    }
                }
                foreach (string libFile in libList)
                {
                    if (!Directory.Exists(currentPath + "\\gaminganywhere\\deps.win64\\lib\\"))
                    {
                        System.IO.Directory.CreateDirectory(currentPath + "\\gaminganywhere\\deps.win64\\lib\\");
                    }
                    if (File.Exists(libFile))
                    {
                        File.Move(libFile, currentPath + "\\gaminganywhere\\deps.win64\\lib\\" + Path.GetFileName(libFile));
                    }
                }
            }

            Console.WriteLine("Done!");
        }
        //TODO: for future implementation
        //static void DownloadCloudGamingForWindowsSourceCode(string currentPath)
        //{
        //    //TEMPORARY SOLUTION: Code is copied from local machine. In the future code will be downloaded from oficial GitHub repository (not existing for now)
        //    foreach (string file in binList)
        //    {
        //        Directory. CloudGraphicsGamingAnywhere
        //        File.Copy(file, currentPath + "\\" + Path.GetFileName(file));
        //    }

        //}
        static void Main(string[] args)
        {
            Console.WriteLine("### Extra packages manager ###");

            bool DEV_VERSION = false;
            string currentPath = Directory.GetCurrentDirectory();

            Console.WriteLine("Path: " + currentPath);

            if (args.Length != 0)
            {
                if (args[0].ToString().Equals("dev"))
                {
                    DEV_VERSION = true;
                    //DownloadCloudGamingForWindowsSourceCode(currentPath);
                }

            }

            DownloadFFMPEG(currentPath, DEV_VERSION);
            DownloadEasyHook(currentPath, DEV_VERSION);

            string[] zipList = Directory.GetFiles(currentPath, "*.zip");
            List<string> dirs = new List<string>(Directory.EnumerateDirectories(currentPath));
            foreach (string file in zipList)
            {
                File.Delete(file);
            }
            foreach (string dir in dirs)
            {
                if(dir.Contains("FFMPEG_shared") || dir.Contains("FFMPEG_dev") || dir.Contains("EasyHook"))
                {
                    Directory.Delete(dir, true);
                }
            }
        }
    }
}
