#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(2);

    double nota1, nota2, media;
    int sn;
    bool novo = true;

    while(novo) {
        while(1) {
            cin >> nota1;
            if(nota1<0.0 or nota1>10.0) {
                cout << "nota invalida" << endl;
            } else
                break;
        }

        while(1) {
            cin >> nota2;
            if(nota2<0.0 or nota2>10.0) {
                cout << "nota invalida" << endl;
            } else
                break;
        }
        media = (nota1+nota2)/2;
        cout << "media = " << media << endl;
        cout << "novo calculo (1-sim 2-nao)" << endl;

        while(1) {
            cin >> sn;
            if(sn==1) {
                novo=true;
                break;
            } else if(sn==2) {
                novo=false;
                break;
            } else {
                cout << "novo calculo (1-sim 2-nao)" << endl;
            }
        }
    }

    return 0;
}
