#include <iostream>
#include <typeinfo>
#include <print>

int main()
{
	// #1.
	auto f1 = [](int a, int b) { return a + b; };
	auto f2 = [](int a, int b) { return a + b; };

	std::println("{}", typeid(f1).name() );
	std::println("{}", typeid(f2).name() );


	// #2. 
	auto f3 = [](int a, int b) { return a + b; };

	f3 = [](int a, int b) { return a + b; }; // error
}



