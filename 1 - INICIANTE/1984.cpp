#include <iostream>

using namespace std;

int main() {

    string numero, numeroInvertido = "";

    cin >> numero;

    for (int i = numero.size(); i > 0; i--) {
        numeroInvertido += numero[i-1];
    }

    cout << numeroInvertido << endl;

    return 0;
}
