// 26-do whileѭ��.cpp : �������̨Ӧ�ó������ڵ㡣
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

