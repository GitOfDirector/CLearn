// 24-类型别名.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <array>
#include <string>

using namespace  std;


//宏定义---无必要，不要添加 ;
#define END return 0;//END 代表 return 0;
#define FString string

//类型定义
typedef string UString;


int _tmain(int argc, _TCHAR* argv[])
{

	FString name = "Asdf";
	cout << name << endl;

	UString name2 = "Zxcv";
	cout << name2 << endl;


	//return 0;
	END
}

