// 18-����ĵ�����ʵ��ģʽ.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <array>

using namespace  std;

int _tmain(int argc, _TCHAR* argv[])
{
	array<int, 9> a1 = { 1, 2, 3, 4, 9, 8, 7, 6 };
	array<int, 9> a2 ;

	a2 = a1;

	cout << a1[4] << " " << a2[4] << endl;

	return 0;
}

