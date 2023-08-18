#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    
    for(int i = 0; i<t; i++){
        int pf = 0;
        cin >> n;
        
        for(int i = 1; i<n; i++){
            if(n%i==0){
                pf += i;
            }
        }
        if(pf==n){
            cout << n << " eh perfeito" <<endl;
        } else {
            cout << n << " nao eh perfeito" <<endl;
        }
    }

    return 0;
}