#include <iostream>
#include <string>
#include <functional>

template<class T,  class Proj> 
const T& mymax(const T& obj1, const T& obj2, Proj proj )
{
//	return proj(obj1) < proj(obj2) ? obj2 : obj1;
					// (obj2.*proj)()

	return std::invoke(proj, obj1) < std::invoke(proj, obj2) ? obj2 : obj1;
}
int main()
{
	std::string s1 = "abcd";
	std::string s2 = "xyz";

	auto ret1 = mymax(s1, s2, [](auto& a ) { return a.size(); } );
	auto ret2 = mymax(s1, s2, &std::string::size  );

//	auto ret3 = mymax(s1, s2);

	std::cout << ret1 << std::endl;
	std::cout << ret2 << std::endl;
}