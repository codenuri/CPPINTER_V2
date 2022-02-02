class Point
{
public:
	int x, y;
	Point(int x, int y) : x(x), y(y) { }

	void set(int a, int b) { x = a; y = b;}
};
int main()
{
	Point pt(1,2);

	pt.x = 10;			// ok		
	Point(1, 2).x = 10;	// error
	Point(1, 2).set(10, 20); // ok
	
	Point* p1 = &pt;	// ok
	Point* p2 = &Point(1, 2); //  error

	Point& r1 = pt;		// ok
	Point& r2 = Point(1, 2); // error

	const Point& r3 = Point(1, 2); // ok
	

}
