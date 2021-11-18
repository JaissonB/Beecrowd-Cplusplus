#include <iostream>
#include <iomanip>

using namespace std;

double calculaGasto(int a, int b){
    double distancia = a*b;
    double result = distancia/12;
return result;
}

int main() {
    int tempo, velocidade;
    double combustivel;

    cout << fixed << setprecision(3);

    cin >> tempo >> velocidade;

    combustivel = calculaGasto(tempo,velocidade);

    cout << combustivel << endl;

    return 0;
}
