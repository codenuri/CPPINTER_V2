#include <functional>

template<typename T, typename Compare> 
const T& Max(const T& a, const T& b, Compare comp)
{
    return comp(a, b) ? b : a;
}

int main()
{	
	// 아래 각각의 경우에 Max 함수를 몇개가 생성될까 ?
	// #1. 3개 의 Max 생성
	auto n1 = Max(1, 2, [](int a, int b){ return a < b; });
	auto n2 = Max(1, 2, [](int a, int b){ return a < b; });
	auto n3 = Max(1, 2, [](int a, int b){ return a < b; });

	// #2. 1개의 Max 생성
	auto cmp1 = [](int a, int b){ return a < b; };

	auto n4 = Max(1, 2, cmp1);
	auto n5 = Max(1, 2, cmp1);
	auto n6 = Max(1, 2, cmp1);
	
	// #3. using std::less
	std::less<int> cmp2;
	auto n7 = Max(1, 2, cmp2);
	auto n8 = Max(1, 2, cmp2);
	auto n9 = Max(1, 2, cmp2);
}





