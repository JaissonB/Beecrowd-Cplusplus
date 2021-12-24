#include <iostream>

using namespace std;

int main() {

    int hora, minuto, comparador, atraso = 480;
    char pontos;

    while (cin >> hora >> pontos >> minuto) {
        comparador = (hora * 60) + minuto;
        if (comparador + 60 <= atraso) cout << "Atraso maximo: " << 0 << endl;
        else cout << "Atraso maximo: " << comparador + 60 - atraso << endl;
    }

    return 0;
}
