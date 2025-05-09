#include <iostream>

using namespace std;

int main(){
    int n, t, v, total = 0;
    cin >> n;

    for(int i = n; i > 0; i--){
        cin >> t >> v;
        total += t*v;
    }
    cout << total <<endl;
}