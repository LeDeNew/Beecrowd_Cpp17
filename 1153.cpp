#include <iostream>

using namespace std;

int main()
{
    int n;
    int m = 1;
    int i = 0;
    cin >> n;
    
    while(i<(n-1)){
        m *= n-i;
        i += 1;
    }
    
    cout << m <<endl;

    return 0;
}