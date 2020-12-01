// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� SVN_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// SVN_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�

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

	//�����Ǵ�DLL�ĵ�������
	//---------------------------------------------------------------------------
	//---------------------------------------------------------------------------
	//---------------------------------------------------------------------------
	//��������:��ȡ���ģ��汾�š�
	//��������:FileName-���ģ�������ļ�����
	//��������:MainVerNum-���ģ�����汾�ţ��������
	//��������:SubVerNum-���ģ��ΰ汾�ţ��������
	//��������:DateVerNum-���ģ�����ڰ汾�ţ��������
	//��������:RevVerNum-���ģ���޶��汾�ţ��������
	//��������ֵ:ִ�гɹ�����TRUE�����򷵻�FALSE��
	//����˵��:�ޡ�
	SVN_API bool HW_Get_Module_Version_Number(const char* FileName, unsigned long* MainVerNum, unsigned long* SubVerNum, unsigned long* DateVerNum, unsigned long* RevVerNum);
	//---------------------------------------------------------------------------
	//��������:�������汾���б�
	//��������:�ޡ�
	//��������ֵ:�ޡ�
	//����˵��:�汾���б�����һ�����ģ��İ汾�ţ���������ϵͳ�汾�ź��㷨�汾�ŵĻ�����
	SVN_API void HW_Clear_Version_Number_List();
	//---------------------------------------------------------------------------
	//��������:���һ�����ģ��İ汾�����б�
	//��������:ModuleName-���ģ�����ơ�
	//��������:MainVerNum-���ģ�����汾�š�
	//��������:SubVerNum-���ģ��ΰ汾�š�
	//��������:DateVerNum-���ģ�����ڰ汾�š�
	//��������:RevVerNum-���ģ���޶��汾�š�
	//��������:AlgReferred-���ģ���Ƿ�ͬʱΪ�㷨����ģ�顣
	//��������ֵ:�ޡ�
	//����˵��:�ޡ�	
	SVN_API void HW_Add_Version_Number_To_List(const char* ModuleName, unsigned long MainVerNum, unsigned long SubVerNum, unsigned long DateVerNum, unsigned long RevVerNum, bool AlgReferred);
	//---------------------------------------------------------------------------
	//��������:��ȡ���ϵͳ�汾�š�
	//��������:MainVerNum-���ϵͳ���汾�ţ��������
	//��������:SubVerNumL1-���ϵͳ1���ΰ汾�ţ��������
	//��������:SubVerNumL2-���ϵͳ2���ΰ汾�ţ��������
	//��������:DateVerNum-���ϵͳ���ڰ汾�ţ��������
	//��������:RevVerNum-���ϵͳ�޶��汾�ţ��������
	//��������ֵ:ִ�гɹ�����TRUE�����򷵻�FALSE��
	//����˵��:�����б����������ģ��İ汾���������ϵͳ�İ汾�š�	
	SVN_API bool HW_Get_System_Version_Number(unsigned long* MainVerNum, unsigned long* SubVerNumL1, unsigned long* SubVerNumL2, unsigned long* DateVerNum, unsigned long* RevVerNum);
	//---------------------------------------------------------------------------
	//��������:��ȡ�㷨�汾�š�
	//��������:MainVerNum-�㷨���汾�ţ��������
	//��������:SubVerNumL1-�㷨1���ΰ汾�ţ��������
	//��������:SubVerNumL2-�㷨2���ΰ汾�ţ��������
	//��������:DateVerNum-�㷨���ڰ汾�ţ��������
	//��������:RevVerNum-�㷨�޶��汾�ţ��������
	//��������ֵ:ִ�гɹ�����TRUE�����򷵻�FALSE��
	//����˵��:�����б���������ģ��İ汾�������㷨�汾�š�	
	SVN_API bool HW_Get_Algorithm_Version_Number(unsigned long* MainVerNum, unsigned long* SubVerNumL1, unsigned long* SubVerNumL2, unsigned long* DateVerNum, unsigned long* RevVerNum);
	//---------------------------------------------------------------------------
#ifdef __cplusplus
}
#endif

#endif
