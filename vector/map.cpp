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
	std::cout << "����Ϊ:" << m_string1.size() << std::endl;
	//m_string1.clear();
	std::cout << "clear�󳤶�Ϊ:" << m_string1.size() << std::endl;


	//��˯��ʱ��϶̵�ʱ�򣬳��Ȼ����̶�������ȡ˯��ʱ�䲻ȷ�������rand��ȡֵһ��������ÿ��
	//�����ظ���key������һ������map�������ظ���keyֵ������ÿ��map�ĳ���Ҳ�Ͳ�һ�£����Ҵ�ӡ����
	//�Ľ��Ҳ�ǰ���key�Ĵ�С�����
	srand((unsigned)time(NULL));
	for (int i = 0; i < 50; i++) {
		int key = (rand() % (100 - 20)) + 20;
		m_string2.insert(std::pair<int, std::string>(key, CName().GetName()));
		Sleep(key);
	}
	//forѭ����ӡ
	SYSTEMTIME start;
	GetLocalTime(&start);
	for (m_str_iter = m_string2.begin(); m_str_iter != m_string2.end(); m_str_iter++) {
		std::cout << m_str_iter->first << ":" << m_str_iter->second << std::endl;
	}
	SYSTEMTIME end;
	GetLocalTime(&end);
	std::cout << "����Ϊ:" << m_string2.size() << std::endl;
	std::cout << "ʱ��Ϊ:" << end.wMilliseconds-start.wMilliseconds << std::endl;
	
	//�Զ���Ĵ�ӡ������ӡ,�����ӡ�ȽϿ�
	SYSTEMTIME start1;
	GetLocalTime(&start1);
	std::for_each(m_string2.cbegin(), m_string2.cend(), print());
	SYSTEMTIME end1;
	GetLocalTime(&end1);
	std::cout << "ʱ��Ϊ:" << end1.wMilliseconds - start1.wMilliseconds << std::endl;
	
	//ʹ�õ�����Ѱ������map�Ƿ������ͬ��value
	int count = 0;
	for (m_str_iter = m_string1.begin(); m_str_iter != m_string1.end(); m_str_iter++) {
		std::map <int, std::string>::iterator find_map;
		for (find_map = m_string2.begin(); find_map != m_string2.end(); find_map++) {
			if (find_map->second == m_str_iter->second) {
				count++;
			}
		}

	}
	std::cout << "����map�ظ�����Ϊ:" << count << std::endl;

	//ʹ��find��������40-50��keyֵ
	std::map <int, std::string>::iterator Appear;
	for (int i = 40; i < 50;i++) {
		Appear = m_string2.find(i);
		if (Appear != m_string2.end()) {
			std::cout << "Find, the value is " << Appear->second << std::endl;
		}
	}

	//swap����������ֵ
	std::swap(m_string1,m_string2);
	std::for_each(m_string1.cbegin(), m_string1.cend(), print());
	std::for_each(m_string2.cbegin(), m_string2.cend(), print());


	system("pause");
	return 0;
}
*/