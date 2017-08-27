#include "deque"
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

};

int main() {

	std::deque<int> de_int;
	std::deque<std::string> de_str;
	std::deque<int>::iterator it_int;
	std::deque<std::string>::iterator it_str;

	for (int i = 0; i < 50; i++) {
		de_int.push_back(i);
		de_int.push_front(i);
	}
	std::for_each(de_int.cbegin(), de_int.cend(), print());
	
	std::cout << "删除前五十项:" << std::endl;
	for (int i = 0; i < 50; i++) {
		de_int.pop_back();
	}
	std::cout << de_int.size() << std::endl;

	if (!de_int.empty()) {
		std::for_each(de_int.cbegin(), de_int.cend(), print());
	}

	std::cout << "下标打印:" << std::endl;
	for (int i = 0; i < de_int.size(); i++) {
		std::cout<<de_int[i] <<" ";
	}
	std::cout << de_int.size() << std::endl;

	srand((unsigned)time(NULL));
	for (int i = 0; i < 50; i++) {
		de_str.push_back(CName().GetName());
		Sleep(7);
	}
	std::for_each(de_str.cbegin(), de_str.cend(), print());

	for (it_str = de_str.begin(); it_str != de_str.end(); it_str++) {
		de_str.erase(it_str);
	}
	std::cout << "队列长度为："<< de_str.size() << std::endl;

	system("pause");
	return 0;
}