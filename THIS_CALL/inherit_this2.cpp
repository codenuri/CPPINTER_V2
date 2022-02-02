#include <iostream>

struct A 
{
	int x;
	void fa() { std::cout << this << std::endl;}
};
struct B 
{
	int y;
	void fb() { std::cout << this << std::endl;}
};
struct C : public A, public B 
{
	int z;
	void fc() { std::cout << this << std::endl;}
};
int main()
{
	C cc;
	cc.fc(); // 0x1000
	cc.fa(); // 0x1000
	cc.fb(); // 0x1004

	void(C::*f)();

//	f = &C::fa;
	f = &C::fb;

	(cc.*f)(); // 0x1000 ? 0x1004
				// f(&cc)
				// f(&cc + sizeof(A))
}
