#include <iostream>

int main()
{
	int n = 3;

	n = 10;			// ok
	n + 2 = 10;		// error
	n + 2 * 3 = 10; // error

	(n = 20) = 10;	// ok 
	++n = 10;		// ok
	n++ = 10;		// error
}