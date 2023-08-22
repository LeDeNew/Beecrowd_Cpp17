#include <iostream>
#include <climits>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int n;
    float small = INT_MAX;
    cin >> n;

    for(int i = 0; i<n; i++){
        float p, g, price;
        cin >> p >> g;

        price = (p*1000)/g;
        if(price<small) small = price;
    }

    cout << fixed << setprecision(2) << small <<endl;
 
    return 0;
}