#include <iostream>
#include <functional>

struct Point
{
	int x;
	int y;
};

int main()
{
	int Point::*p = &Point::y;

	Point obj;

	obj.*p = 10; // obj.y = 10
	(&obj)->*p = 10;

	std::invoke(p, obj) = 20; // obj.y = 20
	int n = std::invoke(p, obj); 

	std::cout << n << std::endl;
	std::cout << obj.y << std::endl;
}