#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

struct pedido {
    string nome;
    string cor;
    char tam;
};

bool ordena(pedido a, pedido b) {
    if(a.cor==b.cor) {
        if(a.tam==b.tam) {
            return a.nome<b.nome;
        } else
            return a.tam>b.tam;
    }
    return a.cor < b.cor;
}

int main() {
    int N;
    cin >> N;
    while(true) {

        pedido camisas[N];
        for(int i=0; i<N; i++) {
            cin.get();
            getline(cin, camisas[i].nome);
            cin >> camisas[i].cor;
            cin >> camisas[i].tam;
        }

        sort(camisas, camisas+N, ordena);

        for(int i=0; i<N; i++) {
            cout << camisas[i].cor << " ";
            cout << camisas[i].tam << " ";
            cout << camisas[i].nome << endl;
        }
        cin >> N;
        if(N==0) {
            break;
        } else
            cout << endl;
    }
    return 0;
}
