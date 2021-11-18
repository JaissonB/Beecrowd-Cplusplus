#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, i, e;
    cin >> n;
    for (i=1; i<=n; i++) {
        if ( i%2==0 ) {
            e = pow(i,2);
            cout << i << "^2 = " << e << endl;
        }
    }

    return 0;
}
