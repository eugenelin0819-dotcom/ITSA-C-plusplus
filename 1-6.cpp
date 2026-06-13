#include <iostream>

int main()
{
    int n,m,a;
    
    std::cin >> n >> m;
    a = n;
    while(m > 0){
        n = a;
        while(n > 0){
            std::cout<<"*";
            n -= 1;
        }
        std::cout<<"\n";
        m -= 1;
    }
    
    return 0;
}
