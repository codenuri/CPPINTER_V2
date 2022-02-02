#include <iostream>

struct BM // BaseMember
{
	BM()  { std::cout << "BM()" << std::endl;}
	~BM() { std::cout << "~BM()" << std::endl;}
};
struct DM // DerivedMember
{
//	DM()     { std::cout << "DM()"    << std::endl;}
	DM(int)  { std::cout << "DM(int)" << std::endl;}
	~DM()    { std::cout << "~DM()"   << std::endl;}
};
struct Base
{
	BM bm;
//	Base()      { std::cout << "Base()"    << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base()     { std::cout << "~Base()"   << std::endl;}
};
struct Derived : public Base 
{
	DM dm;
	Derived()      : Base(0), dm(0) { std::cout << "Derived()" << std::endl;	}
	Derived(int a) : Base(0), dm(0) { std::cout << "Derived()" << std::endl;	}
	~Derived()     { std::cout << "~Derived()" << std::endl;}
};
int main()
{
	Derived d1; 
//	Derived d2(7);
}