#include <iostream>
#include <cstring>

class Person
{
	char* name;
	int   age;
public:
	Person(const char* s, int a) : age(a)
	{
		name = new char[strlen(s) + 1];
		strcpy_s(name, strlen(s) + 1, s);
	}
	~Person() { delete[] name; }

	Person(const Person& p) : age(p.age)
	{
		name = new char[strlen(p.name) + 1];
		strcpy_s(name, strlen(p.name) + 1, p.name);	
	}

	Person& operator=(const Person& p)
	{
		if ( this == &p) return *this;

		age = p.age;
		delete[] name;
		name = new char[strlen(p.name) + 1];
		strcpy_s(name, strlen(p.name) + 1, p.name);	

		return* this;
	}	
	Person(Person&& p) noexcept 
			: name(p.name), age(p.age)
	{
		p.name = nullptr;	
	}

	Person& operator=(Person&& p) noexcept
	{
		if ( this == &p) return *this;
		
		delete[] name;
		age = p.age;
		name = p.name;
		p.name = nullptr;		

		return* this;
	}	
	
};
int main()
{
	Person robert("john", 30);

}
