
dll�ڹ��а˸����������Ѿ��ֱ����˸�������������vi�ļ���
fnLasViewInit_512.vi
fnLasViewInit_1024.vi
fnInfoRange.vi
fnLasViewDrawDirectLeft.vi
fnLasViewDrawDirectRight.vi
fnLasViewDrawWithFilterLeft.vi
fnLasViewDrawWithFilterRight.vi
fnLasViewClose.vi

========================================
�����ӿ�˵����
int fnLasViewInit_512(double* dData1, double* eEng1, double* dData2, double* eEng2); // �ĸ���������һάdouble����
int fnLasViewInit_1024(double* dData1, double* eEng1, double* dData2, double* eEng2); // �ĸ���������һάdouble����

int fnInfoRange(double* dData1, double* eEng1, double* dData2, double* eEng2); // �ĸ���������һάdouble����

int fnLasViewDrawDirectLeft( double* pData); // �����Ƕ�άdouble����
int fnLasViewDrawDirectRight(double* pData); // �����Ƕ�άdouble����
int fnLasViewDrawWithFilterLeft(double* pData, double dSigma, double dWinSize); // �����ֱ���:��άdouble���飬double, double
int fnLasViewDrawWithFilterRight(double* pData, double dSigma, double dWinSize); // �����ֱ���:��άdouble���飬double, double

int fnLasViewClose();