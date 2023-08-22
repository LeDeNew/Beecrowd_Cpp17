#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
 
    double a, b, c, d, area;
    cin >> a >> b >> c;

    d = (a+b+c)/2;
    area = pow((d*(d-a)*(d-b)*(d-c)),0.5);

    cout << fixed << setprecision(3) << area << " m2" <<endl;
 
    return 0;
}