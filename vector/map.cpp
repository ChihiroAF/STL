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
	void operator()(const std::map<int, std::string>::value_type &pair)
	{
		printf_s("%d:", pair.first);
		printf_s("%s\n", pair.second.c_str());
	}

};

/*
int main() {
	std::map <int, std::string> m_string1;
	std::map <int, std::string> m_string2;
	std::map <int, int> m_int;
	std::map <int, std::string>::iterator m_str_iter;

	for (int i = 0; i < 50;i++) {
		m_string1.insert(std::pair<int,std::string> (i, CName().GetName()));
		Sleep(1);
	}

	for (m_str_iter = m_string1.begin(); m_str_iter != m_string1.end(); m_str_iter++) {
		std::cout << m_str_iter->first << ":"<< m_str_iter->second << std::endl;
	}
	std::cout << "长度为:" << m_string1.size() << std::endl;
	//m_string1.clear();
	std::cout << "clear后长度为:" << m_string1.size() << std::endl;


	//在睡眠时间较短的时候，长度基本固定，当采取睡眠时间不确定来规避rand的取值一定，这样每次
	//可能重复的key个数不一定，而map不允许重复的key值，所以每次map的长度也就不一致，而且打印出来
	//的结果也是按照key的大小排序的
	srand((unsigned)time(NULL));
	for (int i = 0; i < 50; i++) {
		int key = (rand() % (100 - 20)) + 20;
		m_string2.insert(std::pair<int, std::string>(key, CName().GetName()));
		Sleep(key);
	}
	//for循环打印
	SYSTEMTIME start;
	GetLocalTime(&start);
	for (m_str_iter = m_string2.begin(); m_str_iter != m_string2.end(); m_str_iter++) {
		std::cout << m_str_iter->first << ":" << m_str_iter->second << std::endl;
	}
	SYSTEMTIME end;
	GetLocalTime(&end);
	std::cout << "长度为:" << m_string2.size() << std::endl;
	std::cout << "时间为:" << end.wMilliseconds-start.wMilliseconds << std::endl;
	
	//自定义的打印函数打印,这个打印比较快
	SYSTEMTIME start1;
	GetLocalTime(&start1);
	std::for_each(m_string2.cbegin(), m_string2.cend(), print());
	SYSTEMTIME end1;
	GetLocalTime(&end1);
	std::cout << "时间为:" << end1.wMilliseconds - start1.wMilliseconds << std::endl;
	
	//使用迭代器寻找两个map是否存在相同的value
	int count = 0;
	for (m_str_iter = m_string1.begin(); m_str_iter != m_string1.end(); m_str_iter++) {
		std::map <int, std::string>::iterator find_map;
		for (find_map = m_string2.begin(); find_map != m_string2.end(); find_map++) {
			if (find_map->second == m_str_iter->second) {
				count++;
			}
		}

	}
	std::cout << "两个map重复个数为:" << count << std::endl;

	//使用find函数查找40-50的key值
	std::map <int, std::string>::iterator Appear;
	for (int i = 40; i < 50;i++) {
		Appear = m_string2.find(i);
		if (Appear != m_string2.end()) {
			std::cout << "Find, the value is " << Appear->second << std::endl;
		}
	}

	//swap交换两个的值
	std::swap(m_string1,m_string2);
	std::for_each(m_string1.cbegin(), m_string1.cend(), print());
	std::for_each(m_string2.cbegin(), m_string2.cend(), print());


	system("pause");
	return 0;
}
*/