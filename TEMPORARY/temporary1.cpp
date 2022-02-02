#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) { std::cout << "Point(int, int)" << std::endl; }
	~Point()                         { std::cout << "~Point()" << std::endl; }
};

int main()
{
//	Point pt(1,2); // named object
	Point (1,2);   // unnamed object

	std::cout << "------------" << std::endl;
}