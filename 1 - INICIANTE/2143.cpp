#include <iostream>

using namespace std;

int main() {

    int T, N;

    while (cin >> T) {
        if (T == 0) break;
        for (int i = 0; i < T; i++) {
            cin >> N;
            if (N % 2 == 0) cout << (N + N) - 2 << endl;
            else cout << (N + N) - 1 << endl;
        }
    }

    return 0;
}
