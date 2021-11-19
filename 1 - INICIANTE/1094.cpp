#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    int i,n;
    string esp;
    int qnt, qntTOTAL=0, x, qntC=0, qntR=0, qntS=0;
    double percC, percR, percS;

    cin >> n;
    cout << fixed << setprecision(2);
    for (i=0; i<n; i++) {
        cin >> qnt >> esp;

        qntTOTAL += qnt;

        if (esp == "C") {
            qntC += qnt;
        }
        if (esp == "R") {
            qntR += qnt;
        }
        if (esp == "S") {
            qntS += qnt;
        }
    }
    cout << "Total: " << qntTOTAL << " cobaias" << endl;
    cout << "Total de coelhos: " << qntC  << endl;
    cout << "Total de ratos: " << qntR  << endl;
    cout << "Total de sapos: " << qntS  << endl;

    percC = (qntC * 100.0)/ qntTOTAL;
    percR = (qntR * 100.0)/ qntTOTAL;
    percS = (qntS * 100.0)/ qntTOTAL;

    cout << "Percentual de coelhos: " << percC  << " %" << endl;
    cout << "Percentual de ratos: " << percR  << " %" << endl;
    cout << "Percentual de sapos: " << percS  << " %" << endl;

    return 0;
}
