#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double delta (double a, double b, double c) {
    double result = pow(b,2)-4*a*c;
return result;
}

int main() {
    double A,B,C, R1, R2;

    cin >> A >> B >> C;

    cout << fixed << setprecision(5);

    if (A!=0 and delta(A,B,C) >= 0) {
    R1 = (-B + sqrt(delta(A,B,C)))/(2 * A);
    R2 = (-B - sqrt(delta(A,B,C)))/ (2 * A);

    cout << "R1 = " << R1 << endl;
    cout << "R2 = " << R2 << endl;

    } else cout << "Impossivel calcular" << endl;

    return 0;
}
