#include <iostream>

// C++20 부터 허용
auto add(auto a, auto b)
{
	return a + b;
}

int main()
{
	std::cout << add(1,   1)   << std::endl; 
	std::cout << add(1.1, 1.2) << std::endl;
	std::cout << add(1,   1.4) << std::endl;
}

