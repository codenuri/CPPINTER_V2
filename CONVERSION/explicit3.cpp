#include <iostream>
#include <type_traits>

template<class T> 
class Number
{
	T value;
public:
	explicit(!std::is_integral_v<T> ) 
	Number(T v) : value(v) {}
};

int main()
{
	Number n1 = 10; // ok
	Number n2 = 3.4;// error
}