int x = 10;
int  foo() { return x; }
int& goo() { return x; }

int main()
{
//    foo() = 20; // 10 = 20   error
//    goo() = 20; // x의별명 = 20  ok

    int n = 10;
    int* p = &n;
    
    decltype(p)  d1;    // int* d1;
    decltype(*p) d2;    // int& d2;  초기값 문제로 error

    decltype(n)    d3;  // int  d3;
    decltype(n+1)  d4;  // int  d4;
    decltype((n))  d5;  // int& d5;
    decltype(n=20) d6;  // int& d6;

    int x[3] = {1,2,3};
    
    decltype(x[0]) d7;  // int& d7; 
    auto a1 = x[0];     // int a1;

    decltype(x) d8;     // int d8[3]
    auto a2 = x;        // int a2[3] = x 에러이므로
                        // int* a2 = x;

    decltype(n++) d9; 
    decltype(++n) d10;
}



