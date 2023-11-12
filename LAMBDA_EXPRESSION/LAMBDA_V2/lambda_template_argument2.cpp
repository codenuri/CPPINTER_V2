#include <typeinfo>

int add(int a, int b); // { return a + b; }

int main()
{
	int n = 3;

	int s1 = sizeof( n );  		// 4	
	int s2 = sizeof( n + 2 );	// 4	
	int s3 = sizeof( &add );    // 4, 8
//	int s4 = sizeof( add );		// error.
	int s5 = sizeof( add(1, 2) ); // 4

	int   s = sizeof(   add(1, 2) );
	using T = decltype( add(1, 2) );
	bool  b = noexcept( add(1, 2) );
	const std::type_info& t = typeid( add(1, 2) );
}