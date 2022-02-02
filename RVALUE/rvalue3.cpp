#include <iostream>
#include <type_traits>

#define value_category(...)													\
			if ( std::is_lvalue_reference_v<decltype((__VA_ARGS__))> )		\
				std::cout << "lvalue" << std::endl;							\
			else if (std::is_rvalue_reference_v<decltype((__VA_ARGS__))>)	\
				std::cout << "rvalue(xvalue)" << std::endl;					\
			else                                                            \
				std::cout << "rvalue(prvalue)" << std::endl;

int main()
{
	int n = 10;

	value_category(n);
	value_category(n+2);
	value_category(++n);
	value_category(n++);
	value_category(10);
	value_category("AA");

	// ++n

/*
	if ( std::is_lvalue_reference_v<decltype((n))> )
		std::cout << "lvalue" << std::endl;
	else
		std::cout << "rvalue" << std::endl;
*/
}