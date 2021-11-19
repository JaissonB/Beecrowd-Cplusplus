#include <iostream>
#include <cstdio>

using namespace std;

int quadrado(int i, int j) {
    int p =1;
    for(int k=1; k<=i+j; k++) {
        p*=2;
    }
    return p;
}

int matriz[15][15];

void criarMatriz() {
    for(int i=0; i<15; i++) {
        for(int j=0; j<15; j++) {
            matriz[i][j]=quadrado(i, j);
        }
    }
}

int contadorDigitos(int n) {
    int cont;
    cont=0;
    while(n) {
        cont ++;
        n=n/10;
    }
    return cont;
}

int main() {

    int N;
    int maiorDigito, digito;
    criarMatriz();

    while(true) {
        cin >> N;
        if(N==0) break;

        maiorDigito = contadorDigitos(matriz[N-1][N-1]);

        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                digito = contadorDigitos(matriz[i][j]);
                for(int k=1; k<=maiorDigito-digito; k++) {
                    cout << " ";
                }
                cout << matriz[i][j];
                if(j<N-1) {
                    cout << " ";
                } else cout << endl;
            }
        }
        cout << endl;
    }

    return 0;
}
