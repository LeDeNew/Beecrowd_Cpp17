#include <iostream>
#include <string>
using namespace std;

int main(){
    string code, ans;
    int n;
    cin >> n;

    for(int i = 0; i<n; i++){
        ans.clear();
        cin >> code;
        for(int j = code.length(); j>=0; j--){
            if(code[j]>96) ans += code[j];
        }
        cout << ans <<endl;
    }
}