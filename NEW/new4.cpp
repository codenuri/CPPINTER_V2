#include <iostream>
#include <vector>

struct X
{
	X()  { std::cout << "X()  get resource"     << std::endl;}
	~X() { std::cout << "~X() release resource" << std::endl;}
};

int main()
{
	std::vector<X> v(10);

	std::cout << "------------" << std::endl;
	v.resize(7);
	std::cout << "------------" << std::endl;

	std::cout << v.size() << std::endl;// 7
	std::cout << v.capacity() << std::endl;// 10
	std::cout << "------------" << std::endl;
	v.resize(8);
	std::cout << "------------" << std::endl;

	std::cout << v.size() << std::endl;// 8
	std::cout << v.capacity() << std::endl;// 10	

}