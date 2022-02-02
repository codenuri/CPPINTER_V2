#include <iostream>
#include <string>

template<class T> 
const T& mymax(const T& obj1, const T& obj2)
{
	return obj1 < obj2 ? obj2 : obj1;
}

int main()
{
	std::string s1 = "abcd";
	std::string s2 = "xyz";

	auto ret1 = mymax(s1, s2);
	auto ret2 = mymax(s1.size(), s2.size());

	auto ret3 = mymax(s1, s2, [](auto& a, auto& b) { return a.size() < b.size(); } );
	auto ret4 = mymax(s1, s2, [](auto& a ) { return a.size(); } );
							// f(s1) < f(s2)

	std::cout << ret2 << std::endl;
}