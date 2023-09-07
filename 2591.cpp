#include <iostream>
#include <string>
using namespace std;

int main(){
    string charge, attack;
    int n, j, a1 = 0, a2 = 0;
    cin >> n;

    for(int i = 0; i<n; i++){
        a1 = a2 = 0;
        cin >> charge;
        for(j = 0; charge[j] != 'm'; j++){
            if(charge[j] == 'a') a1++;
        }
        j++;
        for(j; charge[j] != 'm'; j++){
            if(charge[j] == 'a') a2++;
        }
        attack =  'k';
        for(j = 1; j<=(a1*a2); j++){
            attack += 'a';
        }
        cout << attack <<endl;
    }
}