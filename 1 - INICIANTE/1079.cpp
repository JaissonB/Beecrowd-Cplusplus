#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    int n, i;
    double e, x,a,b,c;
    cin>>n;
    cout << fixed << setprecision(1);
    for (i=1; i<=n; i++) {
        cin >> a >> b >> c;
        x=(a*2+b*3+c*5)/10;

        cout << x << endl;
    }

    return 0;
}
