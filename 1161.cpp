#include <iostream>

using namespace std;

int main()
{
    long long int m, n, r;
    while(cin >> m >> n){
        long long int nf = 1, mf = 1;
        for(int i = m; i>0; i--){
            mf *= i;
        }
        if(m==0){
            mf = 1;
        }
        
        for(int i = n; i>0; i--){
            nf *= i;
        }
        if(n==0){
            nf = 1;
        }
        r = mf+nf;
        cout << r <<endl;
    }

    return 0;
}