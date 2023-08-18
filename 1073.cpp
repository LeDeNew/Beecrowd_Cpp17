#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for(int a; a<=n; a++){
        if(a%2==0 && a>0){
            cout << a << "^2 = " << a*a <<endl;
        }
    }

    return 0;
}