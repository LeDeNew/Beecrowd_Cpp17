#include <iostream>

using namespace std;

int main()
{
    int t, pa, pb, ca, cb;
    double ga, gb;
    cin >> t;
    while(t>0){
        cin >> pa >> pb >> ga >> gb;
        int a = 0;
        
        while(pa<=pb && a<=100){
            pa += (ga*pa)/100;
            pb += (gb*pb)/100;
            a += 1;
        }
        
        if(a<=100){
            cout << a << " anos."<<endl;
        }
        else{
            cout << "Mais de 1 seculo."<<endl;
        }
        t -= 1;
    }
    
    return 0;
}