#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    int n,x,y;
    
    cin >> n;
    
   if(n == 3 || n == 4 || n == 5) cout <<"Spring";
   else if(6 <= n && n <= 8) cout <<"Summer";
   else if(9 <= n && n <=11) cout <<"Autumn";
   else cout <<"Winter";
    
    
    return 0;
}