#include <iostream>
#include <string>

template<class T>
void swap1(T& lhs, T& rhs)
{
	T tmp = lhs;
	lhs = rhs;
	rhs = tmp;
}

template<class T>
void swap2(T& lhs, T& rhs)
{
	T tmp = std::move(lhs);
	lhs = std::move(rhs);
	rhs = std::move(tmp);
}

int main()
{
	std::string s1 = "Practice make perfect";
	std::string s2 = "To be or not to be";

	swap1(s1, s2);
}