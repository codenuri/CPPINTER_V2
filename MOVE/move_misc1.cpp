#include <string>

class Point {};

int main()
{
	// #1.
	std::string s1 = "to be or not to be";
	std::string s2 = std::move(s1);	
				  // static_cast<std::string&&>(s1);
	// #2.
	int n1 = 20;
	int n2 = std::move(n1);

	// #3.
	int* p1 = new int;
	int* p2 = std::move(p1);
	delete p1;

	// #4. 
	Point pt1;
	Point pt2 = std::move(pt1);
}