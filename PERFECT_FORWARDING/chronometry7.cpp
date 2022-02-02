#include <iostream>
#include <functional>

struct Functor
{
	void operator()(int n) &
	{
		std::cout << "operator() &" << std::endl;
	}
	void operator()(int n) &&
	{
		std::cout << "operator() &&" << std::endl;
	}
};

template<class F, class ... T>
decltype(auto) chronometry(F&& f, T&& ... arg)
{
	return std::invoke( std::forward<F>(f), 
				        std::forward<T>(arg)... );
}

int main()
{	
	Functor f;
	f(10); // f.operator()(10)
	Functor()(10); // &&
	chronometry(f, 10);
	chronometry(Functor(), 10);
}
