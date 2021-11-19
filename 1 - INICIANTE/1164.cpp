#include <iostream>

using namespace std;

int main () {
    int n, x;
    cin >> n;

    while(n) {
        int soma=0;
        cin >> x;
        for (int i=1; i<x; i++) {
            if (x%i==0) {
                soma+=i;
            }
        }
        if (soma==x) {
            cout << x << " eh perfeito" << endl;
        } else {
            cout << x << " nao eh perfeito" << endl;
        }
        n--;
    }

    return 0;
}
