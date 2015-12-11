
dll内共有八个函数，我已经分别把这八个函数都做成了vi文件：
fnLasViewInit_512.vi
fnLasViewInit_1024.vi
fnInfoRange.vi
fnLasViewDrawDirectLeft.vi
fnLasViewDrawDirectRight.vi
fnLasViewDrawWithFilterLeft.vi
fnLasViewDrawWithFilterRight.vi
fnLasViewClose.vi

========================================
函数接口说明：
int fnLasViewInit_512(double* dData1, double* eEng1, double* dData2, double* eEng2); // 四个参数都是一维double数组
int fnLasViewInit_1024(double* dData1, double* eEng1, double* dData2, double* eEng2); // 四个参数都是一维double数组

int fnInfoRange(double* dData1, double* eEng1, double* dData2, double* eEng2); // 四个参数都是一维double数组

int fnLasViewDrawDirectLeft( double* pData); // 参数是二维double数组
int fnLasViewDrawDirectRight(double* pData); // 参数是二维double数组
int fnLasViewDrawWithFilterLeft(double* pData, double dSigma, double dWinSize); // 参数分别是:二维double数组，double, double
int fnLasViewDrawWithFilterRight(double* pData, double dSigma, double dWinSize); // 参数分别是:二维double数组，double, double

int fnLasViewClose();