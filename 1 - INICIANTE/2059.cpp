#include <iostream>

using namespace std;

int responseCorrect (int a, int b, int c, int d) {
    if ( ((a == b) && (!c || !d)) || ((a != b) && (c ^ d)) ) {
        return true;
    } else return false;
}

int main() {

    int parOuImpar, valorJ1, valorJ2, roubou, acusou;
    string response;

    cin >> parOuImpar >> valorJ1 >> valorJ2 >> roubou >> acusou;

    if (responseCorrect(parOuImpar, ((valorJ1 + valorJ2) % 2) == 0, roubou, acusou)) {
        cout << "Jogador 1 ganha!" << endl;
    } else cout << "Jogador 2 ganha!" << endl;

    return 0;
}
