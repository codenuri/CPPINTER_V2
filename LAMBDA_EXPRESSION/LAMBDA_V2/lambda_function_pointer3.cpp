int main()
{
	int v1 = 10;

	int(*f1)(int, int) = [  ](int a, int b) { return a + b;};      // ok
//	int(*f2)(int, int) = [v1](int a, int b) { return a + b + v1;}; // error

/*
	class CompilerGeneratedName
	{
		int v1;
	public:
		CompilerGeneratedName(int& v1) : v1(v1) {}

		inline int operator()(int a, int b) const {	return a + b + v1; } // ok		

//		static int _invoke(int a, int b) 	      { return a + b + v1; } // error

//		using FP = int(*)(int, int);
//		operator FP() const { return &CompilerGeneratedName::_invoke; }
	};
	*/
}

