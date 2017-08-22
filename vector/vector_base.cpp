
#include "vector"
#include "list""
#include "string"
#include "name.h"
#include "iostream"
#include "algorithm"
#include "numeric"
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
		printf_s("%d",m);
		printf_s(" ");
	}
};

int main(){

	std::vector<std::string> v_string;
	std::vector<int> v_int;
	std::vector<peopleinfo> v_struct;

	for (int i = 0;i < 500;i++) {
		std::string name = CName().GetName();
		v_string.push_back(name);
		Sleep(1);
	}
	std::for_each(v_string.cbegin(), v_string.cend(), print());
	std::string name = "肖志赋";
	v_string.insert(v_string.begin(),name);
	std::cout << "长度" << v_string.size() << std::endl;
	v_string.clear();
	std::cout << "长度" << v_string.size() << std::endl;


	int phone = 5528;
	v_int.insert(v_int.begin(), phone);
	std::cout << v_int[0] << std::endl;
	std::cout << "长度"<< v_int.size() << std::endl;
	v_int.erase(v_int.begin());
	std::cout<< "长度" << v_int.size() << std::endl;

	peopleinfo my;
	my.age = (rand() % (40 - 20)) + 20;
	my.name = CName().GetName();
	v_struct.push_back(my);
	std::cout << my.name <<":"<<my.age<<std::endl;

	v_int.clear();
	v_int = {20,49,2,89,27,66};
	sort(v_int.begin(),v_int.end());
	std::for_each(v_int.begin(), v_int.end(), print());


	std::list <int> age = { 20,49,2,89,27,66 };
	std::cout << std::endl << age.size()<< std::endl;
	age.push_front(100);
	age.push_back(99);
	std::for_each(age.begin(), age.end(), print());

	system("pause");
	return 0;
}

