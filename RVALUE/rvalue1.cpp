#include <iostream>

int x = 10;
int  f1() { return x;} // "10" 을 반환
int& f2() { return x;} // x의 별명 반환 

int main()
{
	int v1 = 0, v2 = 0;

	v1 = 10; // ok     v1 : lvalue
//	10 = v1; // error  10 : rvalue 
	v2 = v1;

	int* p1 = &v1; // ok
//	int* p2 = &10; // error

//	f1() = 20; // 10 = 20  error
	f2() = 20; // x = 20   ok


	const int c = 10;
//	c = 20; // error. 
			// immutable  lvalue

//	Point(1,2).set(10,20);

	10 = 20; // error. 10은 lvalue 가 아니다.
	"aa"[0] = 'x'; // error. lvalue 문제가 아니라
				   // const char[3] 이므로
}