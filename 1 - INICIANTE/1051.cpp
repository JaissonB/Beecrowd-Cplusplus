#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double salario, imposto;
    cin >> salario;
    cout << fixed << setprecision (2);
    if (salario <= 2000.00 ) {
        cout << "Isento" << endl;
    } else if (salario <= 3000.00 and salario > 2000.00) {
        imposto = (salario - 2000.00) * 0.08;
        cout << "R$ " << imposto << endl;
    } else if (salario <= 4500.00 and salario > 3000.00) {
        imposto = (salario - 3000.00) * 0.18 + 80;
        cout << "R$ " << imposto << endl;
    } else {
        imposto = (salario - 4500.00) * 0.28 + 350;
        cout << "R$ " << imposto << endl;
    }

    return 0;
}
