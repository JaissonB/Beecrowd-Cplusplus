#include <iostream>

using namespace std;

int main() {

    int chaCorreto, palpite, cont = 0;
    int consumidores = 5;

    cin >> chaCorreto;

    while (consumidores) {
        cin >> palpite;
        if (palpite == chaCorreto) cont++;
        consumidores--;
    }
    cout << cont << endl;

    return 0;
}
