int main()
{
	auto  f1 = [](int a, int b) { return a + b;}; // ok
			   // class CompilerGeneratedNameA{}; CompilerGeneratedNameA{};


//	auto& f2 = [](int a, int b) { return a + b;}; // error


	auto&& f3 = [](int a, int b) { return a + b;}; // ok


	const auto& f4 = [](int a, int b) { return a + b;}; // ok
}