#include <iostream>

using namespace std;

int main() {

    int H, M, N;
    bool O;

    cin >> N;

    while (N) {
        cin >> H >> M >> O;

        if (H < 10) cout << "0" << H;
        else cout << H;
        if (M < 10) cout << ":0" << M;
        else cout << ":" << M;
        if (O) cout << " - A porta abriu!" << endl;
        else cout << " - A porta fechou!" << endl;
        N--;
    }

    return 0;
}
