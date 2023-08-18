#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int n;
    int c100,c50,c20,c10,c5,c2,c1;
    
        cin >> n;
            c100 = n/100;
            c50 = (n%100)/50;
            c20 = ((n%100)%50)/20;
            c10 = (((n%100)%50)%20)/10;
            c5 = ((((n%100)%50)%20)%10)/5;
            c2 = (((((n%100)%50)%20)%10)%5)/2;
            c1 = (((((n%100)%50)%20)%10)%5)%2;
        cout << n <<endl<< c100 <<" nota(s) de R$ 100,00"<<endl<< c50 <<" nota(s) de R$ 50,00"<<endl<< c20 <<" nota(s) de R$ 20,00"<<endl<< c10 <<" nota(s) de R$ 10,00"<<endl<< c5 <<" nota(s) de R$ 5,00"<<endl<< c2 <<" nota(s) de R$ 2,00"<<endl<< c1 <<" nota(s) de R$ 1,00"<<endl;
 
    return 0;
}