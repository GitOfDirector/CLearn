// 12-字符串.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//C语言

	char website[] = { 'b', 'a', 'i', 'd', 'u' };//字符数组
	char website2[] = { 'g', 'o', 'o', 'g', 'l', 'e', '\0' };//字符串，C语言默认以 \0 检测字符串的结束

	//cout << website << endl;//访问异常
	cout << website2 << endl;

	char website3[] = "google";
	cout << strlen(website3) << endl;//----6，字符长度6
	cout << sizeof(website3) << endl;//----7，数组长度7，因为会默认在末尾添加 \0

	char website4[20];
	cin >> website4;//输入sina.com 读取sina.com\0
	cout << website4 << endl;

	//拼接方式
	char website4[] = "My"
		"name" "is" "David";
     
	char name[30];
	char food[30];

	cout << "名字：";
	cin >> name;//Mr Smith

	cout << "食物：";
	cin >> food;

	cout << name << "===" << food;
	//Mr===Smith，此处默认为Mr时就结束了第一次的输入，所以无法输入第二次的食物

	//cin默认以空白认为输入的结束，包括Tab，回车，空格等等。
	//改进方式 cin.getline(name, 20);
	

	return 0;
}

