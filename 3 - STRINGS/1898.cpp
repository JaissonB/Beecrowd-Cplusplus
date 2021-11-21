#include <iostream>
#include <cstdio>
#include <iomanip>
#include <sstream>
#include <cstdlib>

using namespace std;

int main () {
    cout << fixed << setprecision(2);
    string linha,cpf="",valor="",valor2="";
    cin >> linha;
    bool decimal = false;
    int contdec = 0;
    int cont = 0;
    for (int i=0; i < linha.size(); i++) {
        if (cont<11 and linha[i]>='0' and linha[i] <='9') {
            cpf += linha[i];
            cont ++;
        } else {
            if (linha[i] =='.' or linha[i]>='0' and linha[i] <='9' and contdec<=2) {
                valor += linha[i];
            }
            if (decimal) {
                contdec ++;
            }
            if (linha[i]=='.') {
                decimal=true;
            }
        }
    }
    cin >> linha;
    valor2="";
    decimal = false;
    contdec=0;
    for (int i=0; i < linha.size(); i++) {
        if ( linha[i] =='.' or linha[i]>='0' and linha[i] <='9' and contdec<2) {
            valor2 += linha[i];
            if (decimal) {
                contdec ++;
            }
        }
        if (linha[i]=='.') {
            decimal=true;
            contdec=0;
        }
    }
    cout << "cpf " << cpf << endl;

    double soma = atof(valor.c_str())+atof(valor2.c_str());
    cout << soma << endl;
    return 0;
}
