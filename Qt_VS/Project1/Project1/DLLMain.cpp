#include "stdafx.h"
#define _DLL_SAMPLE

#ifndef _DLL_SAMPLE_H
#include "DLLSample.h"
#endif

#include "stdio.h"

//APIENTRY声明DLL函数入口点
BOOL APIENTRY DllMain(HANDLE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

void TestDLL(int arg)
{
	printf("DLL output arg %d\n", arg);
}