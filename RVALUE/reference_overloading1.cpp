#include <iostream>

class X{};

//void foo(X  x)       { std::cout << "X" << std::endl;}
void foo(X& x)       { std::cout << "X&" << std::endl;}			// 1
void foo(const X& x) { std::cout << "const X&" << std::endl;}	// 2
void foo(X&& x)      { std::cout << "X&&" << std::endl;}		// 3
void foo(const X&& x){ std::cout << "const X&&" << std::endl;}

int main()
{
	X x;
//	foo( x ); 	// lvalue
				// 1번 호출, 없으면 2번

	foo( X() );	// rvalue
				// 3번 호출
}