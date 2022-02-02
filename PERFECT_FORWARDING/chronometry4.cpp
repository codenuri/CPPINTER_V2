#include <iostream>

void goo(int&  n) { n = 20;}
void hoo(int&& r) {}

/*
template<class F>
void chronometry(F f, int& arg)
{
//	f(arg);
	f( static_cast<int&>(arg) );
}

template<class F>
void chronometry(F f, int&& arg)
{
	f(static_cast<int&&>(arg));
}
*/

template<class F, class T>
void chronometry(F f, T&& arg)
{
//	f(static_cast<T&&>(arg));
	f( std::forward<T>(arg));
}

int main()
{	
	int n = 0;
	chronometry(goo, n);
	chronometry(hoo, 10);

	std::cout << n << std::endl; // 20
}
