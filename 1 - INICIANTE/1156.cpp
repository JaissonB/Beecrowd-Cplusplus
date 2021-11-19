#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    double s=1, divisor=2, dividendo=3;

    while (dividendo<39) {
        s += (dividendo/divisor);
        dividendo+=2;
        divisor=divisor*2;
    }

    cout << fixed << setprecision(2);
    cout << s << endl;

    return 0;
}
