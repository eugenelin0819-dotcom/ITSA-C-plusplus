#include <iostream>

int main()
{
    int n;
    
    std::cin >> n;
    
    switch(n){
        case 0: std::cout<<"*****\n*   *\n*   *\n*   *\n*****";
        break;
        
        case 1: std::cout<<"    *\n    *\n    *\n    *\n    *";
        break;
        
        case 2: std::cout<<"*****\n    *\n*****\n*    \n*****";
        break;
        
        case 3: std::cout<<"*****\n    *\n*****\n    *\n*****";
        break;
        
        case 4: std::cout<<"*   *\n*   *\n*****\n    *\n    *";
        break;
        
        case 5: std::cout<<"*****\n*    \n*****\n    *\n*****";
        break;
        
        case 6: std::cout<<"*    \n*    \n*****\n*   *\n*****";
        break;
        
        case 7: std::cout<<"*****\n    *\n    *\n    *\n    *";
        break;
        
        case 8: std::cout<<"*****\n*   *\n*****\n*   *\n*****";
        break;
        
        case 9: std::cout<<"*****\n*   *\n*****\n    *\n    *";
        break;
    }
    return 0;
}