#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double n1, n2 = -1;
    cout << fixed << setprecision(2);
    
    do{
        cin >> n1;
        if(n1<0 || n1>10){
            cout << "nota invalida" <<endl;
        }
    } while(n1<0 || n1>10);

    do{
        cin >> n2;
        if(n2<0 || n2>10){
            cout << "nota invalida" <<endl;
        }
    } while(n2<0 || n2>10);

    cout << "media = " << (n1+n2)/2 <<endl;

    
    return(0);
}