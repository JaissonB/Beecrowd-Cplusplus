#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <cstdio>

using namespace std;

int getMaxPeso( vector <int> dados, int caminhoes ) {
    int n = dados.size();
    int lo = *max_element( dados.begin(), dados.end() );
    int hi = accumulate( dados.begin(), dados.end(), 0 );

    while ( lo < hi ) {
        int x = lo + (hi-lo)/2;

        int requerido = 1, carregado = 0;
        for ( int i=0; i<n; ++i ) {
            if ( carregado + dados[i] <= x ) {
                carregado += dados[i];
            } else {
                ++requerido;
                carregado = dados[i];
            }
        }
        if ( requerido <= caminhoes )
            hi = x;
        else
            lo = x+1;
    }
    return lo;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <int> dados;
    int npanels, caminhoes, frete, N, peso;
    cin >> N;
    while (N--) {
        dados.clear();
        cin >> npanels >> caminhoes >> frete;
        while (npanels--) {
            cin >> peso;
            dados.push_back(peso);
        }
        int maxV = getMaxPeso(dados,caminhoes);
        cout << maxV << " $" << maxV*caminhoes*frete << endl;
    }
    return 0;
}
