#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    int n,m,h,x;
    
    cin >> n;

    x = n;
    
    m = n /100;
    n -= m * 100;
    h = n / 10;
    n -= h*10;

    x -= n * n * n;
    x -= m * m * m;
    x -= h * h * h;
    
    if(x == 0) cout <<"YES";
    else cout<<"NO";
        
    return 0;
}