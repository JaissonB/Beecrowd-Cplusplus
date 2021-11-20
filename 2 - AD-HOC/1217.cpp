#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main() {
    double n, valor, totalgrana=0, totalkg=0, mediakg, valormedio;
    string linha, fruta;
    int cont=0,contdia=1;

    cout << fixed << setprecision(2);

    cin >> n;
    cin >> valor;
    cin.ignore();

    while (getline(cin,linha)) {
        stringstream dados(linha);

        while (dados >> fruta) {
            cont++;
        }
        totalkg += cont;
        totalgrana += valor;
        cout << "day " << contdia << ": " << cont << " kg" << endl;

        if (contdia==n) {
            valormedio  = totalgrana / contdia;
            mediakg = totalkg / contdia;
            cout << mediakg << " kg by day" << endl;
            cout << "R$ " << valormedio<< " by day" <<endl;
            break;
        }
        cin >> valor;
        cin.get();
        cont=0;
        contdia++;
    }

    return 0;
}
