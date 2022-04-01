#include <iostream>

using namespace std;

int main() {
    int mes, dia;

    while (cin >> mes) {
        cin >> dia;
        int diasFaltantes = 360;

        if (mes == 12 && dia == 25) cout << "E natal!" << endl;
        else if (mes == 12 && dia == 24) cout << "E vespera de natal!" << endl;
        else if (mes == 12 && dia > 25) cout << "Ja passou!" << endl;
        else if (mes == 1) cout << "Faltam " << diasFaltantes - dia << " dias para o natal!" << endl;
        else {
            int arrMeses[] = {31,29,31,30,31,30,31,31,30,31,30,31};
            for (int i = 0; i < mes - 1; i++) {
                diasFaltantes -= arrMeses[i];
                if (i == mes - 2) diasFaltantes -= dia;
            }
            cout << "Faltam " << diasFaltantes << " dias para o natal!" << endl;
        }
    }

    return 0;
}
