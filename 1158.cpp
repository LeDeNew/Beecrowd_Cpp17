#include <iostream>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n;
    
    for(int i = 0; i<n; i++){
        cin >> x >> y;
        int z = 0;
        
        if(x%2!=0){
            z+=x;
        }
        else{
            x+=1;
            z+=x;
        }
        
        for(int i=0; i<y-1; i++){
            x += 2;
            z += x;
        }
        
        cout << z <<endl;
    }

    return 0;
}