#include <iostream>

using namespace std;

int main(){
    int n;
    string ans;
    cin >> n;

    if(n>0){
        if(n<=35) ans = "D";
        else if(n<=60) ans = "C";
        else if(n<=85) ans = "B";
        else ans = "A";
    } else ans = "E";

    cout << ans <<endl;
}