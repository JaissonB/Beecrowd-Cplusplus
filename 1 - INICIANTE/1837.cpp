#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a, b, q = 0, r, aux;

    cin >> a >> b;

    if (a < 0 && b > 0) {
        aux = a;
        while (true) {
            if (aux < 0) {
                r = aux + b;
                aux = r;
                q++;
            } else {
                q = q * -1;
                break;
            }
        }
    } else if (a < 0 && b < 0) {
        aux = a;
        while (true) {
            if (aux < 0) {
                r = aux - b;
                aux = r;
                q++;
            } else break;
        }
    } else if ((a > 0 && b > 0) && a < b) {
        q = 0;
        r = a;
    } else {
        q = a / b;
        r = a % b;
    }
        cout << q << " " << r << endl;

    return 0;
}
