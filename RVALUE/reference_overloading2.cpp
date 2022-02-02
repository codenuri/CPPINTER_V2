#include <iostream>

class X{};

void foo(X& x)       { std::cout << "X&" << std::endl;}			// 1
void foo(const X& x) { std::cout << "const X&" << std::endl;}	// 2
void foo(X&& x)      { std::cout << "X&&" << std::endl;}		// 3

int main()
{
	foo( X() ); // 3번

	X&& rx = X();

	foo(rx); // 1

	// lvalue => rvalue 캐스팅하면 3번
	foo(static_cast<X&&>(rx)); // 3
}