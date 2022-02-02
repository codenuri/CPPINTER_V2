#include <iostream>

class Object
{
public:
	Object() = default;
	Object(const Object& obj) { std::cout << "copy ctor" << std::endl;}
//	Object(Object&& obj)      { std::cout << "move ctor" << std::endl;}
};

int main()
{
	Object obj1;
	Object obj2 = obj1;	 
	Object obj3 = std::move(obj1); 

}