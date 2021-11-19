#include <iostream>

using namespace std;

int main () {
    int n, x;
    cin >> n;

    while(n) {
        int primo=0;
        cin >> x;
        for (int i=2; i<x; i++) {
            if (x%i==0) {
                primo++;
            }
        }
        if (primo>0) {
            cout << x << " nao eh primo" << endl;
        } else {
            cout << x << " eh primo" << endl;
        }
        n--;
    }

    return 0;
}
