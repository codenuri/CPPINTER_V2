#include <iostream>
#include <functional>

template<class F, class ... T>
decltype(auto) chronometry(F&& f, T&& ... arg) 	// int&& arg = 0
{												// std::nullptr_t arg = nullptr;
	return std::invoke( std::forward<F>(f), std::forward<T>(arg)... );
}

void foo(int* p) { }

int main()
{	
	foo(0);	 // ok

//	int arg = 0;
//	foo(arg); // error

//	chronometry(foo, 0); // error
	chronometry(foo, nullptr); // ok
	
}
