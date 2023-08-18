#include <iostream>

using namespace std;

int main(){
    float a[10], x;

    for(int i = 0; i<10; i++){
        cin >> x;
        
        if(x>0) a[i] = x;
        else a[i] = 1;
        cout << "X[" << i << "] = " << a[i] <<endl;
    }

    return 0;
}
