#include <iostream>

using namespace std;

int main() {

    int loop, numero, mulDe2 = 0, mulDe3 = 0, mulDe4 = 0, mulDe5 = 0;

    cin >> loop;

    while (loop--) {
        cin >> numero;
        if (numero % 2 == 0) mulDe2++;
        if (numero % 3 == 0) mulDe3++;
        if (numero % 4 == 0) mulDe4++;
        if (numero % 5 == 0) mulDe5++;
    }

    cout << mulDe2 << " Multiplo(s) de 2" << endl;
    cout << mulDe3 << " Multiplo(s) de 3" << endl;
    cout << mulDe4 << " Multiplo(s) de 4" << endl;
    cout << mulDe5 << " Multiplo(s) de 5" << endl;

    return 0;
}
