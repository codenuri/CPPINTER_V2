/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Intermediate
* Copyright (C) 2018 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	// lambda expression Ȱ�� 1. �Լ� ���ڷ� ���
	//sort(x, x+10, [](int a, int b) { return a < b; });


	//[](int a, int b) { return a + b; };//�ӽð�ü����

	//int n = [](int a, int b) { return a + b; }(1,2);

	// lambda expression Ȱ�� 2. auto ������ ��Ƽ�
	//						�Լ� ó�� ���.
	auto f = [](int a, int b) { return a + b; };

	cout << f(1, 2) << endl; // 3

}
