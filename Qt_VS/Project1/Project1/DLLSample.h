#ifndef _DLL_SAMPLE_H
#define _DLL_SAMPLE_H

// ���������C++����������ô����ΪC���ӷ�ʽ
#ifdef __cplusplus
extern "C" {
#endif

	// ͨ�����������ǵ��뻹�ǵ���
#ifdef _DLL_SAMPLE
#define DLL_SAMPLE_API __declspec(dllexport)
#else
#define DLL_SAMPLE_API __declspec(dllimport)
#endif

	// ����/���뺯������
	DLL_SAMPLE_API void TestDLL(int);

#undef DLL_SAMPLE_API

#ifdef __cplusplus
}
#endif

#endif