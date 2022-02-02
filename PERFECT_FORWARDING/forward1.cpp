#include <iostream>

void foo(int&  a) { std::cout << "int&" << std::endl; }
void foo(int&& a) { std::cout << "int&& " << std::endl; }
void foo(const int& a) { std::cout << "const int&& " << std::endl; }

void forward_foo(int& arg)
{
	foo(arg);
}
void forward_foo(int&& arg)
{
	foo(static_cast<int&&>(arg));
}
void forward_foo(const int& arg)
{
	foo(arg);
}
int main()
{
	int n = 0;
	const int c = 0;

	foo(n);
	foo(10);
	foo(c);
	forward_foo(n);
	forward_foo(10);
	forward_foo(c);
}