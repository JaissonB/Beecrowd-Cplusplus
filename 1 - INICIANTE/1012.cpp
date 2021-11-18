#include <iostream>
#include <iomanip>

using namespace std;

double calculaTriangulo(double a, double b, double c){
    double result = (a*c) /2;
return result;
}

double calculaCirculo(double a, double b, double c){
    const double Pi=3.14159;
    double result = (c*c)*Pi;
return result;
}

double calculaTrapezio(double a, double b, double c){
    double result = (( a+b ) * c) / 2;
return result;
}

double calculaQuadrado(double a, double b, double c){
    double result = b*b;
return result;
}

double calculaRetangulo(double a, double b, double c){
    double result = a*b;
return result;
}

int main() {
    double A,B,C, TRI, CIR, TRA, QUA, RET;

    cout << fixed << setprecision(3);

    cin >> A>> B >> C;

    TRI = calculaTriangulo(A,B,C);
    CIR = calculaCirculo(A,B,C);
    TRA = calculaTrapezio(A,B,C);
    QUA = calculaQuadrado(A,B,C);
    RET = calculaRetangulo(A,B,C);

    cout << "TRIANGULO: " << TRI << endl;
    cout << "CIRCULO: " << CIR << endl;
    cout << "TRAPEZIO: " << TRA << endl;
    cout << "QUADRADO: " << QUA << endl;
    cout << "RETANGULO: " << RET << endl;

    return 0;
}
