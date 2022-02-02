int main()
{
	int n = 3;

	int& r1 = n; // ok
	int& r2 = 3; // error


	const int& r3 = n; // ok
	const int& r4 = 3; // ok
	
	// C++11 
	int&& r5 = n; // error
	int&& r6 = 3; // ok
}