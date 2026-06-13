#include <iostream>

int main()
{
    int n,a,b,c;
    std::cin >> n;
    a = n / 1000;
    n -= a * 1000;
    b = n / 100;
    n -= b * 100;
    c = n / 10;
    n -= c * 10;
        
    std::cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<n;
    

    return 0;
}
