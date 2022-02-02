#include <iostream>

struct Point
{
	int x, y;
};

int main()
{
	int Point::*p = &Point::y;   // 4

	std::cout << p << std::endl; // 1

	printf("%p\n", p);  // 4
}