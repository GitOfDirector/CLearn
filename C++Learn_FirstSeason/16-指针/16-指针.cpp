// 16-ָ��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a = 10;
	float b = 3.97f;

	//& ȡ��һ���������ڴ��ַ
	cout << &a << endl;

	//* ���ڴ��ַ����Ӧ���ڴ洦ȡ������
	cout << *(&a) << endl;

	//ָ�����
	int * pa = &a;
	float * pb = &b;

	cout << pa << endl << pb << endl;

	*pa = 100;
	cout << a << endl;

	//��ָ��
	int  * p1 = NULL;
	int  * p2 = 0;
	int * p3 = nullptr;//�Ƽ�

	//ͨ��ָ��
	//void * ����ָ����const���εı���������const void * ptv;
	void * p;//p���Խ����������͵ĵ�ַ

	p = &a;
	cout << (int*)p << endl;//ʹ�õ�ʱ�����ָ���������������

	int * p10 = new int;//������һ��int���ڴ棬������ַ��ֵ��p10
	*p10 = 222;
	cout << *p10 << endl;

	//ͨ��new������ڴ�ռ䣬��ʹ����Ϻ���Ҫͨ��delete�ͷ�
	//delete p;

	return 0;
}

