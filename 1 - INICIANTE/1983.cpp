#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int loop, RA, RAmelhorAluno;
    float nota, maiorNota = 0;

    cout << fixed << setprecision(1);

    cin >> loop;

    while (loop--) {
        cin >> RA >> nota;
        if (nota > maiorNota) {
            maiorNota = nota;
            RAmelhorAluno = RA;
        }
    }
    if (maiorNota < 8) cout << "Minimum note not reached" << endl;
    else cout << RAmelhorAluno << endl;

    return 0;
}
