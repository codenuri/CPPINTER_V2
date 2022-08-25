int add1(int a, int b)
{
	return a + b;
}

inline int add2(int a, int b)
{
	return a + b;
}

int main()
{
	int ret1 = add1(1, 2); // 호출
	int ret2 = add2(1, 2); // 치환

	int(*f)(int, int) = &add2;

//	if ( 사용자입력 == 1) f = &add1;

	f(1, 2); // 호출
}