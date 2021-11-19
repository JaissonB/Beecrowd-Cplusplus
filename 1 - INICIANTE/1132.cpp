#include <iostream>

using namespace std;

int main() {
    int inicio, fim, soma=0;

    cin >> inicio >> fim;

    if (inicio<fim) {
        for(int i=inicio; i<=fim; i++) {
            if(i%13==0) {}
            else
                soma = soma + i;
        }
    }
    if (inicio>fim) {
        for(int i=fim; i<=inicio; i++) {
            if(i%13==0) {}
            else soma = soma + i;
        }
    }
    cout << soma << endl;

    return 0;
}
