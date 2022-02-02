#include <iostream>
#include <string>

int main()
{
	std::string s1 = "Practice make perfect";
	std::string s2 = s1;

	std::string s3 = "Practice make perfect";
	std::string s4 = std::move(s3);

	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	std::cout << s3 << std::endl; // ""
	std::cout << s4 << std::endl;
}