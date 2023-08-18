#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    double a,b,c,m;
    
    cout <<fixed<<setprecision(1);
    cin >> a >> b >> c;
        m = ((a*2)+(b*3)+(c*5))/10;
    cout <<"MEDIA = "<< m <<endl;
    
    return 0;
}