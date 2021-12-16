#include <iostream>

using namespace std;

int main() {

    string frase = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int quantidadeCaracteres;

    cin >> quantidadeCaracteres;

    for (int i = 0; i < quantidadeCaracteres; i++) {
        cout << frase[i];
    }
    cout << endl;

    return 0;
}
