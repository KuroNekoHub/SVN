// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 SVN_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// SVN_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。

#ifndef SVNH
#define SVNH

#ifdef __cplusplus
extern "C" {
#endif

#ifdef SVN_EXPORTS
#define SVN_API __declspec(dllexport)
#else
#define SVN_API __declspec(dllimport)
#endif

	//以下是此DLL的导出函数
	//---------------------------------------------------------------------------
	//---------------------------------------------------------------------------
	//---------------------------------------------------------------------------
	//函数功能:获取软件模块版本号。
	//函数参数:FileName-软件模块完整文件名。
	//函数参数:MainVerNum-软件模块主版本号（输出）。
	//函数参数:SubVerNum-软件模块次版本号（输出）。
	//函数参数:DateVerNum-软件模块日期版本号（输出）。
	//函数参数:RevVerNum-软件模块修订版本号（输出）。
	//函数返回值:执行成功返回TRUE，否则返回FALSE。
	//函数说明:无。
	SVN_API bool HW_Get_Software_Module_Version_Number(const char* FileName, unsigned short* MainVerNum, unsigned short* SubVerNum, unsigned short* DateVerNum, unsigned short* RevVerNum);
	//---------------------------------------------------------------------------
	//函数功能:清空软件版本号列表。
	//函数参数:无。
	//函数返回值:无。
	//函数说明:版本号列表保存了一组软件模块的版本号，它是生成系统版本号和算法版本号的基础。
	SVN_API void HW_Clear_Version_Number_List();
	//---------------------------------------------------------------------------
	//函数功能:添加一个版本号至列表。
	//函数参数:ModuleName-软件模块名称。
	//函数参数:MainVerNum-软件模块主版本号。
	//函数参数:SubVerNum-软件模块次版本号。
	//函数参数:DateVerNum-软件模块日期版本号。
	//函数参数:RevVerNum-软件模块修订版本号。
	//函数返回值:无。
	//函数说明:无。	
	SVN_API void HW_Add_Version_Number_To_List(const char* ModuleName, unsigned short MainVerNum, unsigned short SubVerNum, unsigned short DateVerNum, unsigned short RevVerNum);
	//---------------------------------------------------------------------------
	//函数功能:获取软件系统版本号。
	//函数参数:MainVerNum-软件系统主版本号（输出）。
	//函数参数:SubVerNumL1-软件系统1级次版本号（输出）。
	//函数参数:SubVerNumL2-软件系统2级次版本号（输出）。
	//函数参数:DateVerNum-软件系统日期版本号（输出）。
	//函数参数:RevVerNum-软件系统修订版本号（输出）。
	//函数返回值:执行成功返回TRUE，否则返回FALSE。
	//函数说明:根据列表中所有软件模块的版本号生成软件系统的版本号。	
	SVN_API bool HW_Get_Software_System_Version_Number(unsigned short* MainVerNum, unsigned short* SubVerNumL1, unsigned short* SubVerNumL2, unsigned short* DateVerNum, unsigned short* RevVerNum);
	//---------------------------------------------------------------------------
	//函数功能:获取算法版本号。
	//函数参数:MainVerNum-算法主版本号（输出）。
	//函数参数:SubVerNumL1-算法1级次版本号（输出）。
	//函数参数:SubVerNumL2-算法2级次版本号（输出）。
	//函数参数:DateVerNum-算法日期版本号（输出）。
	//函数参数:RevVerNum-算法修订版本号（输出）。
	//函数返回值:执行成功返回TRUE，否则返回FALSE。
	//函数说明:根据列表中相关软件模块的版本号生成算法版本号。	
	SVN_API bool HW_Get_Algorithm_Version_Number(unsigned short* MainVerNum, unsigned short* SubVerNumL1, unsigned short* SubVerNumL2, unsigned short* DateVerNum, unsigned short* RevVerNum);
	//---------------------------------------------------------------------------
#ifdef __cplusplus
}
#endif

#endif
