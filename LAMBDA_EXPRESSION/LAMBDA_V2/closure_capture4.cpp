#include <string>
#include <iostream>

int main()
{
	int v1 = 10, v2 = 10;

	auto f1 = [v1, &v2]() {};

	auto f2 = [=]() {}; 
	auto f3 = [&]() {};

	auto f4 = [=, &v1]() {};
	auto f5 = [&,  v1]() {};
//	auto f6 = [&, &v1]() {}; // error

	auto f7 = [x = v1, &y = v2](int a) { y = a + x; };

	std::string s = "hello";

	auto f8 = [ msg = std::move(s) ]() {};

	std::cout << s << std::endl;
}