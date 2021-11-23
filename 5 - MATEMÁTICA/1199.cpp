#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    string linha;
    cin >> linha;
    while (linha[0] != '-') {
        if (linha[1] == 'x') {
            cout << strtol(linha.c_str(),NULL,16) << endl;
        } else {
            cout <<"0x" << uppercase << hex << atoi(linha.c_str()) << dec << endl;
        }
        cin >> linha;
    }
    return 0;
}
