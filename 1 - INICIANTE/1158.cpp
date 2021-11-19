#include <iostream>

using namespace std;

int main() {
    int n, x, y;
    cin >> n;
    while(n) {
        cin >> x >> y;
        int init = x, soma = 0;
        while(y) {
            if (init%2!=0) {
                soma += init;
                y--;
            }
            init ++;
        }
        cout << soma << endl;
        n--;
    }
    return 0;
}
