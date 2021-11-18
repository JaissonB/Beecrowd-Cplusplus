#include <iomanip>
#include <iostream>

using namespace std;

double calculaValor(int a, double va, int b, double vb){
    double result = (a*va)+(b*vb);
return result;
}

int main() {
    int cod1, cod2, qnt1, qnt2;
    double vlr1, vlr2, vlrTT;

    cout << fixed << setprecision(2);

    cin >> cod1 >> qnt1 >> vlr1;
    cin >> cod2 >> qnt2 >> vlr2;

    vlrTT = calculaValor(qnt1, vlr1, qnt2, vlr2);

    cout << "VALOR A PAGAR: R$ " << vlrTT << endl;

    return 0;
}
