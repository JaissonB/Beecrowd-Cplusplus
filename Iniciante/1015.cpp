#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double distanciaEntre1e2(double a, double b, double c, double d){
    double result = sqrt(pow((c-a),2) + pow((d-b),2));
return result;
}

int main() {
    double x1, y1, x2, y2, distancia;

    cout << fixed << setprecision(4);

    cin >> x1 >> y1 >> x2 >> y2;

    distancia = distanciaEntre1e2(x1,y1,x2,y2);

    cout<< distancia << endl;

    return 0;
}
