#include <iostream>
#include <iomanip>

using namespace std;

double mediaidade(int id) {
    int result = 0;
    result += id;

    return result;
}

int main() {
    int idade;
    double media, cont=0;

    cout << fixed << setprecision(2);

    while(1) {
        cin >> idade;

        if (idade>=0) {
            media += mediaidade(idade);
            cont ++;
        } else {
            double resultado;
            resultado = media/cont;
            cout << resultado << endl;
            break;
        }
    }
    return 0;
}
