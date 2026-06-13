#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    double n,m,h;
    
    cin >> n;
    while(n > 0){
        m = 1;
        cin >> h;
        if(h >= 31) cout << "Value of more than 31\n";
        else{
            for(int i = 0; i < h; i++){
                m *= 2;
            }
            cout << fixed << setprecision(0) << m <<"\n";
        }
        n--;
    }
    
    
    
    
    
    
    return 0;
}
