#include <iostream>

/*
template<class T> 
T* Alloc(std::size_t sz)
{
	return new T[sz];
}
*/
struct Alloc
{
	std::size_t size;

	Alloc(std::size_t sz) : size(sz) {}

	template<class T>
	operator T*() { return new T[size]; }
};

int main()
{
//	int*    p1 = Alloc<int>(10);
//	double* p2 = Alloc<double>(10);

	int*    p1 = Alloc(10); // 임시객체.operator int*()
	double* p2 = Alloc(10);
	
	delete[] p1;
	delete[] p2;

}
