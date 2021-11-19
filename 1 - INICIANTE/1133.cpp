#include <iostream>

using namespace std;

int main() {
    int inicio, fim;
    int maior, menor;

    cin >> inicio >> fim;
    if (inicio > fim) {
        maior = inicio;
        menor = fim;
    } else if (inicio < fim) {
        maior = fim;
        menor = inicio;
    }
    for(int i=menor+1; i<maior; i++) {
        if(i%5==2 or i%5==3)
            cout << i << endl;
    }

    return 0;
}
