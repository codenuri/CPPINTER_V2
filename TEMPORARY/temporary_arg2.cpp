#include <string>
#include <string_view>

void foo( const std::string& s)
{

}

void goo(std::string_view s )
{

}

int main()
{
	foo("Practive make perfect");
	goo("Practive make perfect");

}