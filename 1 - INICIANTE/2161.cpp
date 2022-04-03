#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n, result = 0, aux = 0;
    cin >> n;

    cout << fixed << setprecision(10);

    for (int i = 0; i < n; i++) {
        result = 1 / (aux + 6);
        aux = result;
    }

    cout << result + 3.0 << endl;

    return 0;
}
