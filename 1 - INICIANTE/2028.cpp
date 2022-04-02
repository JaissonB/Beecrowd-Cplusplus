#include <iostream>
#include <vector>

using namespace std;

int main() {

    int X, cases = 1, qntNumeros = 1, aux;
    vector<int> vet = {0};

    while (cin >> X) {
        if (X == 0) {
            cout << "Caso " << cases << ": " << vet.size() << " numero" << endl;
            cout << vet[0] << endl << endl;
        } else {
            aux = 1;
            for (int h = 0; h < X; h++) {
                for (int i = 0; i < aux; i++) {
                    qntNumeros++;
                    vet.push_back(aux);
                }
                aux++;
            }
            cout << "Caso " << cases << ": " << qntNumeros << " numeros" << endl;
            for (int j = 0; j < vet.size(); j++) {
                if (j == 0) cout << vet[j];
                else cout << " " << vet[j];
            }
            cout << endl << endl;
        }
        qntNumeros = 1;
        vet = {0};
        cases++;
    }

    return 0;
}
