#include <iostream>

int x = 0;
int  foo(int a, int b);// { return 0;}
int& goo(int a, int b) { return x;}

int main()
{
    decltype(foo)      d1;  // int(int, int)
                            // int d1(int, int)
    decltype(foo(1,2)) d2;  // int
//    decltype(goo(1,2)) d3;  // int&

    auto ret1 = goo(1,2); // int ret1 = goo(1, 2)

    //decltype(goo(1,2)) ret2 = goo(1, 2);
    // int& ret2 = goo(1, 2)

    decltype(auto) ret2 = goo(1, 2);

    ret2 = 1000;
    std::cout << x << std::endl; // 1000
}








