// 26-do while循环.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <array>

using namespace  std;

int _tmain(int argc, _TCHAR* argv[])
{

	int scores[] = {1, 2, 3};


	for (int& temp : scores)
	{
		temp = 111;
	}

	for (int temp : scores)
	{
		cout << temp << endl;
	}


	return 0;
}

