#include <iostream>

struct Point
{
	int x;
	int y;
};

int main()
{
	int num = 0;

	int* p1 = &num;

	int Point::*p2 = &Point::y;

	*p1 = 10; // ok
//	*p2 = 10; // error

	Point pt;
	pt.*p2 = 10; // pt.y = 10
				 // *((char*)&pt + p2) = 10;

	std::cout << p2 << std::endl;
	printf("%p\n", p2);
}