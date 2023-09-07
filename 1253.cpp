#include <iostream>
#include <string>
using namespace std;

int main(){
    string trail;
    int p;

    while(cin >> trail){
        cin >> p;
        int r = 0, c = 0;
        for(int i = 0; i<trail.length(); i++){
            if(trail[i]=='W'){
                c++;
                if(r>0){
                    r = 0;
                    c++;
                }
            }
            else{
                r++;
                if(r==p){
                    c++;
                    r = 0;
                }
            }
        }
        if(r>0) c++;
        cout << c <<endl;
    }
}