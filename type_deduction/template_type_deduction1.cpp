#include "cppmaster.h"

template<typename T> void foo(T arg)
{
   // while (--arg > 0 ) {}
    LOG_FUNCTION_NAME();
}

int main()
{
    int n = 10;
    int& r = n;
    const int c = 10;
    const int& cr = c;

    foo(n); // T=int
    foo(r); // T=int
    foo(c); // T=int
    foo(cr);// T=int
}