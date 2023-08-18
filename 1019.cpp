#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int s, m, h;
    cin >> s;
    
    h = s/3600;
    s = s-(h*3600);
    
    m = s/60;
    s = s-(m*60);
    
    cout << h << ":" << m << ":" << s <<endl;

    return 0;
}