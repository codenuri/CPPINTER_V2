#include <iostream>
#include <typeinfo>

template<class T> void foo(T arg)
{
	// g++ : 실행파일 | c++filt -t
	//std::cout << typeid(T).name() << std::endl;
//	*arg = 10;
}

void goo(auto arg)
{
//	auto b;
//	std::cout << typeid(auto).name() << std::endl;
}
int main()
{
//	foo<int>(10);
//	foo(10);
//	foo(3.4);
	foo<const int&>(10);	
	goo(10);

	auto k = {1,2,3};

//	foo({1,2,3});
//	goo({1,2,3});
}