#include <iostream>

void foo() {}

int& goo(int a, int& b, int&& c)
{
	b = 20;
	return b;
}
template<class F, class ... T>
decltype(auto) chronometry(F f, T&& ... arg)
{
	return f(std::forward<T>(arg)... );
}

int main()
{	
	int n = 0;

	int& ret = chronometry(goo, 10, n, 10);
				// goo(10, n, 10)
	chronometry(foo);
	ret = 100;
	
	std::cout << n << std::endl; 
}
