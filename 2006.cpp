#include <iostream>

using namespace std;

int main(){
    int t, a, b, c, d, e, r;
    cin >> t;
    cin >> a >> b >> c >> d >> e;

    if(a==t) r++;
    if(b==t) r++;
    if(c==t) r++;
    if(d==t) r++;
    if(e==t) r++;

    cout << r <<endl;

    return 0;
}