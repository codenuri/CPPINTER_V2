#include "cppmaster.h"

template<typename T> void foo(T& arg)
{
    LOG_FUNCTION_NAME();
}

int main()
{
    int n = 10;
    int& r = n;
    const int c = 10;
    const int& cr = c;

    foo(n); // T=int        arg=int&
    foo(c); // T=const int  arg=const int&
    foo(r); // T=int        arg=int&
    foo(cr);// T=const int  arg=const int&
}