#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int c1,n1,c2,n2;
    float p1,p2,t;
    
        cin >> c1 >> n1 >> p1;
        cin >> c2 >> n2 >> p2;
        t = (n1*p1)+(n2*p2);
        cout << "VALOR A PAGAR: R$ " <<fixed<<setprecision(2)<<t<<endl;
 
    return 0;
}