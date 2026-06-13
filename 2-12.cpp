#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    int n,m,h;
    
    cin >> n;

    m = n /10;
    n -= m * 10;
    h = n / 5;
    n -= h*5;

    cout << "NT10="<< m <<"\nNT5="<< h <<"\nNT1="<<n;
        
    return 0;
}