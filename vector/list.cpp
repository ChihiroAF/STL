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
	std::cout << "整型list:" << std::endl;
	for (int_iter = l_int.begin(); int_iter != l_int.end();int_iter++) {
		std::cout << *int_iter << "  ";
	}
	std::cout << "l_int的长度是:" << l_int.size() << std::endl;
	l_int.sort();
	std::cout << "排序后的list是:" << std::endl;
	std::for_each(l_int.cbegin(), l_int.cend(), print());
	l_int.unique();
	std::cout << "删除相邻重复元素后l_int的长度是:" << l_int.size() << std::endl;
	l_int.erase(l_int.begin(), l_int.end());
	std::cout << "删除后l_int的长度是:" << l_int.size() << std::endl;


	srand((unsigned)time(NULL));
	for (int i = 0; i < 50; i++) {
		l_str.push_back( CName().GetName());
		Sleep(1);
	}
	std::cout << "姓名list:" << std::endl;
	std::for_each(l_str.cbegin(),l_str.cend(),print());
	l_str.reverse();
	std::cout << "反转后list为:" << std::endl;
	std::for_each(l_str.cbegin(), l_str.cend(), print());


	system("pause");
	return 0;
}
*/

