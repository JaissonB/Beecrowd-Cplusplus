#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n, mini, maxi;
    cin >> n;

    cout << fixed << setprecision(1);

    mini = n/log(n);
    maxi = (1.25506)*(n/log(n));

    cout << mini << " " << maxi << endl;

    return 0;
}
