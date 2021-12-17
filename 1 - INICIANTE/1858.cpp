#include <iostream>

using namespace std;

int main() {

    int loop, opcao, opcaoCorreta = 21, resposta;

    cin >> loop;

    for (int i = 0; i < loop; i++) {
        cin >> opcao;
        if (opcaoCorreta > opcao) {
            opcaoCorreta = opcao;
            resposta = i+1;
        }
    }
    cout << resposta << endl;

    return 0;
}
