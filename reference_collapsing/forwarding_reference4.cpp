#include "cppmaster.h"

template<typename T> void f4(T&& arg)
{
    LOG_FUNCTION_NAME();
}

int main()
{
    int n = 0;
    f4(n);  // T=int&    f4(int& )
    f4(0);  // T=int     f4(int&& )

    const int c = 0;
    f4(c);
}