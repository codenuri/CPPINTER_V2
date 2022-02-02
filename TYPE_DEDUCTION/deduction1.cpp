int main()
{
	int n = 10;
	const int& r = n;

	auto a1 = n; // int a1 = n
	auto a2 = r; // int a2 = r
}
