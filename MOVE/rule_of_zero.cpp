#include <iostream>
#include <string>

class Person
{
	std::string name;
	int   age;
public:
	Person(const std::string& s, int a) : name(s), age(a)
	{
	}
};
int main()
{
	Person robert("john", 30);

}
