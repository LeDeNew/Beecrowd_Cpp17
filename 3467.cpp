#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
    string lugar = "LLL";
    while(cin >> lugar){
        if(lugar[2]=='L') cout << "Esse eh o meu lugar" <<endl;
        else cout << "Oi, Leonard" <<endl;
    }
 
    return 0;
}