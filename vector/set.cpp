#include "set"
#include "map"
#include <iostream>
#include "name.h"
#include "windows.h"
#include "string"
#include "algorithm"
# include <stdio.h>
#include <time.h>  

struct print {
	void operator()(std::string x)
	{
		printf_s(x.c_str());
		printf_s("\n");
	}
	void operator()(int m)
	{
		printf_s("%d", m);
		printf_s(" ");
	}
	void operator()(const std::map<int, std::string>::value_type &pair)
	{
		printf_s("%d:", pair.first);
		printf_s("%s\n", pair.second.c_str());
	}

};
/*
int main() {

	std::set<std::string> set_str;
	std::set<std::string> set_str2;
	std::set<std::string>::iterator m_str_iter;
	std::set<std::string>::reverse_iterator m_str_iter1;

	for (int i = 0; i < 50; i++) {
		set_str.insert(CName().GetName());
		Sleep(1);
	}
	std::cout << "set_strΪ:" <<  std::endl;
	for (m_str_iter = set_str.begin(); m_str_iter != set_str.end(); m_str_iter++) {
		std::cout << *m_str_iter<< std::endl;
	}

	srand((unsigned)time(NULL));
	for (int i = 0; i < 50; i++) {
		int key = (rand() % (100 - 20)) + 20;
		set_str2.insert(CName().GetName());
		Sleep(key);
	}
	std::cout << "set_str2Ϊ:" << std::endl;
	std::for_each(set_str2.cbegin(), set_str2.cend(), print());

	std::cout << "set_str����Ϊ:" << set_str.size() << std::endl;
	std::cout << "set_str2����Ϊ:" << set_str2.size() << std::endl;

	std::cout << "set_str�����ɵ�Ԫ�ص������ֵΪ:" << set_str.max_size() << std::endl;
	std::cout << "set_str2�����ɵ�Ԫ�ص������ֵΪ:" << set_str2.max_size() << std::endl;

	set_str2.insert("Ф־��");
	m_str_iter = set_str2.find("Ф־��");    //���Ҽ�ֵΪ5��Ԫ��
	if (m_str_iter != set_str2.end())    //�ҵ�
		std::cout << *m_str_iter <<std::endl;
	else            //δ�ҵ�
		std::cout << "δ�ҵ�";

	std::pair< std::set<std::string>::iterator, std::set<std::string>::iterator> pr;
	pr = set_str2.equal_range("Ф־��");
	std::cout << "Ф־����ǰһ��Ԫ���� ��" << *pr.first << std::endl;
	std::cout << "Ф־���ĺ�һ��Ԫ���� �� " << *pr.second << std::endl;

	std::cout << "set_str2�������Ϊ:" << std::endl;
	for (m_str_iter1 = set_str2.rbegin(); m_str_iter1 != set_str2.rend(); m_str_iter++) {
		std::cout << *m_str_iter << std::endl;
	}

	system("pause");
	return 0;
}
*/