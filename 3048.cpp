#include <iostream>

using namespace std;

int main(){
    int t, n, a, c = 0;
    cin >> t;
    int s[t];

    for(int i = 0; i<t; i++) cin >> s[i];

    for(int i = 0; i<t; i++){
        if(s[i]!=a) c++;
        a = s[i];
    }

    cout << c <<endl;

    return 0;
}
