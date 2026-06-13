#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    int n,x,y;
    
    cin >> n;
    
    
    while(n > 0){
        cin>>x;
        if(70 >= x && x >= 50) cout << x;
        else cout <<"100";
        cout<<"\n";
        n--;
    }
    
    return 0;
}