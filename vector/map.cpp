#include <map>
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
		printf_s(" ");
	}
	void operator()(int m)
	{
		printf_s("%d", m);
		printf_s(" ");
	}
	
};


int main() {
	std::map <int, std::string> m_string;
	std::map <int, int> m_int;
	std::map <int, std::string>::iterator m_str_iter;

	for (int i = 0; i < 50;i++) {
		m_string.insert(std::pair<int,std::string> (i, CName().GetName()));
		Sleep(1);
	}

	for (m_str_iter = m_string.begin(); m_str_iter != m_string.end(); m_str_iter++) {
		std::cout << m_str_iter->first << ":"<< m_str_iter->second << std::endl;
	}
	std::cout << "长度为:" << m_string.size() << std::endl;
	m_string.clear();
	std::cout << "clear后长度为:" << m_string.size() << std::endl;


	srand((unsigned)time(NULL));
	for (int i = 0; i < 20; i++) {
		int key = (rand() % (100 - 20)) + 20;
		m_string.insert(std::pair<int, std::string>(key, CName().GetName()));
		Sleep(key);
	}
	for (m_str_iter = m_string.begin(); m_str_iter != m_string.end(); m_str_iter++) {
		std::cout << m_str_iter->first << ":" << m_str_iter->second << std::endl;
	}
	std::cout << "长度为:" << m_string.size() << std::endl;

	//在睡眠时间较短的时候，长度基本固定，当采取睡眠时间不确定来规避rand的取值一定，这样每次
	//可能重复的key个数不一定，而map不允许重复的值，所以每次map的长度也就不一致，而且打印出来
	//的结果也是按照key的大小排序的

	//std::for_each(m_string.cbegin(), m_string.cend(), print());


	system("pause");
	return 0;
}