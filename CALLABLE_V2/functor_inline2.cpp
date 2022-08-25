#include <iostream>
#include <algorithm>

void sort(int* x, int sz, bool(*cmp)(int, int) )
{
	for( int i = 0; i < sz-1; i++)
	{
		for ( int j = i + 1; j < sz; j++)
		{
		//	if ( x[i] > x[j] )

			if ( cmp(x[i], x[j]) )
				std::swap(x[i], x[j]);
		}
	}
}

inline bool cmp1(int a, int b) { return a < b;}
inline bool cmp2(int a, int b) { return a > b;}

int main()
{
	int x[10] = {1,3,5,7,9,2,4,6,8,10};

//	sort(x, 10, &cmp1);
	sort(x, 10, &cmp2);

	for( auto e : x)
		std::cout << e << ", ";
}