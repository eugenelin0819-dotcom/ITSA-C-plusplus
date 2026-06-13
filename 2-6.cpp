#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    int n,m,h;
    
    cin >> n;
    while(n > 0){
        cin >> m>> h;
        cout<< (m+h) * (m + h)<<"\n";
        n--;
    }
    
    
    
    
    
    return 0;
}