#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {

    double numero, arredondamento;
    while (cin >> numero >> arredondamento) {
        int parte_int =  floor(numero);
        double sobra = numero - parte_int;
        if (sobra > arredondamento) {
            cout << parte_int  + 1 << endl;
        } else {
            cout << parte_int << endl;
        }
    }

    return 0;
}
