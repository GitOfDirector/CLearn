// 17-ָ�������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace  std;

int _tmain(int argc, _TCHAR* argv[])
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	
	//c++���鱾������һ��ָ��

	cout << arr << endl;//������ָ���һ�����ݵĵ�ַ
	cout << *arr << endl;
	cout << *(arr + 1) << endl;

	*(arr + 3) = 520;
	cout << arr[3] << endl;

	cout << "===========" << endl;


	//ָ�붨������
	int * pArr = arr;
	cout << pArr[0] << endl;

	int * pArr2 = new int[20];
	pArr2[3] = 111;
	cout << pArr2[3] << endl;

	//delete pArr2;//ֻɾ���˵�һ���ڴ�
	//delete[] pArr2;//ɾ������ռ�õ������ڴ�




	return 0;
}

