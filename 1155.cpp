#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float s = 0, i = 1;
    do{
        s += 1/i;
        i++;
        
    } while(i<=100);
    cout <<fixed << setprecision(2) << s <<endl;

    return 0;
}