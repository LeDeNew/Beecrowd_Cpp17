#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int p,i = 0;
    float media,n;
    cout << fixed << setprecision(1);
    
    while(i<6){
        cin >> n;
        
        if(n>0){
            p = p+1;
            media = media+n;
        }
        
        i = i+1;
    }
    
    media = media/p;
    cout << p << " valores positivos" <<endl<<media<<endl;

    return 0;
}