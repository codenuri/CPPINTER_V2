#include <print>
#include <vector>

class Object
{
public:
	Object() = default;
	Object(const Object&) {	std::println("copy"); }

//	Object(Object&&)          { std::println("move"); }
	Object(Object&&) noexcept { std::println("move"); }
};

int main()
{
	Object o1;
	Object o2 = o1; 			// copy
	Object o3 = std::move(o1); 	// move
	Object o4 = std::move_if_noexcept(o2); // move

	std::vector<Object> v(3);

	std::println("--------------------");
	v.resize(5); 
	std::println("--------------------");
}

