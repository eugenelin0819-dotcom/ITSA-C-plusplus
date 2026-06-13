#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    double n,m,h;
    
    cin >> n;
    while(n > 0){
        cin >> m>> h;
        cout<< m + h <<"\n";
        n--;
    }
    
    
    
    return 0;
}
