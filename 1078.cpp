#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for(int a = 1; a<=10; a++){
        cout << a << " x " << n << " = " << a*n <<endl;
    }

    return 0;
}