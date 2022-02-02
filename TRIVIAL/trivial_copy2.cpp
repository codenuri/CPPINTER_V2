#include <iostream>
#include <type_traits>

struct Point
{
	int x = 0;
	int y = 0;

//	virtual void foo() {}
};

template<class T> 
void copy_type(T* dst, T* src, std::size_t sz)
{
	if constexpr ( std::is_trivially_copy_constructible_v<T> )
	{
		std::cout << "using memcpy" << std::endl;
		memcpy(dst, src, sizeof(T)*sz);
	}
	else 
	{
		std::cout << "using copy ctor" << std::endl;
		while(sz--)
		{
			new(dst) T(*src);
			--dst, --src;
		}	
	}
}
int main()
{	
	Point arr1[5];
//	Point arr2[5];
	Point* arr2 = static_cast<Point*>( operator new( sizeof(Point)* 5));

	copy_type(arr1, arr2, 5);

	//..
}