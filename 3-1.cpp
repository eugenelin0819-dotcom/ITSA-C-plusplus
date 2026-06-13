#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    int n;
    
    cin >> n;
    if(n > 0) cout<<"正數";
    else if(n ==0) cout<<"0";
    else cout<<"負數";
    return 0;
}