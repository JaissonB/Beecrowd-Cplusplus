#include <iostream>

using namespace std;

void fib (int n, int FIB[]) {
    FIB[0] = 0;
    FIB[1] = 1;

    for (int i=2; i<46; i++) {
        FIB[i] = FIB[i-2] + FIB[i-1];
    }
}

int main() {
    int FIB[46], N;
    cin >> N;
    fib(N, FIB);
    cout << "0";
    for (int i=1; i<N; i++) {
        cout << " " << FIB[i];
    }
    cout << endl;
    return 0;
}
