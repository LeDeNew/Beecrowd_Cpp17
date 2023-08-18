#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int main() {
 
    double r,v;
    cout <<fixed<<setprecision(3);
    
        cin >> r;
            v = (4.0/3)*3.14159*pow(r,3);
        cout <<"VOLUME = "<< v <<endl;
    
    return 0;
}