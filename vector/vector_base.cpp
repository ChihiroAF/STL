
#include "vector"
#include "list"
#include "string"
#include "name.h"
#include "iostream"
#include "algorithm"
#include "numeric"
#include <time.h>  
#include "windows.h"

typedef struct people {
	int age;
	std::string name;
}peopleinfo;

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
	//�����ַ�������
	std::vector<std::string> v_string;
	//������������
	std::vector<int> v_int;
	//����ṹ������
	std::vector<peopleinfo> v_struct;

	//�ַ���ѭ��¼������
	for (int i = 0; i < 500; i++) {
		std::string name = CName().GetName();
		v_string.push_back(name);
		//��Ϊsrand�����Ǻ��룬����ÿ¼��һ���ȴ�һ����
		Sleep(1);
	}
	//ʹ�õ�������ӡ
	//std::for_each(v_string.cbegin(), v_string.cend(), print());
	std::cout << "����" << v_string.size() << std::endl;

	std::string name = "Ф־��";
	//����λ����Ф־����ʹ���±��ӡ
	v_string.insert(v_string.begin(), name);
	std::cout << "�����׸�Ϊ��" << v_string[0] << std::endl;
	std::cout << "����" << v_string.size() << std::endl;
	//ɾ����λ
	v_string.erase(v_string.begin());
	std::cout << "�����׸�Ϊ��" << v_string[0] << std::endl;
	std::cout << "����" << v_string.size() << std::endl;
	v_string.clear();
	std::cout << "����" << v_string.size() << std::endl;


	srand((unsigned)time(NULL));
	for (int i = 0; i < 50; i++) {
		v_int.push_back((rand() % (100 - 20)) + 20);
		Sleep(1);
	}
	//��ӡ��ʼֵ
	std::for_each(v_int.cbegin(), v_int.cend(), print());
	//����
	sort(v_int.begin(), v_int.end());
	std::cout << "�����" << std::endl;
	//��ӡ������ֵ
	std::for_each(v_int.cbegin(), v_int.cend(), print());

	int phone = 5528;
	v_int.insert(v_int.begin(), phone);
	std::cout << v_int[0] << std::endl;
	std::cout << "����" << v_int.size() << std::endl;
	v_int.erase(v_int.begin());
	std::cout << "����" << v_int.size() << std::endl;

	//����������ų�ʼ��
	v_int.clear();
	//�п�
	if (v_int.empty()) {
		v_int = { 20,49,2,89,27,66 };
		sort(v_int.begin(), v_int.end());
		std::for_each(v_int.begin(), v_int.end(), print());
	}

	//�ṹ������
	peopleinfo my;
	my.age = (rand() % (40 - 20)) + 20;
	my.name = CName().GetName();
	v_struct.push_back(my);
	std::cout << my.name << ":" << my.age << std::endl;

	system("pause");
	return 0;
}

