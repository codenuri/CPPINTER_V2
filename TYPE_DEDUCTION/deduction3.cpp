#include <iostream>
#include <typeinfo>

template<class T> void foo(T arg)
{
//	std::cout << __FUNCTION__ << std::endl;
//	std::cout << __FUNCSIG__ << std::endl;
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}


int main()
{
	foo<int>(10);
	foo(10);
	foo(3.4);

	int n = 10;
	foo<int&>(n);	
}