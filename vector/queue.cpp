#include "queue"
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
/*
int main() {

	std::queue<int> que_int;
	std::queue<std::string> que_str;

	srand((unsigned)time(NULL));
	for (int i = 0; i < 50; i++) {
		que_int.push((rand() % (100 - 20)) + 20);
		que_str.push(CName().GetName());
		Sleep(7);
	}

	if (!que_int.empty()) {
		std::cout << "从队头开始打印:" << std::endl;
		for (int i = 0; i < que_int.size(); i++) {
			std::cout << i << ":"<<que_int.front()<<std::endl;
			que_int.pop();
		}
	}
	if (!que_str.empty()) {
		std::cout << "从队头开始打印:" << std::endl;
		for (int i = 0; i < que_str.size(); i++) {
			std::cout << i << ":"<<que_str.front() << std::endl;
			que_str.pop();
		}
	}

	system("pause");
	return 0;
}
*/