#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    int n,x,y;
    
    cin >> n;
   
   if(n % 400 == 0) cout<<"Bissextile Year";
   else if( n % 100 == 0) cout<<"Common Year";
   else if(n % 4 == 0) cout<<"Bissextile Year";
   else cout<<"Common Year";
    
    
    return 0;
}