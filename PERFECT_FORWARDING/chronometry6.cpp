#include <iostream>
#include <functional>

void foo(int n) {}

class Test
{
public:
	void f1(int n) { std::cout << "Test f1" << std::endl; }
};

template<class F, class ... T>
decltype(auto) chronometry(F f, T&& ... arg)
{
//	return f(std::forward<T>(arg)... );

	return std::invoke( f, std::forward<T>(arg)... );
}

int main()
{	
	chronometry(foo, 10);

	Test obj;
	chronometry(&Test::f1, &obj, 10);

}
