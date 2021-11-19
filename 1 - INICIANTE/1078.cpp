#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n, i, e;
    cin>>n;
    for (i=1; i<11; i++) {
        e = i * n;
        cout << i << " x " << n << " = " << e << endl;
    }

    return 0;
}
