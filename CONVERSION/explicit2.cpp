#include <iostream>

class Machine
{
	int  data  = 10;
	bool state = true;
public:
	explicit operator bool() { return state;}
};

int main()
{
	Machine m;

//	bool b1 = m; // error
	bool b2 = static_cast<bool>(m); // ok

//	m << 10;  // error 

	if ( m )
	{		
	}
}
