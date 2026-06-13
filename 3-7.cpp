#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    int n,x,y;
    
    cin >> n;
    
    y = -100;
    
    while(n > 0){
        cin>>x;
        if(x > y) y = x;
        n--;
    }
    cout << y;
    
    return 0;
}