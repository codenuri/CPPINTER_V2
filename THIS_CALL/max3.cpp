#include <iostream>
#include <string>
#include <functional>

template<class T,  class Proj = std::identity > 
const T& mymax(const T& obj1, const T& obj2, Proj proj = {} )
{
	return std::invoke(proj, obj1) < std::invoke(proj, obj2) ? obj2 : obj1;
					//  f(obj1)
}

int main()
{
	std::string s1 = "abcd";
	std::string s2 = "xyz";

	std::identity f;
	auto& r = f(s1);

	std::cout << &s1 << std::endl;
	std::cout << &r << std::endl;

	auto ret = mymax(s1, s2);
	std::cout << ret << std::endl;
}