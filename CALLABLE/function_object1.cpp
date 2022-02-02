#include <iostream>

struct plus
{
	int operator()(int arg1, int arg2)
	{
		return arg1 + arg2;
	}
};

int main()
{
	plus p;			// p는 객체			

	int n = p(1, 2);// p를 함수 처럼 사용.
					// p.operator()(1, 2)

	std::cout << n << std::endl; // 3
}
