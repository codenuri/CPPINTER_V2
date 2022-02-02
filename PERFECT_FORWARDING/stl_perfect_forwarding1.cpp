#include <iostream>
#include <vector>

struct Point
{
	int x, y;

	Point(int a, int b)   : x(a),   y(b)  { std::cout << "Point(int, int)" << std::endl;}	
	Point(const Point& p) : x(p.x), y(p.y){ std::cout << "Point(const Point&)" << std::endl;}	
	~Point(int a, int b)                  { std::cout << "~Point()" << std::endl;}	
};

int main()
{
	std::vector<Point> v;

	Point pt(1,2);
	v.push_back(pt);

	std::cout << "-----------" << std::endl;
}

