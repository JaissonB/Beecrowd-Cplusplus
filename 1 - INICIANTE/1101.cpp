#include <iostream>

using namespace std;

int main() {
    int N,M;

    cin >> N >> M;
    while (1) {
        int Sum=0;
        if (N > 0 and M > 0) {
            if (N>M) {
                for (int i=M; i<=N; i++) {
                    cout << i << " " ;
                    Sum = Sum + i;
                }
            }
            if (M>N) {
                for (int j=N; j<=M; j++) {
                    cout << j << " " ;
                    Sum = Sum + j;
                }
            }
            cout << "Sum=" << Sum << endl;
            cin >> N >> M;
        } else break;
    }

    return 0;
}
