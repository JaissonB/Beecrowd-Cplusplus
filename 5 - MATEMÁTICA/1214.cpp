#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int c, n;
    double nota;
    cin >> c;
    cout << fixed << setprecision(3);

    while(c) {
        double soma=0, acima=0;
        cin >> n;
        int vet[n];
        for (int i=0; i<n; i++) {
            cin >> nota;
            vet[i] = nota;
            soma += nota;
        }
        int media = soma / n;
        for (int j=0; j<n; j++) {
            if (vet[j]>media) {
                acima++;
            }
        }

        cout << (acima*100)/n << "%" << endl;
        c--;
    }

    return 0;
}
