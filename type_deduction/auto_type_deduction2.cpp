#include <iostream>
#include <vector>

int main()
{
    auto a1 = 1;   // auto=int
    auto a2 = {1};
    auto a3{1};

    std::cout << typeid(a1).name() << std::endl;
    std::cout << typeid(a2).name() << std::endl;
    std::cout << typeid(a3).name() << std::endl;

    std::vector<int>  v1(10,0);
    std::vector<bool> v2(10,false);

    auto a4 = v1[0]; // auto=int
    auto a5 = v2[0]; // auto="proxy객체"

    std::cout << typeid(a4).name() << std::endl;
    std::cout << typeid(a5).name() << std::endl;

}