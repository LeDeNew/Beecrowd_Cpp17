#include <iostream>

using namespace std;

int main()
{
    int a, n, f, x = 0;
    cin >> a >> n;

    for(int i = 0; i<n; i++){
        cin >> f;
        if(f*a>=40000000){
            x++;
        }
    }

    cout << x <<endl;

    return 0;
}