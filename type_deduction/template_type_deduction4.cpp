#include "cppmaster.h"

template<typename T> void foo(T arg) // T arg = x
{   
    LOG_FUNCTION_NAME();
}
template<typename T> void goo(T& arg)// T& arg = x
{
    LOG_FUNCTION_NAME();
}
int main()
{
    int x[3] = {1,2,3};
    foo(x);
    goo(x);
}




/*
template<typename T> void foo(T s1, T s2)
{
}
template<typename T> void goo(T& s1, T& s2)
{
}
int main()
{
    foo("orange", "apple"); // ok
    // foo( const char[7], const char[6])

    //goo("orange", "apple"); // error
    // goo( const char[7], const char[6])

    goo("orange", "banana"); // ok
}
*/

