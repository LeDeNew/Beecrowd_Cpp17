#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    double r,a;
    cout <<fixed<<setprecision(4);
    
    cin >> r;
        a = (r*r)*3.14159;
    cout <<"A="<< a << endl;
    
    return 0;
}