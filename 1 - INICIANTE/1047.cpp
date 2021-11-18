#include <iostream>

using namespace std;

int main() {

    int hi, mi, hf, mf;
    int tpIni,tpFim, tempo;
    cin >> hi >> mi;
    cin >> hf >> mf;

    tpIni = hi*60 + mi;
    tpFim = hf*60 + mf;

    if (tpIni < tpFim) {
        tempo = tpFim - tpIni;
    } else {
        tempo = 24 * 60 - tpIni + tpFim;
    }

    int DH, DM;
    DH = tempo / 60;
    DM = tempo % 60;

    cout << "O JOGO DUROU " << DH << " HORA(S) E " << DM <<  " MINUTO(S)" << endl;

    return 0;
}
