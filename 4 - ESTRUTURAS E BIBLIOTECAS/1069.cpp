#include <iostream>
#include <iostream>
#include <stack>

using namespace std;

int main() {
    string linha;
    bool correta;
    int n;
    int cont=0;
    cin>>n;
    cin.get();
    while (n) {
        getline(cin,linha);
        stack <char> pilha;
        for (int i=0; i < linha.size(); i++) {
            if (linha[i]=='<') {
                pilha.push(linha[i]);
            }
            if (linha[i]=='>') {
                if (!pilha.empty()) {
                    pilha.pop();
                    cont++;
                }
            }
        }
        n--;
        cout << cont << endl;
        cont=0;
    }

    return 0;
}
