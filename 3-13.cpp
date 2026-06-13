#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    int n,m,h;
    
    cin >> n;

    m = n /100;
    n -= m * 100;
    h = n / 10;
    n -= h*10;

    cout << "百元 "<< m <<"\n十元 "<< h <<"\n壹元 "<<n;
        
    return 0;
}