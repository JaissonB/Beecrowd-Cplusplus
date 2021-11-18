#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

    int cod, qnt;
    double total;

    cin >> cod >> qnt;

    cout << fixed<< setprecision(2);

    if ( cod == 1) {
        total = 4*qnt;
        cout << "Total: R$ " << total << endl;
    } else if (cod==2) {
        total = 4.5 * qnt;
        cout << "Total: R$ " << total << endl;
    } else if (cod==3) {
        total = 5*qnt;
        cout << "Total: R$ " << total << endl;
    } else if (cod==4) {
        total = 2*qnt;
        cout << "Total: R$ " << total << endl;
    } else if (cod==5) {
        total = 1.5*qnt;
        cout << "Total: R$ " << total << endl;
    }

    return 0;
}
