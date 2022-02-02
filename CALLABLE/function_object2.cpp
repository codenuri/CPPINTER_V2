#include <iostream>
#include <functional>

template<class T>
struct plus
{
	[[nodiscard]] constexpr 
	T operator()(const T& arg1, const T& arg2) const 
	{
		return arg1 + arg2;
	}
};

int main()
{
//	const plus<int> p;					
	std::plus<int> p;

	p(3, 4);

	int n = p(1, 2);					

	std::cout << n << std::endl;
}
