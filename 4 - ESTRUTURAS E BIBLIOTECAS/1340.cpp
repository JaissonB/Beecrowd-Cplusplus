#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
    int val;

    while (cin >> val) {
        queue <int> fila;
        stack <int> pilha;
        priority_queue <int> filaPrior;
        bool isFila=true, isPilha=true, isFilaPrior=true;
        int cont=3, event, x;

        while(val) {
            cin >> event >> x;

            if(event==1) {
                fila.push(x);
                pilha.push(x);
                filaPrior.push(x);
            }
            if(event==2) {
                if(fila.front()==x && isFila) {
                    fila.pop();
                } else if(isFila) {
                    isFila=false;
                    cont--;
                }

                if(pilha.top()==x && isPilha) {
                    pilha.pop();
                } else if(isPilha) {
                    isPilha=false;
                    cont--;
                }

                if(filaPrior.top()==x && isFilaPrior) {
                    filaPrior.pop();
                } else if(isFilaPrior) {
                    isFilaPrior=false;
                    cont--;
                }
            }
            val--;
        }
        if(isFila && cont==1)
            cout << "queue" << endl;
        else if(isPilha && cont==1)
            cout << "stack" << endl;
        else if(isFilaPrior && cont==1)
            cout << "priority queue" << endl;
        else if(cont>1)
            cout << "not sure" << endl;
        else if(cont==0)
            cout << "impossible" << endl;
    }

    return 0;
}
