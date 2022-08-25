#include <iostream>

int main()
{
//	auto add = [](int a, int b) { return a + b;};

	auto add = [](auto a, auto b) { return a + b;};

	std::cout << add(1,   1)   << std::endl; 
	std::cout << add(1.1, 1.2) << std::endl;
	std::cout << add(1,   1.4) << std::endl;
}

