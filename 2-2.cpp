#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    float n,m,h;
    
    cin >> n >> m >>h;
    cout<< fixed << setprecision(1)<<"Trapezoid area:"<< (n + m) * h / 2;
    
    
    return 0;
}
