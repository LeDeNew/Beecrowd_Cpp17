#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // s/b/a = ataque/bloqueio/defesa
    // s1/b1/a1 = ataque certo/bloqueio certo/defesa certa
    // t = total
    // p = pontos de
    int n;
    double ps, pb, pa, st = 0, bt = 0, at = 0, s1t = 0, b1t = 0, a1t = 0;;
    string nome;
    cin >> n;
    int s[n], b[n], a[n], s1[n], b1[n], a1[n];

    for(int i = 0; i<n; i++){
        cin >> nome;
        cin >> s[i] >> b[i] >> a[i];
        cin >> s1[i] >> b1[i] >> a1[i];
        st += s[i];
        bt += b[i];
        at += a[i];
        s1t += s1[i];
        b1t += b1[i];
        a1t += a1[i];
    }

    ps = (100/st) * s1t;
    pb = (100/bt) * b1t;
    pa = (100/at) * a1t;

    cout << fixed << setprecision(2);
    cout << "Pontos de Saque: " << ps << " %." <<endl;
    cout << "Pontos de Bloqueio: " << pb << " %." <<endl;
    cout << "Pontos de Ataque: " << pa << " %." <<endl;

    return 0;
}