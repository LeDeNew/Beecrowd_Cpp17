#include <iostream>
#include <string>

using namespace std;

int main(){
    string jogo;
    cin >> jogo;

    if(jogo=="XOX"){
        cout << "*" <<endl;
    }
    else{
        if(jogo=="XXO"){
            cout << "Alice" <<endl;
        }
        else{
            if(jogo=="OXX"){
                cout << "Alice" <<endl;
            }
            else{
                cout << "?" <<endl;
            }
        }
    }

    return 0;
}