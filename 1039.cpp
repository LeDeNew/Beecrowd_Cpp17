#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int r1, x1, y1, r2, x2, y2;
    double d;

    while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){
        d = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
        if(r1>=d+r2){
            cout << "RICO" <<endl;
        }
        else{
            cout << "MORTO" <<endl;
        }
    }

    return 0;
}