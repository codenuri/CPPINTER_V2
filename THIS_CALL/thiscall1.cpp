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
};

int main()
{
	Point pt1;
	Point pt2;

	pt1.set(10, 20);
	pt2.set(10, 20);
}