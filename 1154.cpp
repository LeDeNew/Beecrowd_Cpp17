#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int i = 0;
    float m, n = 0;
    while(cin >> i, i>0){
        m += i;
        n++;
    }
    cout << fixed << setprecision(2) << float(m/n) <<endl;
}