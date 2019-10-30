/*
 * Copyright (c) 2012-2015 Chun-Ying Huang
 *
 * This file is part of GamingAnywhere (GA).
 *
 * GA is free software; you can redistribute it and/or modify it
 * under the terms of the 3-clause BSD License as published by the
 * Free Software Foundation: http://directory.fsf.org/wiki/License:BSD_3Clause
 *
 * GA is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the 3-clause BSD License along with GA;
 * if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <stdio.h>
#include <stdlib.h>

#include "ga-common.h"
#include "ga-conf.h"

#include "easyhook.h"

#include <windows.h>
#include <conio.h>
#include <tchar.h>

#include <string>

int hook_and_launch(const char *ga_root, const char *config_path, const char *app_exe, const char *app_dir, const char* hook_method) {
	PROCESS_INFORMATION procInfo;
	STARTUPINFO startupInfo;
	HINSTANCE hDLL;
	int (*install_hook)(const char *, const char *, const char *);
	int (*uninstall_hook)();
	char cmdline[2048];
	char buf[2048], *ptr;
	int cmdpos = 0, cmdspace = sizeof(cmdline);
	//
	int r;
	unsigned long pid = 0;
	wchar_t app_exe_w[1024];
	wchar_t cmdline_w[2048], *ptr_cmdline_w = NULL;
	wchar_t dllpath_w[1024];

	std::string params;

	if(ga_root == NULL || config_path == NULL) {
		ga_error("[hook_and_launch] no ga-root nor configuration were specified.\n");
		return -1;
	}

	// handle environment variables
	do {
		char s_drive[_MAX_DRIVE], s_dir[_MAX_DIR], s_fname[_MAX_FNAME];
		_splitpath(app_exe, s_drive, s_dir, s_fname, NULL);
		_putenv_s("GA_APPEXE", s_fname);
		_putenv_s("GA_ROOT", ga_root);
		_putenv_s("GA_CONFIG", config_path);
		// additional custom variables?
		if(ga_conf_mapsize("game-env") == 0)
			break;
		ga_conf_mapreset("game-env");
		for(	ptr = ga_conf_mapkey("game-env", buf, sizeof(buf));
			ptr != NULL;
			ptr = ga_conf_mapnextkey("game-env", buf, sizeof(buf))) {
			//
			char *val, *envval, valbuf[2048];
			val = ga_conf_mapvalue("game-env", valbuf, sizeof(valbuf));
			if(val == NULL)
				continue;
			for(envval = val; *envval && *envval != '='; envval++)
				;
			if(*envval != '=')
				break;
			*envval++ = '\0';
			ga_error("Game env: %s=%s\n", val, envval);
			_putenv_s(val, envval);
		}
	} while(0);

	fprintf(stderr, "ga_conf_mapsize(): %d\n", ga_conf_mapsize("game-argv"));
	if(ga_conf_mapsize("game-argv") > 0) {
		int n;
		ga_conf_mapreset("game-argv");
		for(const char*	one_arg_key = ga_conf_mapkey("game-argv", buf, sizeof(buf));
						one_arg_key != NULL;
						one_arg_key = ga_conf_mapnextkey("game-argv", buf, sizeof(buf))) {
			//
			char one_param_buf[MAX_PATH];
			char* one_param = ga_conf_mapvalue("game-argv", one_param_buf, sizeof(one_param_buf));
			if(one_param == NULL)
				continue;
			fprintf(stderr, "Game arg: %s\n", one_param);
			(params += " \"") + one_param + '\"';
		}
		cmdpos = snprintf(cmdline, sizeof(cmdline), "%s %s", app_exe, params.c_str());
		fprintf(stderr, "Cmdline: %s\n", cmdline);
	}
	if (!strcmp(hook_method, "GPA") || !strcmp(hook_method, "")) {
		snprintf(buf, sizeof(buf), "%s%s", ga_root, "gpa-hook.dll");
		if (MultiByteToWideChar(CP_UTF8, 0, buf, -1, dllpath_w, sizeof(dllpath_w) / sizeof(wchar_t)) <= 0) {
			fprintf(stderr, "error converting dllpath to wchar_t.\n");
			return -1;
		}
		fwprintf(stderr, L"Dllpath:      %s\n", dllpath_w);
	}
	else if(!strcmp(hook_method, "EH")) {
		snprintf(buf, sizeof(buf), "%s%s", ga_root, "ga-hook.dll");
		if (MultiByteToWideChar(CP_UTF8, 0, buf, -1, dllpath_w, sizeof(dllpath_w) / sizeof(wchar_t)) <= 0) {
			fprintf(stderr, "error converting dllpath to wchar_t.\n");
			return -1;
		}
		fwprintf(stderr, L"Dllpath:      %s\n", dllpath_w);
	}
	if(MultiByteToWideChar(CP_UTF8, 0, app_exe, -1, app_exe_w, sizeof(app_exe_w)/sizeof(wchar_t)) <= 0) {
		fprintf(stderr, "error converting app_exe to wchar_t.\n");
		return -1;
	}

	if(cmdpos > 0) {
		if(MultiByteToWideChar(CP_UTF8, 0, cmdline, -1, cmdline_w, sizeof(cmdline_w)/sizeof(wchar_t)) <= 0) {
			fprintf(stderr, "error converting arguments to wchar_t.\n");
			return -1;
		}
		ptr_cmdline_w = cmdline_w;
	} else {
		ptr_cmdline_w = NULL;
	}

	fprintf(stderr, "Starting hooking. Method: %s\n", hook_method);
	if (!strcmp(hook_method, "GPA") || !strcmp(hook_method, ""))
	{
#ifdef _WIN64
		std::wstring pProcessExecutionPath(L"gpa-injector.exe -L gpa-hook -t \"");
#else
		std::wstring pProcessExecutionPath(L"gpa-injector32.exe -L gpa-hook -t \"");
#endif
		std::string appNameTmp(app_exe);
		std::wstring appName;
		appName.assign(appNameTmp.begin(), appNameTmp.end());
		pProcessExecutionPath += appName;
		pProcessExecutionPath += L"\"";
		if (params.length() > 0) {
			std::wstring w_params;
			w_params.assign(params.begin(), params.end());
			(pProcessExecutionPath += L" --") += w_params;
		}

		STARTUPINFO si;
		PROCESS_INFORMATION pi;

		//Set the size of the structures
		ZeroMemory(&si, sizeof(si));
		si.cb = sizeof(si);
		ZeroMemory(&pi, sizeof(pi));

		wchar_t *alloc = new wchar_t[pProcessExecutionPath.length() + 1];
		wcscpy(alloc, pProcessExecutionPath.c_str());

		//Start the program up
		BOOL ret = CreateProcess(NULL, alloc, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);

		delete alloc;

		if (!ret) {
			printf("Launch failed. Error no: %d", GetLastError());
			return -1;
		}
		//Wait for process end, because of shared memory
		WaitForSingleObject(pi.hProcess, INFINITE);
	}
	else if (!strcmp(hook_method, "EH")) {
		r = RhCreateAndInject(app_exe_w,	/* command */
				ptr_cmdline_w,				/* command line arguments */
				0,							/* process creation flags */
				EASYHOOK_INJECT_DEFAULT,	/* hook options */
		#ifdef _WIN64
				NULL,						/* x86 dll */
				dllpath_w,					/* x64 dll */
		#else
				dllpath_w,					/* x86 dll */
				NULL,						/* x64 dll */
		#endif
				NULL, 0,					/* passthrough buffer and size */
				&pid);
		if(r == 0) {
			fprintf(stderr, "launch success (pid=%u).\n", pid);
		} else {
			fprintf(stderr, "launch failed, err=%08x.\n", r);
		}
	}
	else {
		fprintf(stderr, "ERROR: Wrong hooking methods chosen: %s\n", hook_method);
		exit(EXIT_FAILURE);
	}
	return 0;
}

void SetSharedMemory(bool server_view, bool enable_controller, const char* audio_type, HANDLE *hMapFile) {

	const char szName[] = { "GA_SHARE" };

	SharedParams sharedParams = {};

	strcpy(sharedParams.audio_type, audio_type);
	sharedParams.server_view = server_view;
	sharedParams.enable_controller = enable_controller;

	if (hMapFile == NULL)
	{
		fprintf(stderr, "Error %d. Cannot Create File Mapping! Handle pointer is NULL.\n", GetLastError());
		return;
	}
	else
	{
		*hMapFile = CreateFileMappingA(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, BUF_SIZE, szName);
	}

	SharedParams* const sharedParameters = static_cast<SharedParams *>(MapViewOfFile(*hMapFile, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(SharedParams)));

	if (sharedParameters == NULL)
	{
		_tprintf(TEXT("Could not map view of file (%d).\n"), GetLastError());
		CloseHandle(*hMapFile);
		return;
	}

	CopyMemory(sharedParameters, &sharedParams, sizeof(SharedParams));

	UnmapViewOfFile(sharedParameters);
}

int main(int argc, char *argv[]) {
	int ret;
	char app_dir[MAX_PATH] = "";
	char hook_method[64] = "";
	bool server_view = false;
	bool enable_controller = false;
	char app_exe[MAX_PATH] = "";
	char loader_exe[MAX_PATH] = "";
	char loader_dir[MAX_PATH] = "";
	char config_path[MAX_PATH] = "";
	char audio_type[64] = "";
	char s_drive[_MAX_DRIVE], s_dir[_MAX_DIR], s_fname[_MAX_FNAME];
	HANDLE *hMapFile = new HANDLE;

#define ANSI
#ifdef WIN32
	if(CoInitializeEx(NULL, COINIT_MULTITHREADED) < 0) {
		fprintf(stderr, "Cannot initialize COM.\n");
		return -1;
	}
#endif
	//
	if (hMapFile == NULL) {
		fprintf(stderr, "Error %d while shared memory handle creating.\n", GetLastError());
		return -1;
	}
	//
	if(argc < 2) {
		fprintf(stderr, "Usage: %s config-file\n", argv[0]);
		return -1;
	}
	//
	if(ga_init(argv[1]) < 0) {
		fprintf(stderr, "GA initialization failed.\n");
		return -1;
	}
	//
	app_dir[0] = '\0';
	if((ga_conf_readv("game-dir", app_dir, sizeof(app_dir)))) {
		fprintf(stderr, "Use user-defined game-dir: %s\n", app_dir);
	}
	//
	if((!ga_conf_readv("game-exe", app_exe, sizeof(app_exe)))) {
		fprintf(stderr, "No game executable provided.\n");
		return -1;
	}
	if (ga_conf_readv("hook-method", hook_method, sizeof(hook_method))) {
	}
	if (server_view = ga_conf_readbool("view-content-on-server", 0) != 0) {
		fprintf(stderr, "View on server enabled.\n");
	}
	if (!ga_conf_readv("hook-audio", audio_type, sizeof(audio_type))) {
		audio_type[0] = '\0';
	}
	if (enable_controller = ga_conf_readbool("enable-gamepad", 0) != 0) {
		fprintf(stderr, "Controller (gamepad) enabled.\n");
	}

	// get loader's info
	GetModuleFileNameA(NULL, loader_exe, sizeof(loader_exe));
	_splitpath(loader_exe, s_drive, s_dir, s_fname, NULL);
	snprintf(loader_dir, sizeof(loader_dir), "%s%s", s_drive, s_dir);

	// get app's info
	if(app_dir[0] == '\0') {
		_splitpath(app_exe, s_drive, s_dir, s_fname, NULL);
		snprintf(app_dir, sizeof(app_dir), "%s%s", s_drive, s_dir);
		fprintf(stderr, "Application:  %s\n", app_exe);
	}

	// full config path - assume placed in the same dir as ga-loader.exe
	if(argv[1][0] == '\\' || argv[1][0] == '/' || argv[1][1] == ':') {
		// absolute path
		strncpy(config_path, argv[1], sizeof(config_path));
	} else {

		// relative path
		snprintf(config_path, sizeof(config_path), "%s%s", loader_dir, argv[1]);
	}
	fprintf(stderr, "Config file:  %s\n", config_path);

	SetSharedMemory(server_view, enable_controller, audio_type, hMapFile);

	ret = hook_and_launch(loader_dir, config_path, app_exe, app_dir, hook_method);

	// TODO fix. Invalid handle error was 'thrown' here
	//CloseHandle(hMapFile);

	return ret;
}