#include <iostream>

using namespace std;

int main() {
    int i = 0,n = 0, in =0, out = 0;
    cin >> n;
    int y [n];

    for (i = 0; i < n; i++) {
        cin >> y[i];
    }
    for  (i = 0; i < n; i++) {
        if (y[i] >= 10 and y[i] <= 20)
            in++;
        else
            out++;
    }

    cout << in << " in" << endl;
    cout << out << " out" << endl;

    return 0;
}
