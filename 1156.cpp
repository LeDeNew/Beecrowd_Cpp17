#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float s = 1, i = 3, d = 2;
    do {
        s += i/d;
        i += 2;
        d *= 2;
    } while(i<=39);
    cout << fixed << setprecision(2) << s <<endl;

    return 0;
}