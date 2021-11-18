#include <iostream>

using namespace std;

int main() {

    int hi, hf, hj;

    cin >> hi >> hf;

    if ( hi > hf ) {
        hj = (24 - hi) + hf;
        cout << "O JOGO DUROU " << hj << " HORA(S)" << endl;
    } else if ( hf > hi ) {
        hj = hf - hi;
        cout << "O JOGO DUROU " << hj << " HORA(S)" << endl;
    } else if ( hf == hi ) {
        cout << "O JOGO DUROU " << 24 << " HORA(S)" << endl;
    }

    return 0;
}
