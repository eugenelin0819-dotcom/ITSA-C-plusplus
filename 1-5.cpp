#include <iostream>

int main()
{
    int n,a,b,c,e;
    std::cin >> n;
    e = n / 10000;
    n -= e * 10000;
    a = n / 1000;
    n -= a * 1000;
    b = n / 100;
    n -= b * 100;
    c = n / 10;
    n -= c * 10;
        
    while(e--){
        std::cout<<"*";
    }
    std::cout<<"\n";
    
    while(a--){
        std::cout<<"*";
    }
    std::cout<<"\n";
    
    while(b--){
        std::cout<<"*";
    }
    std::cout<<"\n";
    
    while(c--){
        std::cout<<"*";
    }
    std::cout<<"\n";
    
    while(n--){
        std::cout<<"*";
    }
    std::cout<<"\n";
    

    return 0;
}
