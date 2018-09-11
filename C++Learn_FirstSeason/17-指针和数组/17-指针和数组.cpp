// 17-指针和数组.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace  std;

int _tmain(int argc, _TCHAR* argv[])
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	
	//c++数组本质上是一个指针

	cout << arr << endl;//数组名指向第一个数据的地址
	cout << *arr << endl;
	cout << *(arr + 1) << endl;

	*(arr + 3) = 520;
	cout << arr[3] << endl;

	cout << "===========" << endl;


	//指针定义数组
	int * pArr = arr;
	cout << pArr[0] << endl;

	int * pArr2 = new int[20];
	pArr2[3] = 111;
	cout << pArr2[3] << endl;

	//delete pArr2;//只删除了第一块内存
	//delete[] pArr2;//删除数组占用的整块内存




	return 0;
}

