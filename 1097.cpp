#include <iostream>

using namespace std;

int main()
{
    int i = 1, j = 7;
    while(i<=9){
        for(int a = 0; a<3; a++){
            cout << "I=" << i << " J=" << j <<endl;
            j--;
        }
        j += 5;
        i += 2;
    }
    
    return 0;
}