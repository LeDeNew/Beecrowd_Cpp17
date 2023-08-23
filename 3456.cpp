#include <iostream>
 
using namespace std;
 
int main() {
 
    long long int x;
    cin >> x;
    cout << x <<endl;;
    while(x>9){
        x = ((x/10)*3)+(x%10);
        cout << x <<endl;
    }

    return 0;
}