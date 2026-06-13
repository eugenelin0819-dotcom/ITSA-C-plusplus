#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    int n,m,h;
    
    cin >> n;

    m = 1;
    
    while(m <= n){
        cout << m << " ";
        m += 2;
    }
        
    return 0;
}