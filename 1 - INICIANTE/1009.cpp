#include <iomanip>
#include <iostream>

using namespace std;

double calculaTotal(double a, double b){
    double result = (b*0.15)+a;
return result;
}

int main() {
    double salario, venda, total;
    string nome;
    cout << fixed << setprecision(2);
    cin >> nome >> salario >> venda;

    total = calculaTotal(salario,venda);

    cout << "TOTAL = R$ " << total << endl;

    return 0;
}
