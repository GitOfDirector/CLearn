// 12-�ַ���.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//C����

	char website[] = { 'b', 'a', 'i', 'd', 'u' };//�ַ�����
	char website2[] = { 'g', 'o', 'o', 'g', 'l', 'e', '\0' };//�ַ�����C����Ĭ���� \0 ����ַ����Ľ���

	//cout << website << endl;//�����쳣
	cout << website2 << endl;

	char website3[] = "google";
	cout << strlen(website3) << endl;//----6���ַ�����6
	cout << sizeof(website3) << endl;//----7�����鳤��7����Ϊ��Ĭ����ĩβ��� \0

	char website4[20];
	cin >> website4;//����sina.com ��ȡsina.com\0
	cout << website4 << endl;

	//ƴ�ӷ�ʽ
	char website4[] = "My"
		"name" "is" "David";
     
	char name[30];
	char food[30];

	cout << "���֣�";
	cin >> name;//Mr Smith

	cout << "ʳ�";
	cin >> food;

	cout << name << "===" << food;
	//Mr===Smith���˴�Ĭ��ΪMrʱ�ͽ����˵�һ�ε����룬�����޷�����ڶ��ε�ʳ��

	//cinĬ���Կհ���Ϊ����Ľ���������Tab���س����ո�ȵȡ�
	//�Ľ���ʽ cin.getline(name, 20);
	

	return 0;
}

