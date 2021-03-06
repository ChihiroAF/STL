#pragma once
#include <windows.h>  
class 高精度计时
{
public:
	高精度计时(void);
	~高精度计时(void);//析构函数  

private:
	LARGE_INTEGER 开始时间;

	LARGE_INTEGER 结束时间;

	LARGE_INTEGER CPU频率;

public:
	double 间隔;

public:
	void 开始();
	void 结束();
};



高精度计时::高精度计时(void)
{
	QueryPerformanceFrequency(&CPU频率);
}

高精度计时::~高精度计时(void)
{
}

void 高精度计时::开始()
{
	QueryPerformanceCounter(&开始时间);
}

void 高精度计时::结束()
{
	QueryPerformanceCounter(&结束时间);

	间隔 = ((double)结束时间.QuadPart - (double)开始时间.QuadPart) / (double)CPU频率.QuadPart;

}