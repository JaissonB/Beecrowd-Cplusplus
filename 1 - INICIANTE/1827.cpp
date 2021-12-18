#include <iostream>

using namespace std;

int main() {

    int tamanho;

    while (cin >> tamanho) {
        int matriz[tamanho][tamanho];
        for (int i = 0; i < tamanho; i++) {
            for (int j = 0; j < tamanho; j++) {
                matriz[i][j] = 0;
            }
        }
        for (int x = 0; x < tamanho; x++) {
            matriz[x][x] = 2;
            matriz[x][tamanho-1-x] = 3;
        }
        for (int i = tamanho/3; i < tamanho - (tamanho/3); i++) {
            for (int j = tamanho/3; j < tamanho - (tamanho/3); j++) {
                matriz[i][j] = 1;
            }
        }
        matriz[tamanho/2][tamanho/2] = 4;
        for (int i = 0; i < tamanho; i++) {
            for (int j = 0; j < tamanho; j++) {
                cout << matriz[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
