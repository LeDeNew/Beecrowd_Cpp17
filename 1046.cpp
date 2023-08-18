#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b,r;
    cin >>a>>b;
    
    if((b-a)==0){
        r = 24;
    }
    if(b>a){
        r = b-a;
    }
    if(a>b){
        r = 24-a+b;
    }
    
    cout<<"O JOGO DUROU "<<r<<" HORA(S)"<<endl;
    
    return 0;
}