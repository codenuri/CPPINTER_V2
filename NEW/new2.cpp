#include <iostream>
#include <new>
#include <memory>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x{a}, y{b} { std::cout << "Point(int, int)"  << std::endl; }
	~Point()		 				 { std::cout << "~Point()" << std::endl; }
};

int main()
{
	void* p1 = operator new(sizeof(Point));

	Point* p2 = new(p1) Point(1, 2); // 생성자 호출

	p2->~Point();

	operator delete(p1);



	Point* p3 = static_cast<Point*>(operator new(sizeof(Point)));
	
	std::construct_at(p3, 1, 2);
	std::destroy_at(p3);
	operator delete(p3);
}
