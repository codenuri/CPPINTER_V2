#include <type_traits>

double gcd1(double a, double b) { return 0;}    

template<typename T> T gcd1(T a, T b)           
{ 
    return b == 0 ? a : gcd1(b, a % b ); 
}

double gcd2(double a, double b) { return 0;}

template<typename T> requires std::is_integral_v<T>   
T gcd2(T a, T b) 
{
    return b == 0 ? a : gcd2(b, a % b );
}

int main()
{
    gcd2(4.2, 2.1); // double 버전 사용
    gcd2(4, 2);     // template 을 사용해서 int 버전 함수 생성
    gcd2(4.2f, 2.1f); // template 을 사용할수 없으므로 double 버전 함수 사용

//    gcd1(4.2, 2.1); // double 버전 사용
//    gcd1(4, 2);     // template 을 사용해서 int 버전 함수 생성
//    gcd1(4.2f, 2.1f); // template 을 사용해서 float 버전 함수 생성 - %연산때문에 에러.
}






