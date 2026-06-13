#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    int n,m,s,f;
    cin >> n >> m;
    
    s = n / m;
    f = n % m;
    
    if(f < 0){
        s -= 1;
        f += m;
    }
    
    cout << n << "+" << m << "=" << n + m <<"\n";
    cout << n << "*" << m << "=" << n * m <<"\n";
    cout << n << "-" << m << "=" << n - m <<"\n";
    cout << n << "/" << m << "=" << s ;
    cout << "..." << f;
    
    
    
    
    return 0;
}
