#include <iostream>
#include <string>
#include <functional>
#include <algorithm>
#include <vector>

template<class T, class Comp = std::less<void>, class Proj = std::identity> 
const T& mymax(const T& obj1, const T& obj2, Comp comp = {}, Proj proj = {} )
{
	return std::invoke( comp, std::invoke(proj, obj1), std::invoke(proj, obj2)) ? obj2 : obj1;
}

int main()
{
	std::string s1 = "abcd";
	std::string s2 = "xyz";

	auto ret1 = mymax(s1, s2, std::greater{},  &std::string::size );	
	auto ret2 = std::ranges::max(s1, s2, std::greater{},  &std::string::size );	
	auto ret3 = std::ranges::max(s1, s2, std::ranges::greater{},  &std::string::size );	

	std::cout << ret1 << std::endl;
	std::cout << ret2 << std::endl;
	std::cout << ret3 << std::endl;


	std::vector<std::string> v = { "hello", "a", "xxx", "zz" };

//	std::sort(v.begin(), v.end());
//	std::ranges::sort(v);

	std::ranges::sort(v, std::ranges::greater{}, &std::string::size );

	for (auto e : v)
		std::cout << e << std::endl;
}



