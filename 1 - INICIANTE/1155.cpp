#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    double s=0, casos=100, i=1;

    while (casos) {
        s += (1/i);
        casos --;
        i++;
    }

    cout << fixed << setprecision(2);
    cout << s << endl;

    return 0;
}
