
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
	//定义字符串向量
	std::vector<std::string> v_string;
	//定义整型向量
	std::vector<int> v_int;
	//定义结构体向量
	std::vector<peopleinfo> v_struct;

	//字符串循环录入姓名
	for (int i = 0; i < 500; i++) {
		std::string name = CName().GetName();
		v_string.push_back(name);
		//因为srand种子是毫秒，所以每录入一个等待一毫秒
		Sleep(1);
	}
	//使用迭代器打印
	//std::for_each(v_string.cbegin(), v_string.cend(), print());
	std::cout << "长度" << v_string.size() << std::endl;

	std::string name = "肖志赋";
	//于首位插入肖志赋并使用下标打印
	v_string.insert(v_string.begin(), name);
	std::cout << "向量首个为：" << v_string[0] << std::endl;
	std::cout << "长度" << v_string.size() << std::endl;
	//删除首位
	v_string.erase(v_string.begin());
	std::cout << "向量首个为：" << v_string[0] << std::endl;
	std::cout << "长度" << v_string.size() << std::endl;
	v_string.clear();
	std::cout << "长度" << v_string.size() << std::endl;


	srand((unsigned)time(NULL));
	for (int i = 0; i < 50; i++) {
		v_int.push_back((rand() % (100 - 20)) + 20);
		Sleep(1);
	}
	//打印初始值
	std::for_each(v_int.cbegin(), v_int.cend(), print());
	//排序
	sort(v_int.begin(), v_int.end());
	std::cout << "排序后：" << std::endl;
	//打印排序后的值
	std::for_each(v_int.cbegin(), v_int.cend(), print());

	int phone = 5528;
	v_int.insert(v_int.begin(), phone);
	std::cout << v_int[0] << std::endl;
	std::cout << "长度" << v_int.size() << std::endl;
	v_int.erase(v_int.begin());
	std::cout << "长度" << v_int.size() << std::endl;

	//清除，大括号初始化
	v_int.clear();
	//判空
	if (v_int.empty()) {
		v_int = { 20,49,2,89,27,66 };
		sort(v_int.begin(), v_int.end());
		std::for_each(v_int.begin(), v_int.end(), print());
	}

	//结构体向量
	peopleinfo my;
	my.age = (rand() % (40 - 20)) + 20;
	my.name = CName().GetName();
	v_struct.push_back(my);
	std::cout << my.name << ":" << my.age << std::endl;

	system("pause");
	return 0;
}

