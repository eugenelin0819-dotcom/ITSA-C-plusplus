#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    double n,m,h;
    
    cin >> n;
    
    if(n >= 1500) n *= 0.79;
    else if( 1500 > n && n >= 800) n*= 0.9;
        
    cout<< fixed << setprecision(1) << n * 0.9 + 0.0001;
    return 0;
}