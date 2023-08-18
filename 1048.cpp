#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float si,r,sf;
    int p;
    cout << fixed << setprecision(2);
    cin >> si;
    
    if(si<=400&&si>=0){
        p = 15;
    }
    if(si>400&&si<=800){
        p = 12;
    }
    if(si>800&&si<=1200){
        p = 10;
    }
    if(si>1200&&si<=2000){
        p = 7;
    }
    if(si>2000){
        p = 4;
    }
    
    r = si*p/100;
    sf = r+si;
    
    cout << "Novo salario: " << sf <<endl;
    cout << "Reajuste ganho: " << r <<endl;
    cout << "Em percentual: " << p << " %" << endl;
    

    return 0;
}
