#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {

    char T;
    double M[12][12], soma=0, media;
    int i, j, O;

    cin >> O;
    cout << fixed << setprecision(1);
    cin >> T;
    for (i = 0; i<12; i++) {
        for (j = 0; j<12; j++) {
            cin >> M[i][j];
        }
    }
    if(T=='S') {
        for (i=0; i<12; i++) {
            for (j = O; j<=O; j++) {
                soma = soma + M[i][j];
            }
        }
        cout << soma << endl;
    }
    if(T=='M') {
        for (i=0; i<12; i++) {
            for (j=O; j<=O; j++) {
                soma = soma + M[i][j];
            }
        }
        media = soma / 12;
        cout << media << endl;
    }

    return 0;
}
