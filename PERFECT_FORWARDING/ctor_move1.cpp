#include <iostream>
#include <string>

class Object
{
	std::string data;
public:
//	Object(const std::string& s) : data(s) {}
//	Object(std::string&& s) : data(std::move(s)) {}

	template<class T> requires std::is_same_v<T, X>
	Object(T&& s) : data(std::forward<T>(s)) {}
};

int main()
{
	std::string s1 = "abcd";
	std::string s2 = "abcd";
	const std::string s3 = "abcd";

	Object o1(s1);
	Object o2(std::move(s2));
	Object o3(s3);
}