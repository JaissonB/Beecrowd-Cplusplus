#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << fixed << setprecision(1);
    double a, b, c, perimetro, area;

    cin >> a >> b >> c;

    if ((a >= (c + b)) or (b >= (a + c)) or (c >= (a + b))) {
        area = ((a + b) * c) / 2;
        cout << "Area = " << area << endl;
    } else if ( (a < (c + b)) or (b < (a + c)) or (c < (a + b) )) {
        perimetro = a + b + c;
        cout << "Perimetro = " << perimetro << endl;
    }

    return 0;
}
