#include <functional>
#include <memory>

template<typename T, 
		 typename Pred = std::less<T>,
		 typename Allocator = std::allocator<T>>
class set 
{
	// ......
	Pred pred;
	Allocator alloc;
public:
	set() {}  // set() : pred{}
	set(Pred pred) : pred{pred} {}
};

int main()
{
	// ~ C++17
	// #1
	set<int, decltype([](int a, int b) { return a > b ;})> s1;

	// #2
	auto cmp1 = [](int a, int b) { return a > b ;};
	set<int, decltype(cmp1)> s2;

	// #3
	auto cmp2 = [](int a, int b) { return a > b ;};
	set<int, decltype(cmp2)> s3(cmp2);
}