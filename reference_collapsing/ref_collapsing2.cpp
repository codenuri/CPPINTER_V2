template<typename T> void foo(T&& arg) 
{    
}

int main()
{
    int n = 10;

    typedef int& LREF;
    LREF&& r1 = n; // int& && => int& 

    using RREF = int&&;
    RREF&& r2 = 10; // int&& && => int&&

    decltype(r2)&& r3 = 10; // int&& && => int&& 

    foo<int&>( n ); // foo( int& && arg )
                    // foo( int& arg ) 의 함수 생성
                    // 
}


