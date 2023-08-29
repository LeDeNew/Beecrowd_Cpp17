#include <iostream>
 
using namespace std;
 
int main() {
    long long int fib[61] = {0};
    fib[0] = 0;
    fib[1] = 1;
    int t, n;
 
    for(int i = 2; i<=60; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> n;
        cout << "Fib(" << n << ") = " << fib[n] <<endl;
    }

    return 0;
}