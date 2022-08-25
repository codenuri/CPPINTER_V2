#include <iostream>

int main()
{
	int v1 = 10, v2 = 20;


	auto f = [v1, v2](int a) { return a + v1 + v2;};
			 // CompilerGeneratedName {v1, v2};

	std::cout << f(5) << std::endl; // 35

	std::cout << sizeof(f) << std::endl; //8 

}

