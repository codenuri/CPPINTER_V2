#include <iostream>

int main()
{
//	int(*f)(int, int) = [](int a, int b) { return a + b;};

	class CompilerGeneratedName
	{
	public:
		inline int operator()(int a, int b) const
		{
			return a + b;
		}		
		static int _invoke(int a, int b)
		{
			return a + b;
		}
		using FP = int(*)(int, int);

		operator FP() const { return &CompilerGeneratedName::_invoke; }

	};

	int(*f)(int, int) = CompilerGeneratedName{};
	 				//	CompilerGeneratedName{}.operator int(*)(int, int);

	std::cout << f(1,2) << std::endl; // 3
}

