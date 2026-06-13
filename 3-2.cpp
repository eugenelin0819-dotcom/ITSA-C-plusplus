#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    
    char n;
    
    cin >> n;
    if(n == 'a' || n == 'A' || n == 'e' || n == 'E' || n == 'i' || n == 'I' || n == 'o' || n == 'O' || n == 'u' || n == 'U'){
        cout <<"母音";
    }
    else cout<<"子音";
    
    return 0;
}