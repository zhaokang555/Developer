// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the LABVIEW4LAS_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// LABVIEW4LAS_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef LABVIEW4LAS_EXPORTS
#define LABVIEW4LAS_API __declspec(dllexport)
#else
#define LABVIEW4LAS_API __declspec(dllimport)
#endif

// This class is exported from the LabView4Las.dll
// initial window
LABVIEW4LAS_API int fnLasViewInit_512(double* dData1, double* eEng1, double* dData2, double* eEng2);
LABVIEW4LAS_API int fnLasViewInit_1024(double* dData1, double* eEng1, double* dData2, double* eEng2);

//
LABVIEW4LAS_API int fnInfoRange(double* dData1, double* eEng1, double* dData2, double* eEng2);

LABVIEW4LAS_API int fnLasViewDrawDirectLeft( double* pData);
LABVIEW4LAS_API int fnLasViewDrawDirectRight(double* pData);
LABVIEW4LAS_API int fnLasViewDrawWithFilterLeft(double* pData, double dSigma, double dWinSize);
LABVIEW4LAS_API int fnLasViewDrawWithFilterRight(double* pData, double dSigma, double dWinSize);

LABVIEW4LAS_API int fnLasViewClose();