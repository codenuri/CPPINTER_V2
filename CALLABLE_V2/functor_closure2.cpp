#include <iostream>
#include <vector>
#include <algorithm>

class F 
{
	int value;
public:
	F(int v) : value(v) {}

	bool operator()(int n) const 
	{
		return n % value == 0;
	}
};
int main()
{
	std::vector<int> v = { 1,2,6,7,8,3,4,5,9,10 };
	
	int k = 3;
	
//	F f(k);
	auto r1 = std::find_if(v.begin(), v.end(), F(k) );

	std::cout << *r1 << std::endl;
}
