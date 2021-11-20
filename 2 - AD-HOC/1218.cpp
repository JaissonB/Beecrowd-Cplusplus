#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int ParesIguais=0, caso=1;
    string linha;
    int M=0, F=0, Pares=0, N;
    char FM;

    cin >> N;
    cin.get();

    while (getline(cin,linha)) {
        stringstream dados(linha);

        while (dados >> Pares and dados >> FM) {
            if ( Pares == N )
                ParesIguais ++;
            if ( Pares == N and FM == 'M')
                M ++;
            if ( Pares == N and FM == 'F')
                F ++;
        }
        if ( caso>1)
            cout << endl;
        cout << "Caso " << caso << ":" << endl;
        cout << "Pares Iguais: " << ParesIguais << endl;
        cout << "F: " << F << endl;
        cout << "M: " << M << endl;

        cin >> N;
        cin.get();
        ParesIguais=0;
        M=0;
        F=0;
        Pares=0;
        caso ++;
    }

    return 0;
}
