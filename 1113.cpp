#include <iostream>

using namespace std;

int main()
{
    int x,y;
    while(cin >> x >> y && x!=y){
        x>y? cout << "Decrescente" <<endl : cout << "Crescente" <<endl;;
    }

    return 0;
}