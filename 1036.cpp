#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double a,b,c,x1,x2;
    cin >> a >> b >> c;
    
    if((((b*b)-(4*a*c))<0)||a==0){
        
        cout<< "Impossivel calcular"<<endl;
    }
    else{
        
        x1 = (-b+(sqrt((b*b)-(4*a*c))))/(2*a);
        x2 = (-b-(sqrt((b*b)-(4*a*c))))/(2*a);
        
        cout<<fixed<<setprecision(5)<<"R1 = "<<x1<<endl;
        cout<<"R2 = "<<x2<<endl;
    }
 
    return 0;
}