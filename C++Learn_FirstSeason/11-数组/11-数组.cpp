// 11-����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int scoreArray1[4] = { 1, 2, 2, 3 };
	int scoreArray2[4] = { 1, 2 };//Ĭ��ֵ0
	int scoreArray3[] = { 1, 2, 3 };

	//������ֿ�
	/*int scoreArray4[4];
	scoreArray4[4] = { 1, 2, 3, 4 };*/

	//������ֱ�Ӹ���
	//scoreArray2 = scoreArray1;

	//C++11
	int scoreArr5[4]{1, 333, 5};

	cout << scoreArr5[0] << endl;


	return 0;
}

