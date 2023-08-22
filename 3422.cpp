#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, min, extra;
    cin >> n;
    string t;

    for(int i = 0; i<n; i++){
        cin >> min >> t;
        if(min>45) extra = min-45;

        if(t=="1T"){
            if(min<=45) cout << min <<endl;
            else cout << 45 << '+' << extra <<endl;
        }
        
        if(t=="2T"){
            if(min<=45) cout << min+45 <<endl;
            else cout << 90 << '+' << extra <<endl;
        }
    }
 
    return 0;
}