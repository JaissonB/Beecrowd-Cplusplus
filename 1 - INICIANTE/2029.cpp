#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float volume, diametro, altura, area, raio, PI = 3.14;
    cout << fixed << setprecision(2);

    while (cin >> volume >> diametro) {
        raio = diametro / 2;
        altura = volume / (PI * (raio * raio));
        area = PI * raio * raio;
        cout << "ALTURA = " << altura << endl;
        cout << "AREA = " << area << endl;
    }

    return 0;
}
