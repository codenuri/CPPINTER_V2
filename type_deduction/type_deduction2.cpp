#include <iostream>
#include "cppmaster.h"

template<typename T> void foo(T arg)
{
//    std::cout << typeid(T).name() << std::endl;
//    std::cout << __FUNCTION__ << std::endl;
//    std::cout << __PRETTY_FUNCTION__ << std::endl;
//    std::cout << __FUNCSIG__ << std::endl;
    LOG_FUNCTION_NAME();
}

int main()
{
    int n = 0;
//    foo(n); // T=int

    foo<const int&>(n); // T=const int&

}