#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x, y, n = 1, l = 1;
    cin >> x >> y;

    do{
        if(n<y){
            if(l<x){
                cout << n << " ";
                l++;
            }
            else{
                cout << n <<endl;
                l = 1;
            }
        }
        else{
            cout << n <<endl;
        }

        n++;
    } while(n<=y);
    

    return 0;
}