#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int GCD(int num, int den) {
    if (den > 0) {
        return GCD(den, num % den);
    }
    return num;
}

int main() {
    int nc;
    char S1[31], S2[31];
    int n1,n2;

    cin >> nc;
    for (int i=1; i<=nc; i++) {
        cin >> S1 >> S2;
        n1 = strtol(S1,NULL,2);
        n2 = strtol(S2,NULL,2);
        if (GCD (n1,n2) > 1) {
            cout << "Pair #" << i << ": All you need is love!" << endl;
        } else
            cout << "Pair #" << i << ": Love is not all you need!" << endl;
    }
    return 0;
}
