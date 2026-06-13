#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    double n,m,h;
    
    cin >> n;
    while(n > 0){
        cin >> m;
        cout<< fixed << setprecision(1)<< m * m + 0.001<<"\n";
        n--;
    }
    
    
    
    return 0;
}
