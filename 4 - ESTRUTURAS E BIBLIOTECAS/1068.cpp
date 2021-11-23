#include <iostream>
#include <stack>

using namespace std;

int main() {//PILhA
    string linha;
    bool correta;
    while (getline(cin,linha)) {
        correta = true;
        stack <char> pilha;
        for (int i=0; i < linha.size(); i++) {
            if (linha[i]=='(') {
                pilha.push(linha[i]);
            }
            if (linha[i]==')') {
                if (!pilha.empty())
                    pilha.pop();
                else {
                    correta = false;
                }
            }
        }
        if (pilha.empty() and correta)
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
    }
    return 0;
}
