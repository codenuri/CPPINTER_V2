#include "cppmaster.h"

template<typename T> void foo(T arg)
{
    LOG_FUNCTION_NAME();
}

int main()
{
    const char* const s = "hello";
    foo(s);
}