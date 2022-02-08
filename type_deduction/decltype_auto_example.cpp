#include <iostream>

/*
template<typename T> T Add(T a, T b)
{
    return a + b;
}
*/
template<typename T1, typename T2> 
// decltype(a+b) Add(T1 a, T2 b)  // error

//auto Add(T1 a, T2 b) -> decltype(a+b) // suffix return, ok..

//auto Add(T1 a, T2 b)

decltype(auto) Add(T1 a, T2 b)
{
    return a + b;
}


int main()
{
    std::cout << Add(1, 2)   << std::endl;
    std::cout << Add(1, 2.3) << std::endl;

//    a = 20; // error. 선언전에 사용
//    int a = 10;
//    a = 20;
}







