#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    double PI = 3.141592654;
    double angulo, distancia, alturaElfo, alturaP, qntCordao;
    double hip;
    cout << fixed << setprecision (2);

    while (cin>> angulo >> distancia >> alturaElfo) {
        alturaP = tan(angulo*PI / 180)*distancia;
        alturaP = alturaP + alturaElfo;
        qntCordao = alturaP*5;

        cout << qntCordao << endl;
    }

    return 0;
}
