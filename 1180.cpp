#include <iostream>
#include <limits.h>

using namespace std;

int main(){
    int n=1, p=1, m=INT_MAX;
    cin >> n;
    int x[n];

    for(int i = 0; i<n; i++){
        cin >> x[i];
        if(x[i]<m){
            m = x[i];
            p = i;
        }
    }
    cout << "Menor valor: " << m <<endl;
    cout << "Posicao: " << p <<endl;

    return 0;
}
