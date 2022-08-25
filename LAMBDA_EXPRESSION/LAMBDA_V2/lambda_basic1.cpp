#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector v = {1, 3, 2, 5, 4};

	std::sort( v.begin(), v.end(), 
			[](int a, int b) { return a > b; } );

	for( auto e : v )
		std::cout << e << ", ";
	
	std::cout << std::endl;



	auto add = [](int a, int b){ return a + b;};

	std::cout << add(1, 2) << std::endl; 
}
