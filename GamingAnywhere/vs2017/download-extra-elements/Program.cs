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
        static void MoveFiles(string currPath, string[] filesToMove, string originFolder)
        {
            foreach (string file in filesToMove)
            {
                string source = file;
                string destination = currPath + originFolder + Path.GetFileName(file);

                if (!Directory.Exists(currPath + originFolder))
                {
                    try
                    {
                        System.IO.Directory.CreateDirectory(currPath + originFolder);
                    }
                    catch
                    {
                        Console.WriteLine("Failed to create folder: " + currPath + originFolder);
                    }
                }

                MoveFile(source, destination);
            }
        }

        static void MoveFile(string source, string destination)
        {
            if (File.Exists(source))
            {
                if (!File.Exists(destination))
                {
                    try     { File.Move(source, destination); }
                    catch   { Console.WriteLine("Failed to move file: " + destination); }
                }
                else
                {
                    try     { File.Delete(destination); }
                    catch   { Console.WriteLine("Failed to remove file: " + destination); }

                    try     { File.Move(source, destination); }
                    catch   { Console.WriteLine("Failed to move file: " + destination); }
                }
            }
        }

        // Remove directories
        static void RemoveDirectories(string currPath, string[] dirList, string anchor)
        {
            foreach (string directory in dirList)
            {
                string[] includeList = Directory.GetFiles(directory, "*.h", SearchOption.AllDirectories);

                string[] treeDirectories = directory.Split('\\');

                string newDirectory = currPath + anchor + treeDirectories[treeDirectories.Length - 1];

                if (Directory.Exists(newDirectory))
                {
                    try
                    {
                        string[] oldFiles = Directory.GetFiles(newDirectory, "*.h");
                        if (oldFiles.Length > 0)
                        {
                            foreach (string oldFile in oldFiles)
                            {
                                try
                                {
                                    File.Delete(oldFile);
                                }
                                catch
                                {
                                    Console.WriteLine("Failed to delete file: " + oldFile);
                                }

                            }
                            File.Delete(newDirectory + "\\*.h");
                        }
                        Directory.Delete(newDirectory);
                    }
                    catch 
                    {
                        Console.WriteLine("Failed to delete folder: " + newDirectory);
                    }
                }
            }
        }

        static void DownloadFFMPEG(string currentPath, bool DEV_VERSION, string platform)
        {
            try
            {
                using (var client = new WebClient())
                {
                    Console.WriteLine($"Downloading FFmpeg shared {platform}-bit ");
                    client.DownloadFile($"https://ffmpeg.zeranoe.com/builds/win{platform}/shared/ffmpeg-latest-win{platform}-shared.zip", currentPath + $"\\FFMPEG_shared{platform}.zip");
                }
            }
            catch
            {
                Console.WriteLine($"Unable to download FFmpeg shared {platform}-bit");
            }

            string zipPath1 = currentPath + $"\\FFMPEG_shared{platform}.zip";
            string extractPath1 = currentPath + $"\\FFMPEG_shared{platform}";

            try
            {
                Console.WriteLine($"Installing FFmpeg shared {platform}-bit");
                ZipFile.ExtractToDirectory(zipPath1, extractPath1);

            }
            catch
            {
                Console.WriteLine($"Unable to install FFmpeg shared {platform}-bit");
            }

            string[] dllList = Directory.GetFiles(extractPath1, "*.dll", SearchOption.AllDirectories);
            string[] exeList = Directory.GetFiles(extractPath1, "*.exe", SearchOption.AllDirectories);

            Console.WriteLine("Done!");

            if (!DEV_VERSION)
            {
                // FFMPEG DLL files:
                MoveFiles(currentPath, dllList, "\\");
                // FFMPEG exe files:
                MoveFiles(currentPath, exeList, "\\");
            }
            else if (DEV_VERSION)
            {

                // FFMPEG DLL files:
                MoveFiles(currentPath, dllList, $"\\gaminganywhere\\deps.win{platform}\\bin\\ffmpeg\\");
                // FFMPEG exe files:
                MoveFiles(currentPath, exeList, $"\\gaminganywhere\\deps.win{platform}\\bin\\ffmpeg\\");

                try
                {
                    using (var client = new WebClient())
                    {
                        Console.WriteLine($"Downloading FFmpeg dev {platform}-bit");
                        client.DownloadFile($"https://ffmpeg.zeranoe.com/builds/win{platform}/dev/ffmpeg-latest-win{platform}-dev.zip", currentPath + $"\\FFMPEG_dev{platform}.zip");
                    }
                }
                catch
                {
                    Console.WriteLine("Unable to download FFmpeg dev {platform}-bit");
                }

                string zipPath2 = currentPath + $"\\FFMPEG_dev{platform}.zip";
                string extractPath2 = currentPath + $"\\FFMPEG_dev{platform}";

                try
                {
                    Console.WriteLine($"Installing FFmpeg dev {platform}-bit");
                    ZipFile.ExtractToDirectory(zipPath2, extractPath2);
                }
                catch
                {
                    Console.WriteLine($"Unable to install FFmpeg dev {platform}-bit");
                }

                string[] libList = Directory.GetFiles(extractPath2, "*.lib", SearchOption.AllDirectories);
                string[] includeDirList = Directory.GetDirectories(extractPath2, "lib*", SearchOption.AllDirectories);


                MoveFiles(currentPath, libList, $"\\gaminganywhere\\deps.win{platform}\\lib\\");

                RemoveDirectories(currentPath, includeDirList, $"\\gaminganywhere\\deps.win{platform}\\include\\");

                foreach (string directory in includeDirList)
                {

                    string[] dirSplit = directory.Split('\\');

                    if (dirSplit[dirSplit.Length - 1].Equals("lib"))
                    {
                        continue;
                    }

                    string[] includeList = Directory.GetFiles(directory, "*.*", SearchOption.AllDirectories);
                    foreach (string includeFile in includeList)
                    {
                        string lastFolderName = Path.GetFileName(Path.GetDirectoryName(includeFile));

                        if (!Directory.Exists(currentPath + $"\\gaminganywhere\\deps.win{platform}\\include\\"))
                        {
                            string newDirectory = currentPath + $"\\gaminganywhere\\deps.win{platform}\\include\\";
                            try
                            {
                                System.IO.Directory.CreateDirectory(newDirectory);
                            }
                            catch
                            {
                                Console.WriteLine("Failed to create direcotry: " + newDirectory);
                            }
                        }

                        if (Directory.Exists(directory))
                        {
                            try
                            {
                                Directory.Move(directory, currentPath + $"\\gaminganywhere\\deps.win{platform}\\include\\" + lastFolderName);
                            }
                            catch
                            {
                                Console.WriteLine("Failed to move directory: " + directory.ToString());
                            }
                        }
                    }
                }
                Console.WriteLine("Done!");
            }
        }
        static void DownloadEasyHook(string currentPath, bool DEV_VERSION, string platform)
        {
            try
            {
                using (var client = new WebClient())
                {
                    Console.WriteLine($"Downloading EasyHook {platform}-bit");
                    client.DownloadFile("https://github.com/EasyHook/EasyHook/releases/download/v2.7.6789.0/EasyHook-2.7.6789.0-Binaries.zip", currentPath + $"\\EasyHook{platform}.zip");
                }
            }
            catch
            {
                Console.WriteLine($"Unable to download EasyHook {platform}-bit");
            }

            string zipPath = currentPath + $"\\EasyHook{platform}.zip";
            string extractPath = currentPath + $"\\EasyHook{platform}";

            try
            {
                Console.WriteLine($"Installing EasyHook {platform}-bit");
                ZipFile.ExtractToDirectory(zipPath, extractPath);
            }
            catch
            {
                Console.WriteLine($"Unable to install EasyHook {platform}-bit");
            }

            string[] libList = Directory.GetFiles(extractPath + "\\projects\\easyhook\\Deploy\\NetFX4.0", "EasyHook*.lib", SearchOption.AllDirectories);
            string[] includeList = Directory.GetFiles(extractPath + "\\projects\\easyhook\\Deploy\\NetFX4.0", "easyhook.h", SearchOption.AllDirectories);
            string[] binList = Directory.GetFiles(extractPath + "\\projects\\easyhook\\Deploy\\NetFX4.0", "EasyHook*.dll", SearchOption.AllDirectories);

            //string[] includeDirList = Directory.GetDirectories(extractPath, "*.h", SearchOption.AllDirectories);
            if (!DEV_VERSION)
            {
                MoveFiles(currentPath, binList, "\\");
            }
            if (DEV_VERSION)
            {
                MoveFiles(currentPath, binList, $"\\gaminganywhere\\deps.win{platform}\\bin\\EasyHook\\");
                MoveFiles(currentPath, includeList, $"\\gaminganywhere\\deps.win{platform}\\include\\");
                MoveFiles(currentPath, libList, $"\\gaminganywhere\\deps.win{platform}\\lib\\");
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
        static void PrintInfoBanner(string platform)
        {
            Console.WriteLine("");
            Console.WriteLine("+++++++++++++++++++++++++++++++");
            Console.WriteLine($"+    Architecture: {platform}-bit     +");
            Console.WriteLine("+++++++++++++++++++++++++++++++");
        }
        static void Main(string[] args)
        {
            Console.WriteLine("");
            Console.WriteLine("################################");
            Console.WriteLine("#### Extra packages manager ####");
            Console.WriteLine("################################");

            bool DEV_VERSION = false;
            string platform = null;
            string currentPath = Directory.GetCurrentDirectory();

            Console.WriteLine("Path: " + currentPath);

            if (args.Length > 0)
            {
                foreach (Object obj in args)
                {
                    if (obj.ToString().Equals("dev"))
                    {
                        DEV_VERSION = true;
                        //DownloadCloudGamingForWindowsSourceCode(currentPath);
                    }
                    if (obj.ToString().Equals("x64"))
                    {
                        platform = "64";
                    }
                    if (obj.ToString().Equals("x86"))
                    {
                        platform = "32";
                    }
                }
            }
            switch(platform)
            {
                case "64":
                    PrintInfoBanner(platform);
                    DownloadFFMPEG(currentPath, DEV_VERSION, platform);
                    DownloadEasyHook(currentPath, DEV_VERSION, platform);
                    break;
                case "32":
                    PrintInfoBanner(platform);
                    DownloadFFMPEG(currentPath, DEV_VERSION, platform);
                    DownloadEasyHook(currentPath, DEV_VERSION, platform);
                    break;
                case null:
                    platform = "64";
                    PrintInfoBanner(platform);
                    DownloadFFMPEG(currentPath, DEV_VERSION, platform);
                    DownloadEasyHook(currentPath, DEV_VERSION, platform);
                    platform = "32";
                    PrintInfoBanner(platform);
                    DownloadFFMPEG(currentPath, DEV_VERSION, platform);
                    DownloadEasyHook(currentPath, DEV_VERSION, platform);
                    break;
                default:
                    Console.WriteLine("Wrong parameter \"platform\" provided. Please try x64 to build 64-bit version, x86 to build 32-bit version or leave empty to build both versions.");
                    break;
            }

            string[] zipList = Directory.GetFiles(currentPath, "*.zip");
            List<string> dirs = new List<string>(Directory.EnumerateDirectories(currentPath));
            foreach (string file in zipList)
            {
                File.Delete(file);
            }
            foreach (string dir in dirs)
            {
                if(dir.Contains("FFMPEG_shared64") || dir.Contains("FFMPEG_dev64") || dir.Contains("FFMPEG_shared32") || dir.Contains("FFMPEG_dev32") || dir.Contains("EasyHook"))
                {
                    Directory.Delete(dir, true);
                }
            }
        }
    }
}
