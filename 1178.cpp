#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(4);
    double n[100], x;
    cin >> x;

    for(int i = 0; i<100; i++){
        n[i] = x;
        cout << "N[" << i << "] = " << n[i] <<endl;
        x /= 2;
    }

    return 0;
}
