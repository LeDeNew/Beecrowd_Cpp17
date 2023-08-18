#include <iostream>

using namespace std;

int main(){
    int n[10], x;
    cin >> x;

    for(int i = 0; i<=9; i++){
        n[i] = x;
        cout << "N[" << i << "] = " << x <<endl;
        x *= 2;
    }

    return 0;
}
