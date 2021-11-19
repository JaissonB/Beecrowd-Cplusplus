#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {
    char O;
    double M[12][12], soma=0, media;
    int i;
    int j;
    cin >> O;
    cout << fixed << setprecision(1);

    for (i = 0; i<12; i++) {
        for (j = 0; j<12; j++) {
            cin >> M[i][j];
        }
    }

    if(O=='S') {
        for (i=0; i<11; i++) {
            for (j = 1; j<12; j++) {
                soma = soma + M[i][j];
                j++;
            }
        }
        cout << soma << endl;
    }

    if(O=='M') {
        for (i=0; i<11; i++) {
            for (j = i + 1; j<12; j++) {
                soma = soma + M[i][j];
            }
        }
        media = soma / 66;
        cout << media << endl;
    }

    return 0;
}
