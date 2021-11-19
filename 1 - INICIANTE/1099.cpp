#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n, x, y, soma;
    cin >> n;
    while (n--) {
        cin >> x >> y;
        if (x>y) {
            int aux = x;
            x = y;
            y = aux;
        }
        soma =0;
        for (int i = x + 1; i < y; i = i + 1) {
            if (i%2!=0) {
                soma = soma + i;
            }
        }
        cout << soma << endl;
    }

    return 0;
}
