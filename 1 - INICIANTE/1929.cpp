#include <iostream>

using namespace std;

int main() {

    int varetas[4], aux, iterador;

    for (iterador = 0; iterador < 4; iterador++) {
        cin >> varetas[iterador];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            aux = varetas[i];

            if (varetas[j] > varetas[i]) {
                varetas[i] = varetas[j];
                varetas[j] = aux;
            }
        }
    }

    if ((varetas[0] >= varetas[1] + varetas[2])
        && varetas[1] >= varetas[2] + varetas[3]) cout << "N" << endl;
    else cout << "S" << endl;

    return 0;
}
