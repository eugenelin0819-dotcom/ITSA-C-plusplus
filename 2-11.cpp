#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    double n,m,h;
    
    cin >> n;

    cout << fixed << setprecision(1) << n * 9 / 5 + 32 + 0.01;
        
    return 0;
}