#include <iostream>

using namespace std;

int main() {
    int a, n, soma=0;
    cin >> a;

    while(1) {
        cin >> n;
        if(n<=0) {}
        else {
            for(int i=0; i<=n-1; i++) {
                soma = soma+(a+i);
            }
            cout << soma << endl;
            break;
        }
    }
    return 0;
}
