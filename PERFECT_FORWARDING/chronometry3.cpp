#include <iostream>

void hoo(int&& r) {}

template<class F>
void chronometry(F f, int& arg)
{
	f(arg);
}

template<class F>
void chronometry(F f, int&& arg)
{
//	f(arg);
	f(static_cast<int&&>(arg));
}

int main()
{
	hoo(10); // ok
	chronometry(hoo, 10); 	
}

