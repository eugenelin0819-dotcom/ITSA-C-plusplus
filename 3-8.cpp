#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    int n,x,y;
    
    cin >> n;
    
    switch(n){
        case 1: cout <<"Person";
        break;
        
        case 2: cout <<"Fairy";
        break;
        
        case 3: cout <<"Dwarf";
        break;
    }
    
    return 0;
}