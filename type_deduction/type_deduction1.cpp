int main()
{
    int n = 10;
    const int c = 10;

    auto a1 = n; // int a1 = n;
    auto a2 = c; // (1) const int a2 = c;
                 // (2) int a2 = c; ==> ok..
}