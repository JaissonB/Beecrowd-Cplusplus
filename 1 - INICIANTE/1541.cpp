#include <iostream>
#include <math.h>

using namespace std;

int main () {
    int ladoA = 1, ladoB, percentual, mediaLadoTerreno;
    while (true) {
        cin >> ladoA;
        if (ladoA) {
        cin >> ladoB >> percentual;
        mediaLadoTerreno = sqrt((ladoA * ladoB) * 100 / percentual);
        cout << mediaLadoTerreno << endl;
        } else break;
    }
    return 0;
}
