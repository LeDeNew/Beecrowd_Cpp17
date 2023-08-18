#include <iostream>

using namespace std;

int main()
{
    int x, y = 0, d, v = 0;
    cin >> x >> y;

    while(d<y){
        v++;
        d += y-x;
    }
    cout << v <<endl;
    

    return 0;
}