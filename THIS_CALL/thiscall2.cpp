class Point
{
	int x{0};
	int y{0};
public:
	void set(int a, int b)
	{
		x = a;
		y = b;
	}
	static void foo(int a)
	{
		x = a; 	// this->x = a 가 되어야 하는데
				// this가 없다. 
				// error
	}
};
int main()
{
	Point pt1;
	Point pt2;

	pt1.set(10, 20); // set(&pt, 10, 20)
	pt2.set(10, 20);

	Point::foo(10);
	pt1.foo(10);
}