#include <iostream>

void foo(int  n) {} 
void goo(int& r) { r = 20;} 

template<class F, class T>
void chronometry(F f, const T& arg)
{
	// 현재 시간 보관
	f(arg);
	// 함수 소요 시간 출력
}

int main()
{
	int n = 10;

	chronometry(foo, 10); // foo(10)
	chronometry(goo, n);  // goo(n)

	std::cout << n << std::endl;
}


