#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
 
    float a,b,c,p,ar;
    cin >> a >> b >> c;
    cout<<fixed<<setprecision(1);
    
    if(
        abs(b-c)<a&&a<(b+c)||
        abs(a-c)<b&&b<(a+c)||
        abs(a-b)<c&&c<(a+b)){
            
        p = a+b+c;
        
        cout<<"Perimetro = "<<p<<endl;
    }
    else{
        ar = ((a+b)*c)/2;
        
        cout<<"Area = "<<ar<<endl;
    }
    
    return 0;
}