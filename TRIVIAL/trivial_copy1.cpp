#include <iostream>
#include <string>
#include <type_traits>

class Point
{
	int x;
	int y;
//	std::string s;
public:
	Point() = default;
	Point(int a, int b) : x(a), y(b) {}

//	virtual void foo(){}
};

int main()
{
	std::cout << std::is_trivially_copy_constructible_v<Point> << std::endl;

	Point pt1(1,2);
	Point pt2 = pt1;

	Point pt3;
	memmove(&pt3, &pt1, sizeof(Point));
}
