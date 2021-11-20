#include <iostream>
#include <cstdlib>

using namespace std;

int f(int n, int k) {
    if (n==1) Nreturn 0;
    return (f(n-1,k)+k)%n;
}

int main() {
    int NC, n, k;
    cin >> NC;

    for(int i=1; i<=NC; i++) {
        cin >> n >> k;
        cout << "Case " << i << ": " << f(n,k)+1 << endl;
    }

    return 0;
}
