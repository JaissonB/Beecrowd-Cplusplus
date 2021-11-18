#include <iostream>
#include <iomanip>

using namespace std;

double calculaSalario (int a, double b){
    double result = a*b;
return result;
}

int main() {

    int numero, horas;
    double vlr, salario;
    cout << fixed << setprecision(2);

    cin >> numero >> horas >> vlr;

    salario = calculaSalario(horas,vlr);

    cout << "NUMBER = " << numero << endl;
    cout << "SALARY = U$ " << salario << endl;

    return 0;
}
