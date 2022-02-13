template<typename T> void f4(T&& arg) {}

int main()
{
    int n = 0;

    // 1. 사용자가 템플릿 인자를 직접 전달하는 경우
    f4<int>(0);   // T=int     T&&=int&&     f4(int&& arg)
    f4<int&>(n);  // T=int&    T&&=int& &&   f4(int&  arg)
    f4<int&&>(0); // T=int&&   T&&=int&& &&  f4(int&& arg)

    // 2. 사용자가 템플릿 인자를 전달하지 않은 경우.
    f4(n);  // T=int&   f4(int& arg)
    f4(0);  // T=int    f4(int&& arg)
}