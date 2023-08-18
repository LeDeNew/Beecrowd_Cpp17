#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a[100], x;

    for(int i = 0; i<100; i++){
        cin >> x;
        if(x<=10){
            a[i] = x;
            cout << fixed << setprecision(1) << "A[" << i << "] = " << x <<endl;
        } 

    }

    return 0;
}
