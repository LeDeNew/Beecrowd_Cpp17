#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;

    if(x==0){
        if(y==0){
            cout << "Origem" <<endl;
        }
        else{
            cout << "Eixo Y" <<endl;
        }
    }

    if(x>0){
        if(y>0){
            cout << "Q1" <<endl;
        }
        if(y<0){
            cout << "Q4" <<endl;
        }
        if(y==0){
            cout << "Eixo X" <<endl;
        }
    }

    if(x<0){
        if(y>0){
            cout << "Q2" <<endl;
        }
        if(y<0){
            cout << "Q3" <<endl;
        }
        if(y==0){
            cout << "Eixo X" <<endl;
        }
    }

    return 0;
}