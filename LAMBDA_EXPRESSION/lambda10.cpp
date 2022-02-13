#include <iostream>
using namespace std;

int main()
{
	int v1 = 0, v2 = 0;

	//auto f1 = [v1, v2]() { v1 = 10; v2 = 20;};// error 
	
	// mutable lambda : () ������ �Լ��� ���� �Լ���
	auto f1 = [v1, v2]() mutable { v1 = 10; v2 = 20; };

	f1(); // ���� ǥ���� ����..

	cout << v1 << endl; // 0
	cout << v2 << endl; // 0

}