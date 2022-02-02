#include <iostream>

struct A { int x;};
struct B { int y;};
struct C : public A, public B 
{
	 int z;
};

int main()
{
	C cc;
	std::cout << &cc << std::endl; // 1000 

	A* pA = &cc;
	B* pB = &cc;
	B* pB1 = static_cast<B*>(&cc);
	B* pB2 = reinterpret_cast<B*>(&cc);

	pB2->y = 10; // 결국 cc.x 에 대입

	std::cout << cc.x << std::endl; // 10
	std::cout << pA << std::endl; // 1000
	std::cout << pB << std::endl; // 1004
	std::cout << pB1 << std::endl; // 1004
	std::cout << pB2 << std::endl; // 1000
}
