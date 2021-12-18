#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int loop, valor[2];
    string nome[2], parOuImpar[2];

    cin >> loop;

    while (loop) {
        cin >> nome[0] >> parOuImpar[0]; //se fizer uma variável para cada nome. valor, e par ou impar, o código se torna mai simples de entender
        cin >> nome[1] >> parOuImpar[1];
        cin >> valor[0] >> valor[1];

        if ((valor[0] + valor[1]) % 2) {
                cout << valor[0] + valor[1] % 2 << endl;
            for (int i = 0; i < 2; i++) {
                if (parOuImpar[i] == "IMPAR") {
                    cout << nome[i] << endl;
                    i = 2;
                } else {
                    int j = abs(i-1);
                    cout << nome[j] << endl;
                    i = 2;
                }
            }
        } else {
           for (int i = 0; i < 2; i++) {
                if (parOuImpar[i] == "PAR") {
                    cout << nome[i] << endl;
                    i = 2;
                } else {
                    int j = abs(i-1);
                    cout << nome[j] << endl;
                    i = 2;
                }
            }
        }
        loop--;
    }

    return 0;
}
