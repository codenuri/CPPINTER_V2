#include <print>

void foo(int&  a) { std::println("int&"); }
void foo(int&& a) { std::println("int&&");}

int main()
{
	int n = 3;
	
	foo(3);
	foo(n);
	foo( auto{n});
	foo( auto{3});
}