#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    float p,q,r;
    char c;
    cin >> n;
    cin >> p >> c >> q;
    
    if(c=='+'){
        r = p+q;
    }
    else{
        r = p*q;
    }
    
    if(r<=n){
        cout<<"OK"<<endl;
    }
    else{
        cout<<"OVERFLOW"<<endl;
    }
    
    
    return 0;
}