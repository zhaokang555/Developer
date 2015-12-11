
#ifndef __GW_POINTCLOUD_FILTERINTERFACE_H_
#define __GW_POINTCLOUD_FILTERINTERFACE_H_

#ifdef GW_PCFI_EXPORTS
	#define GwPCFIApi __declspec(dllexport)
#else
	#define GwPCFIApi __declspec(dllimport)
#endif

/*!
*  
*/
double GwPCFIApi DoFilter(double* pSrcPCCoord, int nRows, int nCols);

double GwPCFIApi DoFilterEx( double a, double b );

#endif