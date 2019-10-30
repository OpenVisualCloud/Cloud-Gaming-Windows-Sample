#include "ga-server-manager.h"
#include "ga-server-manager-semaphore.h"
#include <string>

int __cdecl main(int argc, char **argv)
{
	fprintf(stderr, "\n####################################################\n###  Welcome in Cloud Gaming For Windows Server  ###\n####################################################\n\n");

	WSADATA wsaData;
	int iResult;

	std::string pProcessExecutionPath("ga-server-event-driven.exe ");
	char pCurrentDir[MAX_PATH];

	SOCKET listenSocket = INVALID_SOCKET;
	SOCKET clientSocket = INVALID_SOCKET;

	struct addrinfo *pResult = NULL;
	struct addrinfo hints;

	int iSendResult;
	char recvbuf[DEFAULT_BUFLEN];
	int recvbuflen = DEFAULT_BUFLEN;

	if (argc < 2) {
		GetCurrentDirectory(MAX_PATH, pCurrentDir);
		std::string current_working_dir(pCurrentDir);

		//create path to execute process

		if (current_working_dir[0] != '"') pProcessExecutionPath += '"';

		pProcessExecutionPath += current_working_dir;
		pProcessExecutionPath += "\\config\\server.conf\"";
		printf("GA config path: %s\\config\\server.conf\n", pCurrentDir);
	}
	else {
		if (sizeof(argv[1]) > sizeof(pProcessExecutionPath)) {
			printf("Passed argument is too long, max length of argument is %i characters.", sizeof(pProcessExecutionPath));
			return -1;
		}
		std::string current_working_dir(argv[1]);

        // Ensure first char is '"'
        if(current_working_dir[0] != '"')
            pProcessExecutionPath += '"';

        pProcessExecutionPath += current_working_dir;

        // Ensure last char is '"'
        if (current_working_dir[current_working_dir.length() - 1] != '"')
            pProcessExecutionPath += '"';

		printf("GA config path: %s\n", argv[1]);
	}

	// Initialize Winsock
	iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (iResult != 0) {
		printf("WSAStartup failed with error: %d\n", iResult);
		return 1;
	}

	ZeroMemory(&hints, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;
	hints.ai_flags = AI_PASSIVE;

	// Resolve the server address and port
	iResult = getaddrinfo(NULL, DEFAULT_PORT, &hints, &pResult);
	if (iResult != 0) {
		printf("Getaddrinfo failed with error: %d\n", iResult);
		WSACleanup();
		return 1;
	}

	// Create a SOCKET for connecting to server
	listenSocket = socket(pResult->ai_family, pResult->ai_socktype, pResult->ai_protocol);
	if (listenSocket == INVALID_SOCKET) {
		printf("Socket failed with error: %ld\n", WSAGetLastError());
		freeaddrinfo(pResult);
		WSACleanup();
		return 1;
	}

	// Setup the TCP listening socket
	iResult = bind(listenSocket, pResult->ai_addr, (int)pResult->ai_addrlen);
	if (iResult == SOCKET_ERROR) {
		printf("Bind failed with error: %d\n", WSAGetLastError());
		freeaddrinfo(pResult);
		closesocket(listenSocket);
		WSACleanup();
		return 1;
	}

	freeaddrinfo(pResult);

	iResult = listen(listenSocket, SOMAXCONN);
	if (iResult == SOCKET_ERROR) {
		printf("Listen failed with error: %d\n", WSAGetLastError());
		closesocket(listenSocket);
		WSACleanup();
		return 1;
	}

	printf("Listening for incoming connections...\n");
	// Accept a client socket
	clientSocket = accept(listenSocket, NULL, NULL);
	if (clientSocket == INVALID_SOCKET) {
		printf("Accept failed with error: %d\n", WSAGetLastError());
		closesocket(listenSocket);
		WSACleanup();
		return 1;
	}

	// No longer need server socket
	closesocket(listenSocket);

	// Receive until the peer shuts down the connection
	do {
		iResult = recv(clientSocket, recvbuf, recvbuflen, 0);
		if (iResult > 0) {
			printf("Received message from client.\n");

			STARTUPINFO si;
			PROCESS_INFORMATION pi;
			HANDLE semaphore;

			// set the size of the structures
			ZeroMemory(&si, sizeof(si));
			si.cb = sizeof(si);
			ZeroMemory(&pi, sizeof(pi));

			char *alloc = new char[pProcessExecutionPath.length() + 1];
			strcpy(alloc, pProcessExecutionPath.c_str());

			semaphore = CreateSemaphore(NULL, 0, 1, SERVER_MANAGER_SEMAPHORE);
			if (GetLastError() == ERROR_ALREADY_EXISTS) {
				// This means we bumped into some other semaphore. Use fallback in this case.
				CloseHandle(semaphore);
				semaphore = NULL;
			}

			// start the program up
			if (CreateProcess(NULL, alloc, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi)) {
				if (semaphore != NULL) {
					if (WaitForSingleObject(semaphore, 300000) != WAIT_OBJECT_0)
						printf("Warning: waiting for server init failed.\n");
				}
				else {
					// fallback
					printf("Warning: waiting for server init failed - using fallback.\n");
					Sleep(120000);
				}
				//// Echo the buffer back to the sender
				iSendResult = send(clientSocket, recvbuf, iResult, 0);
				if (iSendResult == SOCKET_ERROR) {
					printf("Send failed with error: %d\n", WSAGetLastError());
					closesocket(clientSocket);
					WSACleanup();
					delete alloc;
					return 1;
				}
				printf("Response sent to client.\n");
			}
			else {
				printf("Creating process failed: %d", GetLastError());
			}
			if (semaphore != NULL) CloseHandle(semaphore);
			delete alloc;
			// Close process and thread handles.
			CloseHandle(pi.hProcess);
			CloseHandle(pi.hThread);
		}
		else if (iResult == 0)
			printf("Server manager connection closing...\n");
		else {
			printf("Recv failed with error: %d\n", WSAGetLastError());
			closesocket(clientSocket);
			WSACleanup();
			return 1;
		}
	} while (iResult > 0);

	// shutdown the connection since we're done
	iResult = shutdown(clientSocket, SD_SEND);
	if (iResult == SOCKET_ERROR) {
		printf("Shutdown failed with error: %d\n", WSAGetLastError());
		closesocket(clientSocket);
		WSACleanup();
		return 1;
	}

	// cleanup
	closesocket(clientSocket);
	WSACleanup();

	return 0;
}