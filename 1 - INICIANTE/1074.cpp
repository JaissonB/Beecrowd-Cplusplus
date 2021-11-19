#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, i, e;
    cin >> n;

    for ( i=0; i<n; i=i+1) {
        cin>>e;

        if (e%2==0 and e > 0) {
            cout << "EVEN POSITIVE" << endl;
        }
        if (e%2==0 and e < 0) {
            cout << "EVEN NEGATIVE" << endl;
        }
        if (e%2!=0 and e > 0) {
            cout << "ODD POSITIVE" << endl;
        }
        if (e%2!=0 and e < 0) {
            cout << "ODD NEGATIVE" << endl;
        }
        if (e==0) {
            cout << "NULL" << endl;
        }
    }

    return 0;
}
