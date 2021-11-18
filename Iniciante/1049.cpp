#include <iostream>

using namespace std;

int main() {
    string nivel1, nivel2, nivel3;
    cin >> nivel1 >> nivel2 >> nivel3;

    if (nivel1 == "vertebrado") {
        if (nivel2 == "ave") {
            if (nivel3 == "carnivoro") {
                cout << "aguia" << endl;
            } else
                cout << "pomba" << endl;

        } else if (nivel2 == "mamifero")
            if (nivel3 == "onivoro") {
                cout << "homem" << endl;
            } else
                cout << "vaca" << endl;

    } else if (nivel1 == "invertebrado")
        if (nivel2 == "inseto") {
            if (nivel3 == "hematofago") {
                cout << "pulga" << endl;
            } else
                cout << "lagarta" << endl;

        } else if (nivel2 == "anelideo")
            if (nivel3 == "hematofago") {
                cout << "sanguessuga" << endl;
            } else
                cout << "minhoca" << endl;

    return 0;
}
