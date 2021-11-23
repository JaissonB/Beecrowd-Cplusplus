#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main() {

    char pri[128];
    pri['^'] = 3;
    pri['*'] = 2;
    pri['/'] = 2;
    pri['+'] = 1;
    pri['-'] = 1;
    pri['('] = 0;

    int NC;
    cin >> NC;
    string x;
    cin.get();
    while (NC--) {
        stack <char> pilha;
        getline(cin,x);
        string saida="";
        for (int i=0; i< x.size(); i++) {
            char elem = x[i];
            if (elem >='a' and elem <='z' or elem >='A' and elem <='Z') {
                saida = saida + elem;
            }
            if (elem >='0' and elem <='9') {
                saida = saida + elem;
            }
            if (elem =='(') {
                pilha.push('(');
            }
            if (elem ==')') {
                while (pilha.top()!='(') {
                    saida+=pilha.top();
                    pilha.pop();
                }
                pilha.pop();
            }
            if (elem =='+' or elem=='*' or elem=='/' or elem=='-' or elem=='^') {
                if (pilha.empty() or pilha.size()!=0 and pilha.top()=='(') {
                    pilha.push(elem);
                } else {
                    if (pri[elem] > pri[pilha.top()]) {
                        pilha.push(elem);
                    } else {
                        while (!pilha.empty() and pri[pilha.top()] >= pri[elem]) {
                            saida+=pilha.top();
                            pilha.pop();
                        }
                        pilha.push(elem);
                    }
                }
            }
        }
        while (!pilha.empty()) {
            saida+=pilha.top();
            pilha.pop();
        }
        cout << saida << endl;
    }
    return 0;
}
