void f1(int&  arg) {}
void f2(int&& arg) {}

template<typename T> void f3(T& arg) {}

int main()
{
    int n = 0;
    f1(n); // ok
    f1(0); // error

    f2(n); // error
    f2(0); // ok

    f3(n); // ok
    f3(0); // error
}