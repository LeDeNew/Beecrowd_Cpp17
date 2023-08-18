#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int main() {
 
    float a,b,c;
    cout <<fixed<<setprecision(3);
    
        cin >> a >> b >> c;
            cout <<"TRIANGULO: "<< (a*c)/2 <<endl;
            cout <<"CIRCULO: "<< pow(c,2)*3.14159 <<endl;
            cout <<"TRAPEZIO: "<< ((a+b)*c)/2 <<endl;
            cout <<"QUADRADO: "<< b*b <<endl;
            cout <<"RETANGULO: "<< a*b <<endl;
    
    return 0;
}