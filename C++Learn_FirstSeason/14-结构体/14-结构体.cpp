// 14-结构体.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct Position
{
	float x;
	float y;
	float z;
};



int _tmain(int argc, _TCHAR* argv[])
{

	Position playerPos;
	Position enemyPos{ 3, 4, 5 };
	//Position enemyPos = { 3, 4, 5 };



	return 0;
}

