#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int x[10];
    for (int i=0; i < 10; i ++) {
        cin >> x[i];
        if (x[i] <= 0) {
            cout << "X[" << i << "] = " << 1 << endl;
        } else cout << "X[" << i << "] = " << x[i] << endl;
    }

    return 0;
}
