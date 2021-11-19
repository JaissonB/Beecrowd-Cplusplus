#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {
    int Pares[5], Impares[5], N;
    int contP=0, contI=0;

    for (int i=0; i<15; i++) {
        cin >> N;
        if (N%2==0) {
            Pares[contP]=N;
            contP++;
        } else {
            Impares[contI]=N;
            contI++;
        }
        if (contP==5) {
            for (int i=0; i<5; i++) {
                cout << "par["<< i << "] = "<< Pares[i] << endl;
            }
            contP=0;
        }
        if (contI==5) {
            contI=0;
            for (int i=0; i<5; i++) {
                cout << "impar["<< i << "] = "<< Impares[i] << endl;
            }
        }
    }
    if (contI!=0) {
        for (int i=0; i<contI; i++) {
            cout << "impar["<< i << "] = "<< Impares[i] << endl;
        }
    }
    if (contP!=0) {
        for (int i=0; i<contP; i++) {
            cout << "par["<< i << "] = "<< Pares[i] << endl;
        }
    }
    return 0;
}
