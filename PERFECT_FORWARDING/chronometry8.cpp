#include <iostream>
#include <functional>
#include <thread>
#include "StopWatch.h"

void foo(int n)
{
	std::this_thread::sleep_for( std::chrono::seconds(n) );
}

template<class F, class ... T>
decltype(auto) chronometry(F&& f, T&& ... arg)
{
	StopWatch sw;
	return std::invoke( std::forward<F>(f), std::forward<T>(arg)... );
}

int main()
{	
	chronometry(foo, 2);
}
