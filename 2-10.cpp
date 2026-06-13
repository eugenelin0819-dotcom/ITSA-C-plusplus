#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    double n,m,h;
    
    cin >> n;

    cout << fixed << setprecision(1) << "km="<< n * 1.6 + 0.01;
        
    return 0;
}