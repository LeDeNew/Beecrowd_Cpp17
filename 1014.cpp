#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    cout <<fixed<<setprecision(3);
    int x;
    float y;
    
        cin >> x >> y;
        cout <<x/y<<" km/l"<<endl;
    
    return 0;
}