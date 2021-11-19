#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double N, soma=0, media, cont=0;

    cout << fixed << setprecision(2);
    while (1) {
        cin >> N;
        if (N<0 or N>10) {
            cout << "nota invalida" << endl;
        } else {
            soma += N;
            cont ++;
        }
        if (cont==2) {
            media = soma / cont;
            cout<< "media = " << media << endl;
            N=0;
            break;
        }
    }
    return 0;
}
