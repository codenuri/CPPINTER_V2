#include <type_traits>

template<typename T> T gcd1(T a, T b)
{
    return b == 0 ? a : gcd1(b, a % b );
}

template<typename T> requires std::is_integral_v<T>
T gcd2(T a, T b)
{
    return b == 0 ? a : gcd2(b, a % b );
}

int main()
{
    gcd1(4, 2);
//    gcd1(4.2, 2.1); // error

    gcd2(4, 2);
    gcd2(4.2, 2.1); // error
}