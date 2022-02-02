#include <iostream>

class Type
{
public:
	~Type() {}
	~Type( ) const {}
};

int main()
{
	char s[10] = "ABCDE";

//	memcpy(s, s+1, 6);
//	memmove(s, s+1, 6);
//	memcpy(s+1, s, 6);
	memmove(s+1, s, 6);

	std::cout << s << std::endl;
}
