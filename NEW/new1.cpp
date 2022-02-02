#include <iostream>
#include <new>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x{a}, y{b} { std::cout << "Point(int, int)"  << std::endl; }
	~Point()		 				 { std::cout << "~Point()" << std::endl; }
};

int main()
{
//	Point* p1 = new Point(1,2);
//	delete p1;

	void* p = operator new(sizeof(Point));
	
	std::cout << p << std::endl;

	operator delete(p);

}
