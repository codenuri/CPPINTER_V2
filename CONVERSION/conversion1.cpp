#include <iostream>

class Int32
{
	int value;
public:
	Int32()      : value(0){}
	Int32(int n) : value(n){}

	operator int() const { return value;}
};

int main()
{
	int   pn;
	Int32 un;
	
	pn = un; // un.operator int()
	un = pn; // pn.operator Int32() 는 만들수 없다
			 // 1. un.operator=(pn)
			 // 2. Int32(pn)
}
