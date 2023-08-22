#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float n1, n2;
    cin >> n1 >> n2;
    cout << fixed << setprecision(2) << n1/n2 <<endl;
 
    return 0;
}