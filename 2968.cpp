#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << fixed << setprecision(0);
    double v, n, t; 
    cin >> v >> n;
    t = v*n;
    for(double i = 10; i<=90; i+=10){
        int p;
        p = ceil(t*(i/100));
        if(i==90){
            cout << p <<endl;
        }
        else{
            cout << p << " ";
        }
    }

    return 0;
}