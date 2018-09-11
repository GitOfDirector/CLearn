// C++字符串.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//C++字符串基于string类库
	string str1;
	string str2 = "sdfasgdhdha";

	//该种方式允许直接赋值
	str1 = str2;

	getline(cin, str1);
	cout << str1 << endl;

	string str3 = "AA";
	string str4 = "BB";
	string s = str3 + str4;

	cout << s.size() << endl;



	return 0;
}

