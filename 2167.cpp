#include <iostream>

using namespace std;

int main()
{
    int n, d = 0;
    cin >> n;
    int r[n];

    for(int i = 1; i<=n; i++){
        r[0] = -1;
        cin >> r[i];
        if(r[i] < r[i-1]){
            d = i;
            break;
        }
    }
    cout << d <<endl;

    return 0;
}