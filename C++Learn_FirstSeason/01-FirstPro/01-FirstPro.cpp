// 01-FirstPro.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
//���룺ϵͳ����<>���Լ�����""

int _tmain(int argc, _TCHAR* argv[])
{

	using namespace std;
	//using std::cout;
	//using std::endl;
	//using std::cin;

	std::cout << "���";
	cout << endl;
	cout << "�ҿ�ʼѧϰ������";
	cout << "AS" << endl;

	/*printf("����˹����%s", "18");
	printf("����˹����%d", 18);*/


	int age;
	cin >> age;
	int month = age * 12;
	cout << "�£�" << month;

	//system("PAUSE");
	//cin >> age;
	cin.get();

	return 0;
}

