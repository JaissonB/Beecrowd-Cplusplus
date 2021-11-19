#include <iostream>

using namespace std;

int main() {
    int SN, qntGrenais=0, vitInter=0, vitGremio=0, empate=0, golInter, golGremio;
    bool continua=true;

    while(continua) {
        cin >> golInter >> golGremio;

        qntGrenais++;

        if(golInter > golGremio) {
            vitInter++;
        } else if(golInter < golGremio) {
            vitGremio++;
        } else if(golInter == golGremio) {
            empate++;
        }

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> SN;

        if (SN==1)
            continua=true;
        else if (SN==2) {
            cout << qntGrenais << " grenais" << endl;
            cout << "Inter:" << vitInter << endl;
            cout << "Gremio:" << vitGremio << endl;
            cout << "Empates:" << empate << endl;
            if(vitInter > vitGremio) {
                cout << "Inter venceu mais" << endl;
            } else if(vitInter < vitGremio) {
                cout << "Gremio venceu mais" << endl;
            } else if(vitInter == vitGremio) {
                cout << "Nao houve vencedor" << endl;
            }
            continua = false;
        }
    }
    return 0;
}
