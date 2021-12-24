#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double valorAntigo, valorAtual, porcentagem;

    cout << fixed << setprecision(2);

    cin >> valorAntigo >> valorAtual;

    porcentagem = valorAtual * 100 / valorAntigo - 100;

    cout << porcentagem << "%" << endl;

    return 0;
}
