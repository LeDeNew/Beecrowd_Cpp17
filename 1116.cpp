#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int a;
    float x,y;
    cin >> a;

    while(cin >> x >> y && a>0){
        if(y==0){
            cout << "divisao impossivel" <<endl;
        }
        else{
            cout<<fixed<<setprecision(1)<< x/y <<endl;
        }
        a--;
    }
    
    return(0);
}