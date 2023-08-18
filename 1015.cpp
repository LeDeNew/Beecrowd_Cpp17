#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int main() {
 
    cout <<fixed<<setprecision(4);
    float x1,x2,y1,y2,d;
    
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cout << sqrt(pow(x2-x1,2)+pow(y2-y1,2))<<endl;
    
    return 0;
}