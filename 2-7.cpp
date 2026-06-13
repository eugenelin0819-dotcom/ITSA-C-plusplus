#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    int n,m,h;
    
    cin >> n >> m >> h;
    if(n>m && n>h) cout << n;
    if(m>n && m>h) cout << m;
    if(h>n && h>m) cout << h;
    
    
    
    
    
    
    return 0;
}