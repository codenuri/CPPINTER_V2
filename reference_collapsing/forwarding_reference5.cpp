
// void foo(int arg) { } 

// void foo(const int& arg) { } 

//void foo(int&  arg) { } 
//void foo(int&& arg) { } 

template<typename T> void foo(T&& arg) { } 

int main()
{
    int n = 0;
    foo(n);
    foo(0);
}