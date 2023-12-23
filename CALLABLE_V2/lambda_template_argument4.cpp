#include <iostream>

int main()
{
	int v1 = 10, v2 = 20;

	auto f = [v1, v2](int a) { return a + v1 + v2;};

	decltype(f) f1 = f; // ok
//	decltype(f) f2;     // error. 


	auto add = [](int a, int b) { return a + b; };

	decltype(add) add1 = add; // ok
	decltype(add) add2;       // C++20 ok
							  // ~ C++17 error
}