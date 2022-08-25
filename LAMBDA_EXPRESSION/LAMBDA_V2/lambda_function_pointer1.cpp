#include <iostream>

int main()
{
	auto            f1 = [](int a, int b) { return a + b;};

	int(*f2)(int, int) = [](int a, int b) { return a + b;};
			
			
	std::cout << f2(1, 2) << std::endl;
}