#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    double n,m,h;
    
    cin >> n>> m;
    m /= 100;

    cout << fixed << setprecision(2) << n / (m * m)  + 0.0001;
        
    return 0;
}