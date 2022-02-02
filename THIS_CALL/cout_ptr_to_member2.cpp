#include <iostream>

struct Point { int x, y;};

struct myostream
{
	myostream& operator<<(int    n) { printf("int    : %d\n", n); return *this;}	
	myostream& operator<<(double d) { printf("double : %f\n", d); return *this;}	
	myostream& operator<<(bool   b) { printf("bool   : %d\n", b); return *this;}	
	myostream& operator<<(void*  p) { printf("void*  : %p\n", p); return *this;}	
	myostream& operator<<(const char* s) { printf("char* : %s\n", s); return *this;}	
};
myostream mycout;

int main()
{
	int n = 10;
	double d = 3.4;
	int Point::*p = &Point::y; 

	mycout << n;  // int
	mycout << d;  // double
	mycout << &n; // void*
	mycout << &d; // void* 
	mycout << p;  // bool   값 4 => 1(true)
}
