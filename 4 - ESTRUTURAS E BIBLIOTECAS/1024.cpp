#include <bits/stdc++.h>

using namespace std;

int buscaN(int ac[], int p, int mp) {
    for(int i = 0; i < p; i++) {
        if(ac[i] == mp) {
            return i+1;
        }
    }
    return 0;
}

int main() {
    int N, Q, X, cont=1;
    while(1) {
        cin >> N >> Q;
        int vet[N+1];
        if(N==0 and Q==0)
            break;
        for(int i=0; i<N; i++) {
            cin >> vet[i];
        }
        sort(vet,vet+N);
        cout << "CASE# " << cont << ":" << endl;
        for(int i=0; i<Q; i++) {
            cin >> X;
            int busca=buscaN(vet,N,X);
            if(busca!=0) {
                cout << X << " found at " << busca << endl;
            } else {
                cout << X << " not found" << endl;
            }
        }
        cont++;
    }
    return 0;
}
