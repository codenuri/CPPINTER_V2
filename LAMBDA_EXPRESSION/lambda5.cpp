/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Intermediate
* Copyright (C) 2018 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <functional>
using namespace std;

int main()
{
	auto f1 = [](int a, int b) { return a + b; };

	int(*f2)(int, int) = 
			  [](int a, int b) { return a + b; };

	//f2 = [](int a, int b) { return a - b; };

	function<int(int, int)> f3 =
		[](int a, int b) { return a + b; };


	f1(1, 2); // inline ġȯ ����.
	f2(1, 2); // inline ġȯ�� ��ƴ�
	f3(1, 2); // inline ġȯ�� ��ƴ�

}

