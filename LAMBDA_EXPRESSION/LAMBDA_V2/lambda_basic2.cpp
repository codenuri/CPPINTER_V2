#include <iostream>

int main()
{
	int v1 = 10, v2 = 10;
	

	auto f1 = [v1, v2](int a){ return a + v1 + v2;};

	std::cout << f1(5) << std::endl; 

	auto f2 = [v1, &v2](int a){ v2 = a + v1;};	

	f2(5);

	std::cout << v2 << std::endl;
}

