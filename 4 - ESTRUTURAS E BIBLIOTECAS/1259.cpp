#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

bool compara (int a, int b) {
    if (a%2==b%2) {
        if (a%2 == 0) {
            return a < b;
        } else {
            return a > b;
        }
    }
    return a%2 < b%2;
}

int main() {
    int N, dados[100001];

    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> dados[i];
    }

    sort (dados, dados+N, compara);
    for (int i=0; i<N; i++) {
        cout <<  dados[i] << endl;
    }
    return 0;
}
