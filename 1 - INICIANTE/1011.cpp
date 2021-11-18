#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

double calculaVol(double lido, double fixoPi){
    double result = (4/3.0)*fixoPi*(pow(lido,3));
return result;
}

int main() {
    double raio, volume, pi=3.14159;

    cout << fixed << setprecision(3);

    cin >> raio;

    volume = calculaVol(raio,pi);

    cout << "VOLUME = " << volume << endl;

    return 0;
}
