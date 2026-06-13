#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    int n,x,y;
    
    cin >> n;
   
   while(n > 0){
       cin >> x;
       if( x >= 90) cout<<"優等\n";
       else if( x >= 80) cout<<"甲等\n";
       else if( x >= 70) cout<<"乙等\n";
       else if( x >= 60) cout<<"丙等\n";
       else cout<<"不及格\n";
       n--;
   }
    
    
    return 0;
}