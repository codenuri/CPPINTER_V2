void foo(int* p) {}
void goo(char* p) {}

struct nullptr_t
{
	template<class T>
	constexpr operator T*() const { return 0;}
};

nullptr_t xnullptr;

int main()
{
	foo(xnullptr); // xnullptr.operator int*()
	goo(xnullptr);

}