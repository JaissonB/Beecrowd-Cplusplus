#include <iostream>

using namespace std;

int main() {

    string entrada;
    int numero = 0;

    for (int i = 0; i < 3; i++) {
        cin >> entrada;
        if (entrada == "caw") {
            cin >> entrada;
            cout << numero << endl;
            numero = 0;
        } else {
            if (entrada == "***") numero += 7;
            if (entrada == "**-") numero += 6;
            if (entrada == "*-*") numero += 5;
            if (entrada == "*--") numero += 4;
            if (entrada == "-**") numero += 3;
            if (entrada == "-*-") numero += 2;
            if (entrada == "--*") numero += 1;
            if (entrada == "---") numero += 0;
            i--;
        }
    }

    return 0;
}
