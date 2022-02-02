#include <functional>

class X
{
public:
	void mf1(int a) {}
};
void foo(int a) {}

int main()
{
	X obj;

	void(*f1)(int) = &foo;
	void(X::*f2)(int) = &X::mf1;

	f1(10);			// 일반 함수 포인터 사용
	(obj.*f2)(10);	// 멤버 함수 포인터 사용

//	f2(&obj, 10); // 이렇게 사용가능하면 좋지않을까 ?
				  // uniform call syntax 제안
				  // 채택 안됨. 

	std::invoke(f1, 10);      // f1(10)
	std::invoke(f2, obj,  10);
	std::invoke(f2, &obj, 10);

	auto f3 = std::mem_fn(&X::mf1);
	f3(obj, 10);
	f3(&obj, 10);

}