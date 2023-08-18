#include <iostream>

using namespace std;

int main()
{
    int n;
    int i = 1;
    cin >> n;
    
    while(n>=i){
        if(n%i==0){
            cout << i <<endl;
        }
        i += 1;
    }
    return 0;
}