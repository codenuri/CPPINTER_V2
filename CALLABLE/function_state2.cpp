#include <iostream>

class URandom
{
	// member data
public:
	int operator()()
	{
		return rand() % 10;
	}
};

URandom urand;

int main()
{
	for ( int i = 0; i < 10; i++)
		std::cout << urand() << ", ";

	std::cout << std::endl;
}