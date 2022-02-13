int main()
{
    int n = 0;

    auto a1 = n; // ok
    auto a2 = 0; // ok

    auto& a3 = n; // ok
//    auto& a4 = 0; // error

    // T&& arg = 함수인자
    auto&& a5 = n; // auto=int&   int& && a5 = n
    auto&& a6 = 0; // auto=int    int &&  a6 = 0
}