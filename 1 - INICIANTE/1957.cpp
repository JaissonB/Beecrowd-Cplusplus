#include <iostream>

using namespace std;

int main() {

    int baseDecimal, aux, cont = 0;

    cin >> baseDecimal;

    aux = baseDecimal;
    while (true) {
        if (aux < 16) break;
        aux = aux / 16;
        cont ++;
    }
    char baseHex[cont + 1];

    for (int i = 0; i <= cont; i++) {
        if (baseDecimal < 10) {
            baseHex[i] = baseDecimal + 48;
            break;
        } else if (baseDecimal == 10) {
            baseHex[i] = 'A';
            break;
        } else if (baseDecimal == 11) {
            baseHex[i] = 'B';
            break;
        } else if (baseDecimal == 12) {
            baseHex[i] = 'C';
            break;
        } else if (baseDecimal == 13) {
            baseHex[i] = 'D';
            break;
        } else if (baseDecimal == 14) {
            baseHex[i] = 'E';
            break;
        } else if (baseDecimal == 15) {
            baseHex[i] = 'F';
            break;
        } else {
            if (baseDecimal % 16 < 10) baseHex[i] = baseDecimal % 16 + 48;
            else baseHex[i] = baseDecimal % 16 + 55;
            baseDecimal = baseDecimal / 16;
        }
    }

    for (int i = cont; i >= 0; i--) {
        cout << baseHex[i];
    }
    cout << endl;

    return 0;
}
