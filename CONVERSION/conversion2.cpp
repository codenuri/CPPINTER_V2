#include <iostream>

class Int32
{
	int value;
public:
	Int32(int n) : value(n){}

//	Int32(const Int32&) = delete;
//	Int32& operator=(const Int32&) = delete;
};

int main()
{
	Int32 n1(3);
	Int32 n2 = 3; 
	Int32 n3{3};
	Int32 n4 = {3};	

	n1 = 3;
}
