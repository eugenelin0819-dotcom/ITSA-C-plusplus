#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    double n,m,h;
    
    cin >> n;
    
    m = 1 - (0.0254 * 30);

    cout << fixed << setprecision(0) << n / m  + 0.5;
        
    return 0;
}