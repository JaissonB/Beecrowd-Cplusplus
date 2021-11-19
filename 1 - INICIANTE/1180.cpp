#include <iostream>

using namespace std;

int main() {
    int N, small, position=0;

    cin >> N;

    int X[N];

    for(int i=0; i<N; i++) {
        cin >> X[i];
    }

    small = X[0];

    for(int i=0; i<N; i++) {
        if(X[i]<small) {
            small=X[i];
            position=i;
        }
    }

    cout << "Menor valor:" << " " << small << endl;
    cout << "Posicao:" << " " << position << endl;

    return 0;
}
