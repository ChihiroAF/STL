#ifndef __NAME_H__
#define __NAME_H__

class CName
{
public:
	CName();

	virtual ~CName();

	const char* GetName();
protected:

	void InitSurname();

	void InitName();

	char* m_pSurname_OneDimensional;
	char** m_ppSurname;     // ��

	char* m_pName_OneDimensional;
	char** m_ppName;        // ��

							// 3 ������ռ 6 ���ַ�
	char m_szName[7];
};


#endif