#include <print>
#include <type_traits>

class Object
{
public:
	Object() = default;

	Object(const Object&) {	std::println("copy"); }
	Object(Object&&)          { std::println("move"); }
//	Object(Object&&) noexcept { std::println("move"); }
};

template< typename T >
constexpr std::conditional_t<  
    !std::is_nothrow_move_constructible_v<T> && 
	 std::is_copy_constructible_v<T>, const T&, T&&> 
move_if_noexcept( T& x ) noexcept
{
	return std::move(x);
}

int main()
{
	Object o1;
	Object o2 = std::move_if_noexcept(o1); 

}

