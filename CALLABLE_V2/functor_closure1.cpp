#include <iostream>
#include <vector>
#include <algorithm>

bool f1(int a) { return a % 3 == 0;}
bool f2(int a) { return a % k == 0;} // ??

int main()
{
	std::vector<int> v = { 1,2,6,7,8,3,4,5,9,10 };

	auto r1 = std::find(v.begin(), v.end(), 3);
	
	auto r2 = std::find_if(v.begin(), v.end(), f1 );

	int k;
	std::cin >> k;

	auto r3 = std::find_if(v.begin(), v.end(), f2 );

}

