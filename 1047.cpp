#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int hi, mi, hf, mf, hr, mr;
    cin >> hi >> mi >> hf >> mf;
    
        if(hi<hf){
            hr = hf - hi;
        }
        else{
            if(hi==hf){
                if(mi<mf){
                    hr = 0;
                }
                else{
                    hr = 24;
                }
            }
            else{
                hr = 24-hi+hf;
            }
        }
        if(mi<mf){
            mr = mf - mi;
        }
        else{
            if(mi==mf){
                mr = 0;
            }
            else{
                mr = 60-mi+mf;
                hr = hr-1;
            }
        }
        
        cout << "O JOGO DUROU " << hr << " HORA(S) E " << mr << " MINUTO(S)" <<endl;

    return 0;
}
