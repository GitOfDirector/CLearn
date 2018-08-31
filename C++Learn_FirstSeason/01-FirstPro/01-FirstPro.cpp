// 01-FirstPro.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
//引入：系统内置<>，自己定义""

int _tmain(int argc, _TCHAR* argv[])
{

	using namespace std;
	//using std::cout;
	//using std::endl;
	//using std::cin;

	std::cout << "你好";
	cout << endl;
	cout << "我开始学习程序了";
	cout << "AS" << endl;

	/*printf("克里斯提娜%s", "18");
	printf("克里斯提娜%d", 18);*/


	int age;
	cin >> age;
	int month = age * 12;
	cout << "月：" << month;

	//system("PAUSE");
	//cin >> age;
	cin.get();

	return 0;
}

