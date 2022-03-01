#include <iostream>
#include <type_traits>

class Test 
{
//public: virtual void f() {}
};

template<typename T> requires std::is_polymorphic_v<T>
void foo(const T& arg)
{
    std::cout << "가상함수가 있는 타입에 대한 알고리즘" << std::endl;
}
template<typename T> requires (!std::is_polymorphic_v<T>)
void foo(const T& arg)
{
    std::cout << "가상함수가 없는 타입에 대한 알고리즘" << std::endl;
}
int main()
{
    foo(Test());
}