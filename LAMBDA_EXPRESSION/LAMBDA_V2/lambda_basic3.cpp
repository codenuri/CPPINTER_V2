#include <iostream>

int main()
{
	auto f1 = [](int a, int b) -> int { return a + b; };


	auto f2 = [](int a, int b){ return a + b; };
	

	auto f3 = [](int a, int b){ if (a == 1) return a; return b; };


//	auto f4 = [](int a, double b){ if (a == 1) return a; return b; };

	auto f4 = [](int a, double b)->double { if (a == 1) return a; return b; };
}