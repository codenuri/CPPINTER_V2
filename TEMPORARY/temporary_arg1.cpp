#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) { std::cout << "Point(int, int)" << std::endl; }
	~Point()                         { std::cout << "~Point()" << std::endl; }
};

void foo( const Point& pt) { std::cout << "foo" << std::endl;  }

int main()
{
//	Point pt(1,2); 
//	foo(pt);

	foo( Point(1,2));  // foo( Point{1,2});

	foo( {1,2} ); // foo( Point{1,2} );

	std::cout << "------------" << std::endl;
}