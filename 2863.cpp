#include <iostream>

using namespace std;

int main()
{
    int c;
    float t;
    
    while(cin >> c){
        float m = 12;
        while(c>0){
            cin >> t;
            if(t<m){
                m = t;
            }
            c -= 1;
        }
        cout << m <<endl;
    }
    return 0;
}