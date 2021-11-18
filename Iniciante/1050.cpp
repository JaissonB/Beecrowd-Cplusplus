#include <iostream>

using namespace std;

string Est(int a) {
    string area;

    if (a==61) {
        area = "Brasilia";
    } else if (a==71) {
        area = "Salvador";
    } else if (a==11) {
        area = "Sao Paulo";
    } else if (a==21) {
        area = "Rio de Janeiro";
    } else if (a==32) {
        area = "Juiz de Fora";
    } else if (a==19) {
        area = "Campinas";
    } else if (a==27) {
        area = "Vitoria";
    } else if (a==31) {
        area = "Belo Horizonte";
    } else {
        area = "DDD nao cadastrado";
    }

    return area;
}

int main() {
    int DDD;

    cin >> DDD;

    cout << Est(DDD) << endl;

    return 0;
}
