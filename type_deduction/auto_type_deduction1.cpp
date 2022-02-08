int main()
{
    int n = 10;
    int& r = n;
    const int c = 10;
    const int& cr = c;

    // 규칙 1.
    auto a1 = n; // auto=int
    auto a2 = r; // auto=int
    auto a3 = c; // auto=int
    auto a4 = cr;// auto=int

    // 규칙 2.
    auto& a5 = n; // auto=int           a5=int&
    auto& a6 = r; // auto=int           a6=int&
    auto& a7 = c; // auto=const int     a7=const int&
    auto& a8 = cr;// auto=const int     a8=const int&

    int x[3] = {1,2,3};
    auto  a = x; // auto=int* 
    auto& b = x; // auto=int[3]  b = int(&)[3]
}



