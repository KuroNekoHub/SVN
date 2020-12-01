// SVN.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "SVN.h"
#include <string>
#include <map>

using namespace std;
typedef unsigned long ulong;

typedef struct moduleVersion {
	ulong mainVerNum;
	ulong subVerNum;
	ulong dateVerNum;
	ulong revVerNum;
	bool sysMainReferred;
	bool algReferred;
}moduleVersion;


map<std::string, moduleVersion> g_mapModuleVersion = {
	{ "Hwi2DR.dll",				moduleVersion{ 1,0,0,0,false,true } },	{ "Hwi2DScroll.dll",	moduleVersion{ 1,0,0,0,false,true } },
	{ "Hwi2DRenderEngine.dll",	moduleVersion{ 1,0,0,0,false,false } },	{ "Hwi3DR.dll",			moduleVersion{ 1,0,0,0,false,true } },
	{ "HwiCAN.dll",				moduleVersion{ 1,0,0,0,false,false } },	{ "HwiCCQ.dll",			moduleVersion{ 1,0,0,0,false,false } },
	{ "HwiCIM.dll",				moduleVersion{ 1,0,0,0,false,false } },	{ "HwiCOMAP.dll",		moduleVersion{ 1,0,0,0,false,true } },
	{ "HwiCOTHIP.dll",			moduleVersion{ 1,0,0,0,false,true } },	{ "HwiDBAccess.dll",	moduleVersion{ 1,0,0,0,false,false } },
	{ "HwiDT01.dll",			moduleVersion{ 1,0,0,0,false,false } },	{ "HwiDT02.dll",		moduleVersion{ 1,0,0,0,false,false } },
	{ "HwiDTDP.dll",			moduleVersion{ 1,0,0,0,false,true } },	{ "HwiEnhImg.dll",		moduleVersion{ 1,0,0,0,false,true } },
	{ "HwiICM.dll",				moduleVersion{ 1,0,0,0,false,false } },	{ "HwiKIT.dll",			moduleVersion{ 1,0,0,0,false,false } },
	{ "HwiLOG.dll",				moduleVersion{ 1,0,0,0,false,false } },	{ "HwiPCM.dll",			moduleVersion{ 1,0,0,0,false,false } },
	{ "HwiRIMM.dll",			moduleVersion{ 1,0,0,0,false,true } },	{ "HwiRRS.dll",			moduleVersion{ 1,0,0,0,false,true } },
	{ "HwiScanImage.dll",		moduleVersion{ 1,0,0,0,false,false } },	{ "HwiSIM.dll",			moduleVersion{ 1,0,0,0,false,false } },
	{ "HwiSOP.dll",				moduleVersion{ 1,0,0,0,false,false } },	{ "HwiSOSEV.dll",		moduleVersion{ 1,0,0,0,false,true } },
	{ "HwiSPI.dll",				moduleVersion{ 1,0,0,0,false,false } },	{ "HwiSVN.dll",			moduleVersion{ 1,0,0,0,false,false } },
	{ "HwiTHPIM.dll",			moduleVersion{ 1,0,0,0,false,false } },	{ "HwiUICommon.dll",	moduleVersion{ 1,0,0,0,false,false } },
	{ "HwiWSA.dll",				moduleVersion{ 1,0,0,0,false,false } },	{ "HWBPPSVC.dll",		moduleVersion{ 1,0,0,0,true,false } },
	{ "HWCANSVC.dll",			moduleVersion{ 1,0,0,0,true,false } },	{ "HWCTGSVC.dll",		moduleVersion{ 1,0,0,0,true,false } },
	{ "HWDETSVC.dll",			moduleVersion{ 1,0,0,0,true,true } },	{ "HWDRGSVC.dll",		moduleVersion{ 1,0,0,0,true,false } },
	{ "HWKEYSVC.dll",			moduleVersion{ 1,0,0,0,true,false } },	{ "HWRECSVC.dll",		moduleVersion{ 1,0,0,0,true,true } },
	{ "HWSPISVC.dll",			moduleVersion{ 1,0,0,0,true,false } },	{ "HWTIPSVC.dll",		moduleVersion{ 1,0,0,0,true,false } },

	{ "HWEXTERNALLINK.exe",		moduleVersion{ 1,0,0,0,true,false } },	{ "HWHARDCTRL.exe",		moduleVersion{ 1,0,0,0,false,false } },
	{ "HWKERNELPROCU1.exe",		moduleVersion{ 1,0,0,0,false,false } },	{ "HWKERNELPROCU2.exe", moduleVersion{ 1,0,0,0,false,false } },
	{ "HWKERNELPROCU3.exe",		moduleVersion{ 1,0,0,0,false,false } },	{ "HWWORKFLOW.exe",		moduleVersion{ 1,0,0,0,false,false } },
	{ "HwiCalibrate.exe",		moduleVersion{ 1,0,0,0,true,false } },	{ "HwiConfig.exe",		moduleVersion{ 1,0,0,0,true,false } },
	{ "HwiControlRoot.exe",		moduleVersion{ 1,0,0,0,true,false } },	{ "HwiDangMgmt.exe",	moduleVersion{ 1,0,0,0,true,false } },
	{ "HwiDataStat.exe",		moduleVersion{ 1,0,0,0,true,false } },	{ "HwiDigiRad.exe",		moduleVersion{ 1,0,0,0,true,false } },
	{ "HwiImgMgmt.exe",			moduleVersion{ 1,0,0,0,true,false } },	{ "HwiInitialize.exe",	moduleVersion{ 1,0,0,0,true,false } },
	{ "HwiInspect.exe",			moduleVersion{ 1,0,0,0,true,false } },	{ "HwiLogin.exe",		moduleVersion{ 1,0,0,0,true,false } },
	{ "HwiMaintain.exe",		moduleVersion{ 1,0,0,0,true,false } },	{ "HwiManage.exe",		moduleVersion{ 1,0,0,0,true,false } },
	{ "HwiTIPMgmt.exe",			moduleVersion{ 1,0,0,0,true,false } },	{ "HwiUIDispatch.exe",	moduleVersion{ 1,0,0,0,false,false } },
	{ "HwiUserMgmt.exe",		moduleVersion{ 1,0,0,0,true,false } }
};


//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//@brief  get version number using windows API.
static string GetFileVersion()
{
	char FileName[MAX_PATH] = { 0 };
	::GetModuleFileName(NULL, FileName, sizeof(FileName) - 1);

	string asVer = "";
	VS_FIXEDFILEINFO *pVsInfo;
	unsigned int iFileInfoSize = sizeof(VS_FIXEDFILEINFO);

	int iVerInfoSize = GetFileVersionInfoSize(FileName, NULL);
	if (iVerInfoSize != 0) {
		char *pBuf = NULL;
		while (!pBuf) {
			pBuf = new char[iVerInfoSize];
		}
		if (GetFileVersionInfo(FileName, 0, iVerInfoSize, pBuf)) {
			if (VerQueryValue(pBuf, "\\", (void **)&pVsInfo, &iFileInfoSize)) {
				sprintf(pBuf, "%d.%d.%d.%d", HIWORD(pVsInfo->dwFileVersionMS), LOWORD(pVsInfo->dwFileVersionMS), HIWORD(pVsInfo->dwFileVersionLS), LOWORD(pVsInfo->dwFileVersionLS));
				asVer = pBuf;
			}
		}
		delete pBuf;
	}
	return asVer;
}



SVN_API bool HW_Get_Module_Version_Number(const char* FileName, unsigned long* MainNum, unsigned long* SubNum, unsigned long* DateNum, unsigned long* RevNum)
{
	string fileName = FileName;

	auto it = g_mapModuleVersion.find(fileName);
	if (it == g_mapModuleVersion.end())
		return false;

	*MainNum = g_mapModuleVersion[fileName].mainVerNum;
	*SubNum = g_mapModuleVersion[fileName].subVerNum;
	*DateNum = g_mapModuleVersion[fileName].dateVerNum;
	*RevNum = g_mapModuleVersion[fileName].revVerNum;

	return true;
}


//---------------------------------------------------------------------------
SVN_API void HW_Clear_Version_Number_List()
{
	g_mapModuleVersion.clear();
}
//---------------------------------------------------------------------------


SVN_API void HW_Add_Version_Number_To_List(const char* ModuleName, unsigned long MainNum, unsigned long SubNum, unsigned long DateNum, unsigned long RevNum, bool AlgReferred)
{
	string fileName = ModuleName;

	g_mapModuleVersion[fileName].mainVerNum = MainNum;
	g_mapModuleVersion[fileName].subVerNum = SubNum;
	g_mapModuleVersion[fileName].dateVerNum = DateNum;
	g_mapModuleVersion[fileName].revVerNum = RevNum;
	g_mapModuleVersion[fileName].algReferred = AlgReferred;
}
//---------------------------------------------------------------------------
SVN_API bool HW_Get_System_Version_Number(unsigned long* MainNum, unsigned long* SubNumL1, unsigned long* SubNumL2, unsigned long* DateNum, unsigned long* RevNum)
{
	//主版本号
	*MainNum = 1;//暂定1,与g_mapModuleVersion[].sysMainReferred == true的软件模块有关

	ulong max = 0;
	UINT32 sum1 = 0, sum2 = 0, sum3 = 0;
	for (map<string, moduleVersion>::iterator it = g_mapModuleVersion.begin(); it != g_mapModuleVersion.end(); ++it) {
		if (max < it->second.dateVerNum)
			max = it->second.dateVerNum;//日期
		sum2 += it->second.subVerNum;//次2
		sum1 += it->second.mainVerNum;//次1
		sum3 += it->second.revVerNum;//修订
	}
	//日期版本号
	*DateNum = max;
	//2级次版本号
	*SubNumL2 = sum2;
	//1级次版本号
	*SubNumL1 = sum1 - g_mapModuleVersion.size();
	//修订版本号
	*RevNum = sum3;

	return true;
}
//---------------------------------------------------------------------------
SVN_API bool HW_Get_Algorithm_Version_Number(unsigned long* MainVerNum, unsigned long* SubVerNumL1, unsigned long* SubVerNumL2, unsigned long* DateVerNum, unsigned long* RevVerNum)
{
	//主版本号
	*MainVerNum = 1;//暂定

	ulong max = 0;
	UINT32 sum1 = 0, sum2 = 0, sum3 = 0;
	UINT32 num = 0;
	for (map<string, moduleVersion>::iterator it = g_mapModuleVersion.begin(); it != g_mapModuleVersion.end(); ++it) {
		if (it->second.algReferred) {
			if (max < it->second.dateVerNum)
				max = it->second.dateVerNum;//日期
			sum2 += it->second.subVerNum;//次2
			sum1 += it->second.mainVerNum;//次1
			sum3 += it->second.revVerNum;//修订
			++num;
		}
	}
	//日期版本号
	*DateVerNum = max;
	//2级次版本号
	*SubVerNumL2 = sum2;
	//1级次版本号
	*SubVerNumL1 = sum1 - num;
	//修订版本号
	*RevVerNum = sum3;
	return true;
}
//---------------------------------------------------------------------------