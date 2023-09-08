#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    string data, signo;
    char strDia[2];
    int dia, mes = 0;
    cin >> data;

    // sistema para converter dia e mes em inteiros
    for(int i = 0; i<2; i++)  strDia[i] = data[i];
    dia = atol(strDia);
    
    mes += int(data[3]) - '0';
    if(mes==1) mes = 10;
    mes += int(data[4]) - '0';

    // jan
    if(mes==1){
        if(dia<20) cout << "capricornio" <<endl;
        else cout << "aquario" <<endl;
    }
    // fev
    if(mes==2){
        if(dia<19) cout << "aquario" <<endl;
        else cout << "peixes" <<endl;
    }
    // mar
    if(mes==3){
        if(dia<21) cout << "peixes" <<endl;
        else cout << "aries" <<endl;
    }
    // abr
    if(mes==4){
        if(dia<21) cout << "aries" <<endl;
        else cout << "touro" <<endl;
    }
    // mai
    if(mes==5){
        if(dia<21) cout << "touro" <<endl;
        else cout << "gemeos" <<endl;
    }
    // jun
    if(mes==6){
        if(dia<21) cout << "gemeos" <<endl;
        else cout << "cancer" <<endl;
    }
    // jul
    if(mes==7){
        if(dia<23) cout << "cancer" <<endl;
        else cout << "leao" <<endl;
    }
    // ago
    if(mes==8){
        if(dia<23) cout << "leao" <<endl;
        else cout << "virgem" <<endl;
    }
    // set
    if(mes==9){
        if(dia<23) cout << "virgem" <<endl;
        else cout << "libra" <<endl;
    }
    // out
    if(mes==10){
        if(dia<23) cout << "libra" <<endl;
        else cout << "escorpiao" <<endl;
    }
    // nov
    if(mes==11){
        if(dia<22) cout << "escorpiao" <<endl;
        else cout << "sagitario" <<endl;
    }
    // dez
    if(mes==12){
        if(dia<22) cout << "sagitario" <<endl;
        else cout << "capricornio" <<endl;
    }
    
    return 0;
}