#include <type_traits>

template<typename T> 
void foo(T arg)
{
}
template<typename T> requires std::is_integral_v<T>
void goo(T arg) 
{
}
int main()
{
	foo(1);  // foo(int arg) 함수 생성
	foo(3.4);
	
	goo(1);
	goo(3.4);	
}