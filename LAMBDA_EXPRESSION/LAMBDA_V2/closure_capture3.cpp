#include <iostream>

int main()
{
	int v1 = 10, v2 = 20;


//	auto f = [v1, v2](int a)         { v1 = a; v2 = a;}; // error
//	auto f = [v1, v2](int a) mutable { v1 = a; v2 = a;}; // ok. 복사본 변경

	auto f = [&v1, &v2](int a) { v1 = a; v2 = a;};

	f(3);


	std::cout << v1 << std::endl; // 3
	std::cout << v2 << std::endl; // 3
}

