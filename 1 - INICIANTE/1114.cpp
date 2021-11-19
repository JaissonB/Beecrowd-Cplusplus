#include <iostream>

using namespace std;

int main() {
    int X, on=1;

    while (on) {
        cin >> X ;
        if (X!=2002) cout << "Senha Invalida" << endl;
        if (X==2002) {
            cout << "Acesso Permitido" << endl;
            on = 0;
        }
    }

    return 0;
}
