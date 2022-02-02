int main()
{
	auto f1 = [](int a, int b){ return a + b;};

	int(*f2)(int, int) = [](int a, int b){ return a + b;};
						// 임시객체
						// 임시객체.operator 함수포인터()

}