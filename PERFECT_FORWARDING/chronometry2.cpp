#include <iostream>

void foo(int  n) {} 
void goo(int& r) { r = 20;} 

void hoo(int&& r) {}

template<class F>
void chronometry(F f, int& arg)
{
	f(arg);
}
template<class F>
void chronometry(F f, int&& arg)
{
	f(arg);
}

int main()
{
	hoo(10); // ok
	chronometry(hoo, 10); 

	int n = 10;
	chronometry(foo, 10); 
	chronometry(goo, n);  
	std::cout << n << std::endl;
}


