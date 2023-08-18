#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float h, v;
    double c;
    cout << fixed << setprecision(3);
    cin >> h;
    cin >> v;
    
    c = h*v/12;
    
    cout << c <<endl;

    return 0;
}