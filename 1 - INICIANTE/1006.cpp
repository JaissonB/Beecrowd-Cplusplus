#include <iostream>
#include <iomanip>

using namespace std;

double media(double a, double b, double c){
    double m1,m2,m3,M;
    m1 = (a * 2) / 10;
    m2 = (b * 3) / 10;
    m3 = (c * 5) / 10;
    M = m1 + m2 + m3;
return M;
}

int main() {

    double v1, v2, v3, result;
    cout << fixed <<setprecision(1);

    cin >> v1 >> v2 >> v3;

    result = media(v1, v2, v3);

    cout << "MEDIA = " << result << endl;

    return 0;
}
