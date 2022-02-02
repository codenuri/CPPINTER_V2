#include <iostream>
#include <bitset>

class URandom
{
	std::bitset<10> bs;
	bool recycle;
public:
	URandom(bool recycle = false) : recycle(recycle)
	{
		bs.set();
	}

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