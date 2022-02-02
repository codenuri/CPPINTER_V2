#include <iostream>
#include <algorithm>
#include <functional>

int main()
{
	int x[10] = {1,3,5,7,9,2,4,6,8,10};
	
	std::greater<int> f;
	std::sort(x, x+10, f);

	std::sort(x, x+10, std::greater<int>());

	std::sort(x, x+10, std::greater());

	std::sort(x, x+10, std::greater{} );
}
