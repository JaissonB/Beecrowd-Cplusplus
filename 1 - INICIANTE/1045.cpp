#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {

    double a, b, c, aux;

    cin >> a >> b >> c;

    if (a < b) {
        swap(a,b);
    }
    if (b < c) {
        swap(b,c);
    }
    if (a < b) {
        swap(a,b);
    }
    if(a >= b + c) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if (pow(a,2)== pow(b,2)+ pow(c,2)) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (pow(a,2)>pow(b,2)+pow(c,2) and a!=b+c) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (pow(a,2)<pow(b,2)+pow(c,2)) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (a==b and a==c) {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        if (a==b and b != c or b==c and b != a or a==c and c != b) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}
