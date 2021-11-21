#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    string nome[101], presenca[101];
    int NC, n, tam;
    double cont;

    cin >> NC;

    while (NC--) {
        cin >> n;
        bool imprimiu = false;
        for (int i=0; i<n; i++) {
            cin >> nome [i];
        }
        for (int i=0; i<n; i++) {

            cont=0;
            cin >> presenca [i];
            tam = presenca[i].size();
            for (int j=0; j<presenca[i].size(); j++) {
                if (presenca[i][j]=='P')
                    cont++;
                if (presenca[i][j]=='M')
                    tam--;
            }

            int percentual =  cont/tam*100;

            if (percentual < 75) {
                if (imprimiu)
                    cout << " ";
                cout << nome[i] ;
                imprimiu = true;
            }
        }
        cout << endl;
    }
    return 0;
}
