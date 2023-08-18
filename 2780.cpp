#include <iostream>

using namespace std;

int main(){
    int d = 0;
    cin >> d;

    if(d<=800){
        cout << 1 <<endl;
    }
    if(d>800 && d<=1400){
        cout << 2 <<endl;
    }
    if(d>1400){
        cout << 3 <<endl;
    }
}