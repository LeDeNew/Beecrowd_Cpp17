#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
 
    int a,b,c;
    
        cin >> a >> b >> c;
            if(a>(b,c))
                cout << a <<" eh o maior"<<endl;
            else
            if(b>(a,c))
                cout << b <<" eh o maior"<<endl;
            else
                cout << c <<" eh o maior"<<endl;
    
    return 0;
}