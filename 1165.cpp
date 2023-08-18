#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    do{
        int x = 0, r = 0;
        cin >> x;
        for(int i = 2; i<=x; i++){
            if(x%i==0){
                r++;
            }
        }
        if(r>1){
            cout << x << " nao eh primo" <<endl;
        }
        else{
            cout << x << " eh primo" <<endl;
        }
        n--;
    } while(n);

    return 0;
}