#include <iostream>
#include <string>
#include <functional>

struct Point
{
	int x, y;
};

template<class T,  class Proj = std::identity > 
const T& mymax(const T& obj1, const T& obj2, Proj proj = {} )
{
	return std::invoke(proj, obj1) < std::invoke(proj, obj2) ? obj2 : obj1;
}

int main()
{
	std::string s1 = "abcd";
	std::string s2 = "xyz";

	auto ret1 = mymax(s1, s2);
	auto ret2 = mymax(s1, s2, [](auto& a) { return a.size();});
	auto ret3 = mymax(s1, s2, &std::string::size);

	Point p1 = {0, 0};
	Point p2 = {1, 1};

	auto ret4 = mymax(p1, p2, &Point::y);

	std::cout << ret4.x << std::endl;
}


