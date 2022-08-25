#include <iostream>

int main()
{
	int n1 = 10;
	int n2 = 20;
	double d1 = 1.1;
	double d2 = 2.2;

//	auto swap = [](int& a, int& b) { auto tmp = a; a = b; b = tmp;};
//	auto swap = [](auto& a, auto& b) { auto tmp = a; a = b; b = tmp;};

	auto swap = []<typename T>(T& a, T& b) { auto tmp = a; a = b; b = tmp;};

	swap(n1, n2);
	swap(d1, d2);
//	swap(n1, d2); // int, double
	

}