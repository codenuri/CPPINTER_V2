#include <iostream>

class Object
{
public:
	Object() = default;
	Object(const Object& obj) { std::cout << "copy ctor" << std::endl;}
	Object(Object&& obj)      { std::cout << "move ctor" << std::endl;}
};

Object foo() 
{
	Object obj;
	return obj;
}
int main()
{
	Object obj1;
	Object obj2 = obj1;	 // copy
	Object obj3 = foo(); // move
	Object obj4 = static_cast<Object&&>(obj1); //move
	Object obj5 = std::move(obj2); // move
}