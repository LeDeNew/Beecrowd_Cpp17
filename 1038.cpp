#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a,b;
    float a1,r;
    cout<<fixed<<setprecision(2);
    cin >> a >> b;
    
    switch(a){
        case 1:
            a1 = 4;
            break;
        case 2:
            a1 = 4.50;
            break;
        case 3:
            a1 = 5;
            break;
        case 4:
            a1 = 2;
            break;
        case 5:
            a1 = 1.5;
            break;
    }
    
    r = a1*b;
    
    cout << "Total: R$ " << r <<endl;

    return 0;
}
