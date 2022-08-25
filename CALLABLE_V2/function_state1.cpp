#include <iostream>

int urand()
{
	return rand() % 10;
}

int main()
{
	for ( int i = 0; i < 10; i++)
		std::cout << urand() << ", ";

	std::cout << std::endl;
}