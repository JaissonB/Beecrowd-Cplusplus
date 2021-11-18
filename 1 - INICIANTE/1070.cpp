#include <iostream>

using namespace std;

int main () {
    int n, i;
    cin >> n;
    if (n%2==0)
        n++;
    for (i = 0; i < 6; i++ ) {
        cout << n << endl;
        n +=2;
    }

    return 0;
}
