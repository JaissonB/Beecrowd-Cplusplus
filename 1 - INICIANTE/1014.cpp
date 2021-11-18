#include <iostream>
#include <iomanip>

using namespace std;

double calculaMedia(int a, double b){
    double result = a / b;
return result;
}

int main() {
    int distancia;
    double combustivelGasto, media;

    cout << fixed << setprecision(3);

    cin >> distancia >> combustivelGasto;

    media = calculaMedia(distancia,combustivelGasto);

    cout << media << " km/l" << endl;

    return 0;
}
