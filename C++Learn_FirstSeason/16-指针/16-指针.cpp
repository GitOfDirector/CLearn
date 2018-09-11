// 16-指针.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a = 10;
	float b = 3.97f;

	//& 取得一个变量的内存地址
	cout << &a << endl;

	//* 从内存地址所对应的内存处取得数据
	cout << *(&a) << endl;

	//指针变量
	int * pa = &a;
	float * pb = &b;

	cout << pa << endl << pb << endl;

	*pa = 100;
	cout << a << endl;

	//空指针
	int  * p1 = NULL;
	int  * p2 = 0;
	int * p3 = nullptr;//推荐

	//通用指针
	//void * 不能指向由const修饰的变量，可用const void * ptv;
	void * p;//p可以接受任意类型的地址

	p = &a;
	cout << (int*)p << endl;//使用的时候必须指明它所代表的类型

	int * p10 = new int;//开辟了一块int的内存，并将地址赋值给p10
	*p10 = 222;
	cout << *p10 << endl;

	//通过new申请的内存空间，在使用完毕后，需要通过delete释放
	//delete p;

	return 0;
}

