// C++�ַ���.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//C++�ַ�������string���
	string str1;
	string str2 = "sdfasgdhdha";

	//���ַ�ʽ����ֱ�Ӹ�ֵ
	str1 = str2;

	getline(cin, str1);
	cout << str1 << endl;

	string str3 = "AA";
	string str4 = "BB";
	string s = str3 + str4;

	cout << s.size() << endl;



	return 0;
}

