#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {

    string  nome;
    double n1, soma=0;
    int cont=0;

    while (getline(cin,nome)) {
        cin >> n1;
        cin.get();
        cont++;
        soma=soma+n1;
    }
    cout << fixed << setprecision(1) << soma/cont << endl;

    return 0;
}
