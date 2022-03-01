#include <iostream>
#include <type_traits>

template<typename T> requires (!std::is_pointer_v<T>)
void printv(const T& arg)
{
    std::cout << arg << std::endl;
}
template<typename T> requires std::is_pointer_v<T>
void printv(const T& arg)
{
    std::cout << arg << " : " << *arg << std::endl;
}
int main()
{
    int n = 0;
    printv(n);
    printv(&n);
}