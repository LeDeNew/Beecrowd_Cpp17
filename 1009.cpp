#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    char n[100];
    double s,v,t;
    cout <<fixed<<setprecision(2);
    
        cin >> n >> s >> v;
        t = (v*0.15)+s;
        cout <<"TOTAL = R$ "<< t <<endl;
    
    return 0;
}