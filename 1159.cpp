#include <iostream>

using namespace std;

int main()
{
    int x;
    
    while(cin >> x, x!=0){
        int s = 0;
        
        if(x==0){
            break;
        }
    
        if(x%2!=0){
            x++;
        }
    
        for(int i = 0; i<5; i++){
            s += x;
            x += 2;
        }
    
        cout << s <<endl;
    }

    return 0;
}