#include <iostream>
#include <typeinfo>
#include <source_location>

template<class T> void foo(T arg)
{
	std::source_location s = std::source_location::current();

	std::cout << s.function_name() << std::endl;
}


int main()
{
	foo<int>(10);
	foo(10);
	foo(3.4);

	int n = 10;
	foo<int&>(n);	
}