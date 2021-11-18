#include <iostream>

using namespace std;

int difProduto(int A, int B, int C, int D){

    int DIFERENCA = (A * B - C * D);

return DIFERENCA;
}

int main() {
    int a, b, c, d, resultado;

    cin >> a >> b >> c >> d;

    resultado = difProduto(a,b,c,d);

    cout << "DIFERENCA = " << resultado<< endl;

    return 0;
}
