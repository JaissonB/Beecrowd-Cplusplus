#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int loop, tempo, ano;
    string acdc;

    cin >> loop;

    while (loop--) {
        acdc = "D.C.";
        cin >> tempo;
        ano = 2015 - tempo;
        if (ano <= 0) {
            acdc = "A.C.";
            ano = abs(ano) + 1;
        }
        cout << ano << " " << acdc << endl;
    }

    return 0;
}
