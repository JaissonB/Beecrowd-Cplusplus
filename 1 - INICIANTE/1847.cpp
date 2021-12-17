#include <iostream>

using namespace std;

int main() {

    int diaUm, diaDois, diaTres;

    cin >> diaUm >> diaDois >> diaTres;

    if (diaUm > diaDois) {
        if (diaDois <= diaTres) cout << ":)" << endl;
        else if ((diaDois - diaTres) < (diaUm - diaDois)) cout << ":)" << endl;
        else cout << ":(" << endl;
    } else if (diaUm < diaDois) {
        if (diaDois >= diaTres) cout << ":(" << endl;
        else if ((diaTres - diaDois) < (diaDois - diaUm)) cout << ":(" << endl;
        else cout << ":)" << endl;
    } else {
        if (diaDois < diaTres) cout << ":)" << endl;
        else cout << ":(" << endl;
    }

    return 0;
}
