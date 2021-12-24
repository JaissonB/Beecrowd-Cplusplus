#include <iostream>

using namespace std;

int main() {

    int loop;
    string jogador1, jogador2;

    cin >> loop;

    while (loop--) {
        cin >> jogador1 >> jogador2;
        if (jogador1 == "ataque") {
            if (jogador2 != "ataque") cout << "Jogador 1 venceu" << endl;
            else cout << "Aniquilacao mutua" << endl;
        }
        else if (jogador1 == "pedra") {
            if (jogador2 == "ataque") cout << "Jogador 2 venceu" << endl;
            else if (jogador2 == "pedra") cout << "Sem ganhador" << endl;
            else cout << "Jogador 1 venceu" << endl;
        }
        else if (jogador1 == "papel") {
            if (jogador2 == "papel") cout << "Ambos venceram" << endl;
            else cout << "Jogador 2 venceu" << endl;
        }
    }

    return 0;
}
