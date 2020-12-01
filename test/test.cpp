// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <ctime>
#include <iostream>
#include "SVN.h"
#include <string>
#include <Windows.h>

#pragma comment(lib, "../bin/HwiSVN.lib")

using namespace std;



int main() 
{

	HW_Add_Version_Number_To_List("Hwi2DR.dll", 1, 0, 20296, 1, true);
	HW_Add_Version_Number_To_List("Hwi2DScroll.dll", 1, 0, 20296, 2, true);
	HW_Add_Version_Number_To_List("Hwi2DRenderEngine.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("Hwi3DR.dll", 1, 0, 20296, 5, true);
	HW_Add_Version_Number_To_List("HwiCAN.dll", 1, 0, 20296, 3, false);
	HW_Add_Version_Number_To_List("HwiCCQ.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiCIM.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiCOMAP.dll", 1, 0, 20296, 0, true);
	HW_Add_Version_Number_To_List("HwiCOTHIP.dll", 1, 0, 20296, 0, true);
	HW_Add_Version_Number_To_List("HwiDBAccess.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiDT01.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiDT02.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiDTDP.dll", 1, 0, 20296, 0, true);
	HW_Add_Version_Number_To_List("HwiEnhImg.dll", 1, 0, 20296, 0, true);
	HW_Add_Version_Number_To_List("HwiICM.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiKIT.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiLOG.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiPCM.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiRIMM.dll", 1, 0, 20296, 0, true);
	HW_Add_Version_Number_To_List("HwiRRS.dll", 1, 0, 20296, 0, true);
	HW_Add_Version_Number_To_List("HwiScanImage.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiSIM.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiSOP.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiSOSEV.dll", 1, 0, 20296, 0, true);
	HW_Add_Version_Number_To_List("HwiSPI.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiSVN.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiTHPIM.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiUICommon.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiWSA.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HWBPPSVC.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HWCANSVC.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HWCTGSVC.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HWDETSVC.dll", 1, 0, 20296, 0, true);
	HW_Add_Version_Number_To_List("HWDRGSVC.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HWKEYSVC.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HWRECSVC.dll", 1, 0, 20296, 0, true);
	HW_Add_Version_Number_To_List("HWSPISVC.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HWTIPSVC.dll", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HWEXTERNALLINK.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HWHARDCTRL.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HWKERNELPROCU1.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HWKERNELPROCU2.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HWKERNELPROCU3.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HWWORKFLOW.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiCalibrate.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiConfig.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiControlRoot.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiDangMgmt.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiDataStat.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiDigiRad.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiImgMgmt.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiInitialize.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiInspect.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiLogin.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiMaintain.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiManage.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiTIPMgmt.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiUIDispatch.exe", 1, 0, 20296, 0, false);
	HW_Add_Version_Number_To_List("HwiUserMgmt.exe", 1, 0, 20296, 0, false);

	unsigned long MainVerNum, SubVerNumL1, SubVerNumL2, DateVerNum, RevVerNum;
	HW_Get_System_Version_Number(& MainVerNum, & SubVerNumL1, & SubVerNumL2, & DateVerNum, & RevVerNum);
	
	cout << "Software:" << endl;
	cout << "	MainVerNum:	" << MainVerNum << endl;
	cout << "	SubVerNumL1:	" << SubVerNumL1 << endl;
	cout << "	SubVerNumL2:	" << SubVerNumL2 << endl;
	cout << "	DateVerNum:	" << DateVerNum << endl;
	cout << "	RevVerNum:	" << RevVerNum << endl;

	HW_Get_Algorithm_Version_Number(&MainVerNum, &SubVerNumL1, &SubVerNumL2, &DateVerNum, &RevVerNum);
	cout << "Algorithm:" << endl;
	cout << "	MainVerNum:	" << MainVerNum << endl;
	cout << "	SubVerNumL1:	" << SubVerNumL1 << endl;
	cout << "	SubVerNumL2:	" << SubVerNumL2 << endl;
	cout << "	DateVerNum:	" << DateVerNum << endl;
	cout << "	RevVerNum:	" << RevVerNum << endl;

	system("pause");
    return 0;
}
