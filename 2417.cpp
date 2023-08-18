#include <iostream>
 
using namespace std;
 
int main() {
 
    int cv,ce,cs,fv,fe,fs,cr,fr;
    cin >>cv>>ce>>cs>>fv>>fe>>fs;
    
    cr = (cv*3)+ce;
    fr = (fv*3)+fe;
    
    if(cr==fr){
        if(cs==fs){
            cout<<"="<<endl;
        }
        else{
            if(cs>fs){
                cout<<"C"<<endl;
            }
            else{
                cout<<"F"<<endl;
            }
        }
    }
    else{
        if(cr>fr){
        cout<<"C"<<endl;
        }
        else{
        cout<<"F"<<endl;
        }
    }
    
    return 0;
}