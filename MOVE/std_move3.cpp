#include <iostream>
#include <type_traits>

class Object
{
public:
	Object() = default;
	Object(const Object& obj) { std::cout << "copy ctor" << std::endl;}
	Object(Object&& obj)      { std::cout << "move ctor" << std::endl;}
};

template<class T> 
constexpr std::remove_reference_t<T>&& move(T&& obj) noexcept 
{
	return static_cast<std::remove_reference_t<T> &&>(obj);
}

int main()
{
	Object obj1;
	Object obj2 = obj1;	 	  // copy
	Object obj3 = move(obj1); // move
	Object obj4 = move(Object()); // move
}