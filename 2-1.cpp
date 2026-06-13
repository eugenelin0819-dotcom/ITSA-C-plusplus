#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    float n,m;
    
    cin >> n >> m;
    cout<< fixed << setprecision(1)<<"Triangle area:"<< n*m/2;
    
    
    return 0;
}