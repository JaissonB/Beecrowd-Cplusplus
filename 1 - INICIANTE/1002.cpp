#include <iostream>
#include <iomanip>

using namespace std;

double r(double a){
    const double pi = 3.14159;
    double result = pi * (a*a);
    return result;
}

int main() {

    cout << fixed << setprecision (4);

    double area, raio;

    cin >> raio;

    area = r (raio);

    cout << "A=" << area << endl;

    return 0;
}
