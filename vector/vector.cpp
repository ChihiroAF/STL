#include <vector>
#include <functional>
#include "iostream"
#include "iterator"
#include "time.h"
#include "windows.h"
#include "stdlib.h"
#include "algorithm"
#include "stdio.h"
using namespace std;
typedef vector<int> vint;

class A {
public:
	void makefull() {}
};

std::vector< A* > vA;

void print_vec_operation(const vint& v) {
	int start = GetTickCount();
	for (unsigned int i = 0;i< v.size();i++) {
		cout << v[i] << " ";
	}
	int end = GetTickCount();
	std::cout << "下标发耗时为：" << end - start << std::endl;
}
void print_vec_interator(const vint & v) {
	int start = GetTickCount();
	for (vint::const_iterator iter = v.begin();iter != v.end();iter++) {
		cout << *iter << " ";
	}
	int end = GetTickCount();
	std::cout << "迭代器耗时为：" << end - start << std::endl;
}
void print_vec_algorithm(const vint & v) {
	int start = GetTickCount();
	copy(v.begin(), v.end() ,ostream_iterator<int>(cout," "));
	int end = GetTickCount();
	std::cout << "算法耗时为：" << end - start << std::endl;
}

void print_vec_operation(std::vector< A* > v) {
	int start = GetTickCount();
	size_t count = v.size();
	for (unsigned int i = 0;i<count;i++) {
		v[i]->makefull();
	}
	int end = GetTickCount();
	std::cout << "下标发耗时为：" << end - start << std::endl;
}
void print_vec_interator(std:: vector< A* > v) {
	int start = GetTickCount();
	vector<A*>::iterator itr_end = v.end();
	for (vector<A*>::iterator itr = v.begin(); itr != itr_end; itr++)
		(*itr)->makefull();
	int end = GetTickCount();
	std::cout << "迭代器耗时为：" << end - start << std::endl;
}
void print_vec_algorithm(std:: vector< A* > v) {
	int start = GetTickCount();
	std::for_each(v.begin(), v.end(),mem_fun<void, A>(&A::makefull));
	int end = GetTickCount();
	std::cout << "算法耗时为：" << end - start << std::endl;
}


/*
int main() {
	int ncount;
	vint v;
	std::printf("input vector size:");
	scanf_s("%d", &ncount);
	
	vA.resize(ncount);
	for (int i = 0;i<ncount;i++) {
		vA[i] = new A;
	}
	cout<<vA.size();
	print_vec_operation(vA);
	print_vec_interator(vA);
	print_vec_algorithm(vA);

	v.resize(ncount);
	srand((unsigned)time(NULL));
	for (int i = 0;i<ncount;i++) {
		v.push_back(rand());
	}
	//print_vec_operation(v);
	//print_vec_interator(v);
	//print_vec_algorithm(v);
	system("pause");
	return 0;
}
*/