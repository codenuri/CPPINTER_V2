#include <iostream>

class Vector
{
	int size;
public:
	Vector()       : size(0)  {}
	Vector(int sz) : size(sz) {}

	Vector& operator=(const Vector& v) = delete;
};

int main()
{
	Vector v1;
	v1 = 10;
}