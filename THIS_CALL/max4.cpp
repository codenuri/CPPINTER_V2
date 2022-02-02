#include <iostream>
#include <string>
#include <functional>

template<class T,  class Proj = std::identity > 
const T& mymax(const T& obj1, const T& obj2, Proj proj = {} )
{
	return std::invoke(proj, obj1) < std::invoke(proj, obj2) ? obj2 : obj1;
			// (obj1.*proj) < (obj2.*proj)
}

struct Point
{
	int x, y;
};

int main()
{
	Point p1 = {2, 0};
	Point p2 = {1, 1};

	auto ret = mymax(p1, p2, &Point::y );

	std::cout << ret.x << ", " << ret.y << std::endl;
}


