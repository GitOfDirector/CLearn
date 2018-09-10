// 11-数组.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int scoreArray1[4] = { 1, 2, 2, 3 };
	int scoreArray2[4] = { 1, 2 };//默认值0
	int scoreArray3[] = { 1, 2, 3 };

	//不允许分开
	/*int scoreArray4[4];
	scoreArray4[4] = { 1, 2, 3, 4 };*/

	//不允许直接复制
	//scoreArray2 = scoreArray1;

	//C++11
	int scoreArr5[4]{1, 333, 5};

	cout << scoreArr5[0] << endl;


	return 0;
}

