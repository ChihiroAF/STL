#include "stack"
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

	std::stack<int> stack_int;
	std::stack<std::string> stack_str;


	srand((unsigned)time(NULL));
	for (int i = 0; i < 50; i++) {
		stack_int.push((rand() % (100 - 20)) + 20);
		stack_str.push(CName().GetName());
		Sleep(1);
	}
	std::cout << "stack_int的长度是:" << stack_int.size() << std::endl;
	std::cout << "stack_str的长度是:" << stack_str.size() << std::endl;
	for (int i = 0; i < stack_int.size(); i++) {
		
		std::cout << stack_str.top()<<"的成绩是:";
		std::cout << stack_int.top() << std::endl;
		stack_int.pop();
		stack_str.pop();
	}

	system("pause");
	return 0;
}
*/