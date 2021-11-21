#include <iostream>
#include <sstream>

using namespace std;

bool vale (string pal) {
    bool valida=true;
    if (pal.size() ==1 and (tolower(pal[0])<'a' or tolower(pal[0]>'z'))) {
        return(false);
    }

    for (int i=0; i<pal.size()-1; i++) {
        if (!(tolower(pal[i])>='a' and tolower(pal[i])<='z')) {
            return(false);
        }
    }
    char ult_letra=pal[pal.size()-1];
    if (!((tolower(ult_letra)>='a' and tolower(ult_letra)<='z') or ult_letra=='.')) {
        valida = false;
    }
    return(valida);
}

int main() {
    string linha,palavra;
    int cont,caracteres;
    while (getline(cin,linha)) {
        stringstream S(linha);
        cont=0;
        caracteres =0;
        while (S >> palavra) {
            if (vale(palavra)) {
                cont++;
                caracteres+=palavra.size();
                if (palavra[palavra.size()-1]=='.') {
                    caracteres--;
                }
            }
        }

        if (cont!=0) {
            int tam=caracteres/cont;
            if (tam<=3) {
                cout << 250 << endl;
            }
            if (tam>=4 and tam<=5) {
                cout << 500 << endl;
            }
            if (tam>5) {
                cout << 1000 << endl;
            }

        } else {
            cout << 250 << endl;
        }
    }
    return 0;
}
