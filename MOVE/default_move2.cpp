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
	
	// 복사 생성자 제공
	Object(const Object& obj) : name(obj.name) {}

	Object(Object&& obj) = default;
	Object& operator=(Object&& obj) = default;
	Object& operator=(const Object& obj) = default;
};

int main()
{
	Object obj1;
	Object obj2 = obj1; 
	obj2 = obj2; 

	Object obj3 = std::move(obj1); 
	obj3 = std::move(obj1); 
}