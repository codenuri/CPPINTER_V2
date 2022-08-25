#include <set>
#include <functional>
#include <iostream>

int main()
{	
	std::set<int> s;

	s.insert(15);
	s.insert(35);
	s.insert(25);
	s.insert(20);

	for (auto e : s)
		std::cout << e << std::endl;
}