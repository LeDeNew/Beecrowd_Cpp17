#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, i, j;
    string a, b, c;
    cin >> n;
    for(int k = 0; k<n; k++){
        c.clear();
        i=0;
        j=0;
        cin >> a >> b;
        while(a[i] != '\0' && b[i] != '\0'){
            c += a[i];
            c += b[i];
            i++;
            j++;
        }
        i = j;
        while(a[i] != '\0'){
            c += a[i];
            i++;
        }
        while(b[j] != '\0'){
            c += b[j];
            j++;
        }
        cout << c <<endl;
        cin.get();
    }
}