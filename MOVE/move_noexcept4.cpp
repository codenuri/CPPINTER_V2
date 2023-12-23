#include <string>
#include <type_traits>

template<typename T>
class Object
{
	int n;
	std::string s;
	T t;
public:
	Object() = default;

	Object(const Object& other) 
		: n(other.n), s(other.s), t(other.t) {}

	Object(Object&& other) 
//			noexcept( noexcept( t( std::move(other.t) ) ))
			noexcept( std::is_nothrow_move_constructible_v<T> )
		: n( other.n ), 
		  s( std::move(other.s) ),
		  t( std::move(other.t) )
	{
    } 
};
int main()
{

}