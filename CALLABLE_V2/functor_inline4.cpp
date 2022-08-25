#include <iostream>
#include <algorithm>

inline bool cmp1(int a, int b) { return a < b;}
inline bool cmp2(int a, int b) { return a > b;}
struct Less 	{ inline bool operator()(int a, int b) const { return a < b; }};
struct Greater  { inline bool operator()(int a, int b) const { return a > b; }};

template<class T> 
void sort(int* x, int sz, T cmp )
{
	for( int i = 0; i < sz-1; i++)
	{
		for ( int j = i + 1; j < sz; j++)
		{
			if ( cmp(x[i], x[j]) )
				std::swap(x[i], x[j]);
		}
	}
}
int main()
{
	int x[10] = {1,3,5,7,9,2,4,6,8,10};
	Less 	f1;
	Greater f2;
	sort(x, 10, &cmp1);
	sort(x, 10, &cmp2);
	sort(x, 10, f1);
	sort(x, 10, f2);
}

