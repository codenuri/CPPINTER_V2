#include <iostream>

class String
{
public:
	String() = default;
	String(const String& obj) 		 { std::cout << "String copy ctor" << std::endl;}
	String(String&& obj)      		 { std::cout << "String move ctor" << std::endl;}
	String& operator=(const String&) { std::cout << "String copy assignment" << std::endl; return *this;}
	String& operator=(String&&)      { std::cout << "String move assignment" << std::endl; return *this;}
};

class Object
{
	String name;
public:	
	Object() = default;
	
//	Object(const Object& obj) : name(obj.name) {}
	Object& operator=(const Object& obj) { name = obj.name; return *this;}
	Object(Object&& obj) 	  : name(std::move(obj.name)) {}
//	Object& operator=(Object&& obj) { name = std::move(obj.name);return *this;}
};

int main()
{
	Object obj1;
	Object obj2 = obj1;	// error 

	obj2 = obj2; // ok


	Object obj3 = std::move(obj1);  // ok
	obj3 = std::move(obj1); // ok
}