#include <iostream>

int main()
{
    int n;
    
    std::cin >> n;
    
    switch(n){
        case 1: std::cout<<"    *\n   * *\n  *   *\n *     *\n*********";
        break;
        
        case 2: std::cout<<"    *\n   ***\n  *****\n *******\n*********";
        break;
        
        case 3: std::cout<<"*********\n *******\n  *****\n   ***\n    *";
        break;
    }
    return 0;
}
