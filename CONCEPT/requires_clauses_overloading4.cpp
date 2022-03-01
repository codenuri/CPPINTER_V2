#include <iostream>
#include <vector>
#include <list>
#include <concepts>

template<typename T> requires std::random_access_iterator<T>
void advance(T& p, int n) // n > 0
{
    std::cout << "임의접근" << std::endl;
    p = p + n;
}

template<typename T> requires std::input_iterator<T>
void advance(T& p, int n) // n > 0
{
    std::cout << "임의접근 아닌경우" << std::endl;
    while(n--) ++p;
}
int main()
{
//    std::vector c = {1,2,3,4,5,6,7,8,9,10};
    std::list c = {1,2,3,4,5,6,7,8,9,10};

    auto p = std::begin(c);

//    p = p + 5; 
//    ++p; ++p;++p;++p;++p;
    advance(p, 5);

    std::cout << *p << std::endl;
}







