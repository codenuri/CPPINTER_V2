#include <concepts>

template<typename T>
concept GreaterThan4 = sizeof(T) >= 4;

template<typename T> requires GreaterThan4<T>
void foo(T arg)
{
}
int main()
{
    int    i = 10;
    short  s = 10;
    double d = 3.4;

    foo(i); // ok
    foo(s); // error
    foo(d); // ok
}

