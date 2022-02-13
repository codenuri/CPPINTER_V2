template<typename T> void f3(T& arg) {}

int main()
{
    int n = 0;

    // 1. 사용자가 템플릿 인자를 직접 전달하는 경우
    f3<int>(n);     // T : int      T& : int&       f3(int& arg) 함수 생성
    f3<int&>(n);    // T : int&     T& : int& &     f3(int& arg) 함수 생성
    f3<int&&>(n);   // T : int&&    T& : int&& &    f3(int& arg) 함수 생성

    // 2. 사용자가 템플릿 인자를 전달하지 않은 경우.
    f3(0);  // error
    f3(n);  // ok 
}