#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    double n;
    
    cin >> n;
    
    
    if(n >= 100) {
        n *= 0.7 ;
    }
    else if(n >= 30){
        n *= 0.8; 
    } 
    else if (n >= 10){ 
        n *= 0.9; 
    }
    cout <<fixed << setprecision(0) << n * 100;
    
    return 0;
}