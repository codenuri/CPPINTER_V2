/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Intermediate
* Copyright (C) 2018 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

bool cmp(int a, int b) { return a < b; }

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// ����å���� �Լ� ���.
	sort(x, x+10, cmp);

	// ����å���� �Լ���ü ���.
	sort(x, x+10, less<int>());

	// C++11. ���� ǥ����(lambda expression)
	sort(x, x + 10, 
		  [](int a, int b) { return a < b; } );

}