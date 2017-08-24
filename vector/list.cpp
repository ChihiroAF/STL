#include "list"
#include "map"
#include "algorithm"
#include "time.h"
#include "name.h"
#include "iostream"
#include "windows.h"
#include "string"
# include <stdio.h>

struct print {
	void operator()(std::string x)
	{
		printf_s(x.c_str());
		printf_s("  ");
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

	std::list<int> l_int;
	std::list<std::string> l_str;
	std::list<int>::iterator int_iter;
	std::list<std::string>::iterator str_iter;

	srand((unsigned)time(NULL));
	for (int i = 0; i < 30;i++) {
		int key = (rand() % (100 - 20)) + 20;
		l_int.push_back(key);
		Sleep(1);
		key = (rand() % (100 - 20)) + 20;
		l_int.push_front(key);
	}
	std::cout << "����list:" << std::endl;
	for (int_iter = l_int.begin(); int_iter != l_int.end();int_iter++) {
		std::cout << *int_iter << "  ";
	}
	std::cout << "l_int�ĳ�����:" << l_int.size() << std::endl;
	l_int.sort();
	std::cout << "������list��:" << std::endl;
	std::for_each(l_int.cbegin(), l_int.cend(), print());
	l_int.unique();
	std::cout << "ɾ�������ظ�Ԫ�غ�l_int�ĳ�����:" << l_int.size() << std::endl;
	l_int.erase(l_int.begin(), l_int.end());
	std::cout << "ɾ����l_int�ĳ�����:" << l_int.size() << std::endl;


	srand((unsigned)time(NULL));
	for (int i = 0; i < 50; i++) {
		l_str.push_back( CName().GetName());
		Sleep(1);
	}
	std::cout << "����list:" << std::endl;
	std::for_each(l_str.cbegin(),l_str.cend(),print());
	l_str.reverse();
	std::cout << "��ת��listΪ:" << std::endl;
	std::for_each(l_str.cbegin(), l_str.cend(), print());


	system("pause");
	return 0;
}
*/

