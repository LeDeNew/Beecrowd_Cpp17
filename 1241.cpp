#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int n, sizeA, sizeB;
    string a, b;
    bool val;
    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> a >> b;

        sizeA = a.length();
        sizeB = b.length();

        if(sizeA > sizeB){
            for(int j = 0; j<sizeB; j++){
                if(a[j+sizeA-sizeB] == b[j]) val = true;
                else{
                    val = false;
                    break;
                }    
            }
        }
        else{
            for(int j = 0; j<sizeA; j++){
                if(a[abs(j-sizeA+sizeB)] == b[j]) val = true;
                else {
                    val = false;
                    break;
                }
            }
        }
        if(val) cout << "encaixa" <<endl;
        else cout << "nao encaixa" <<endl;
    }
}