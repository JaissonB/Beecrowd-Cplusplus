#include <iostream>

using namespace std;

int main() {
    int i, b, c, e, d=0;
    for (i=1; i <= 100; i++) {
        cin >> b;
        if (b > d) {
            d = b;
            e = i;
        }
    }
    cout << d << endl;
    cout << e << endl;

    return 0;
}
