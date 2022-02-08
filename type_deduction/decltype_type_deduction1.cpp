#include <iostream>

int main()
{
    int n = 10;
    int& r = n;
    int* p = &n;
    const int c = 10;
    const int& cr = c;

    decltype(n) d1; // int  d1
    decltype(r) d2; // int& d2     초기화문제 error
    decltype(p) d3; // int* d3
    decltype(c) d4; // const int d4  초기화 문제 error
    decltype(cr) d5;// const int& d5 초기화 문제 error
}