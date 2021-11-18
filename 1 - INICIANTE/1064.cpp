#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    cout << fixed << setprecision (1);
    double n, sum, avg;
    int count, i;
    sum = 0;
    count = 0;
    for (i=1; i<=6; i++) {
        cin >> n;
        if (n > 0) {
            sum += n;
            count++;
        }
    }
    avg = sum/count;
    cout << count << " valores positivos" << endl;
    cout << avg << endl;

    return 0;
}
