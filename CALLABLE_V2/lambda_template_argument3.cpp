int main()
{
	// # 아래 코드는 C++20 부터만 가능
//	int   s1 = sizeof(   [](int a, int b){ return a + b;} );
//	using T1 = decltype( [](int a, int b){ return a + b;} );

	// # 아래 코드는 C++11 ~ 가능
	auto lambda = [](double a, double b){ return a + b;};

	int   s2 = sizeof( lambda );
	using T2 = decltype( lambda );
}
