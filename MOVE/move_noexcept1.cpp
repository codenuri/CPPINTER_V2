#include <print>
#include <vector>

class Object
{
public:
	Object() = default;

	Object(const Object&) {	std::println("copy"); }
	Object(Object&&)      { std::println("move"); }
};

int main()
{
	std::vector<Object> v(3);

	std::println("--------------------");

	v.resize(5); // ?

	std::println("--------------------");
}

