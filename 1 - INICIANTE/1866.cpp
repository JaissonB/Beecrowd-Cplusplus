#include <iostream>

using namespace std;

int main() {
    int loop, N, result;
    cin >> loop;
    while (loop) {
        cin >> N;
        if (N%2) cout << 1 << endl;
        else cout << 0 << endl;
        loop--;
    }
    return 0;
}
