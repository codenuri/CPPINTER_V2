#include <set>
#include <functional>

int main()
{
	std::set<int> s1;

	std::set<int, std::greater<int> > s2;

	// #1. error.
//	std::set<int, [](int a, int b){ return a > b;} > s3;

	// #2. C++20 이후 부터 사용가능한 코드
//	std::set<int, decltype([](int a, int b){ return a > b;}) > s4;

	// #3. C++20 이전에도 사용 가능한 코드
	auto cmp = [](int a, int b){ return a > b;};
	std::set<int, decltype(cmp) > s5(cmp);
}
