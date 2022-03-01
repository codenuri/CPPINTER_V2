#include <type_traits>

void foo(int a) {}
void foo(double a) {}
void foo(double a, double b) {}

void goo(가상함수가 있는 타입 a) {}
void goo(가상함수가 없는 타입 a) {}
