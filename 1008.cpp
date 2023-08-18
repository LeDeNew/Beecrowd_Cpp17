#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int n,h;
    double s;
    cout <<fixed<<setprecision(2);
    
        cin >> n >> h >> s;
        cout <<"NUMBER = "<< n <<endl<<"SALARY = U$ "<< h*s <<endl;
    
    return 0;
}