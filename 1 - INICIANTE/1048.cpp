#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double salario, salreajuste, reajuste;
    cin >> salario;
    cout << fixed << setprecision (2);

    if ( salario <= 400.00 ) {
        salreajuste = salario * 1.15;
        reajuste = salreajuste - salario;
        cout << "Novo salario: " << salreajuste << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 15 %" << endl;
    } else if ( salario > 400.00 and salario <= 800.00 ) {
        salreajuste = salario * 1.12;
        reajuste = salreajuste - salario;
        cout << "Novo salario: " << salreajuste << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 12 %" << endl;
    } else if ( salario > 800.00 and salario <= 1200.00 ) {
        salreajuste = salario * 1.10;
        reajuste = salreajuste - salario;
        cout << "Novo salario: " << salreajuste << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 10 %" << endl;
    } else if ( salario > 1200.00 and salario <= 2000.00 ) {
        salreajuste = salario * 1.07;
        reajuste = salreajuste - salario;
        cout << "Novo salario: " << salreajuste << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 7 %" << endl;
    } else if ( salario > 2000.00 ) {
        salreajuste = salario * 1.04;
        reajuste = salreajuste - salario;
        cout << "Novo salario: " << salreajuste << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 4 %" << endl;
    }

    return 0;
}
