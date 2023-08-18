#include <iostream>

using namespace std;

int main()
{
    int q, v, s = 0, n = 0;
    cin >> q;

    for(int i = 0; i<q; i++){
        cin >> v;
        if(v==1){
            n++;
        }
        if(v==0){
            s++;
        }
    }
    if(s>n){
        cout << "Y" <<endl;
    } else {
        cout << "N" <<endl;
    }

    return 0;
}