#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    int n,m,h;
    
    cin >> n;
    while(n > 0){
        cin >> m;
        cout<< m << " " << m*m << " " << m*m*m << "\n";
        n--;
    }
    
    return 0;
}