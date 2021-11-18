#include <iostream>
#include <iomanip>

using namespace std;

double MEDIA(double a, double b){
    double nota1 = (a * 3.5) / 10;
    double nota2 = (b * 7.5) /10;

     double m = ((nota1 + nota2) * 10) / 11;
    return m;
}

int main() {

    double A, B, media;

    cout << fixed << setprecision(5);

    cin >> A >> B;

    media = MEDIA(A,B);

    cout << "MEDIA = " << media << endl;

    return 0;
}
