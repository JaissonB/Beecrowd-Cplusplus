#include <iostream>

using namespace std;

int main() {
    int NCasos, penultimo=0, ultimo=1, proximo, N;
    unsigned long long int fib [61];
    fib[0] = 0;
    fib[1] = 1;
    for (int i=2; i<=60; i++) {
        fib [i] = fib [ i-1] + fib [ i - 2];
    }

    cin >> NCasos;

    while (NCasos--) {
        cin >> N;
        cout << "Fib("<< N << ") = " << fib [N] << endl;
    }

    return 0;
}
