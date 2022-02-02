class Vector
{
public:
	explicit Vector(int size) {}
};

void foo(Vector v) {} // Vector v = 3

int main()
{
	Vector v1(3);
	Vector v2 = 3; // error
	Vector v3{3};
	Vector v4 = {3}; // error

	v1 = 3; // error

	foo(3); // error
}

