#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int hPulo, qntCanos;
    string response;

    cin >> hPulo >> qntCanos;
    int sequencia[qntCanos];
    cin >> sequencia[0];

    for (int i = 1; i < qntCanos; i++) {
        cin >> sequencia[i];

        if (abs(sequencia[i] - sequencia[i - 1]) > hPulo) {
            response = "GAME OVER";
            i = qntCanos;
        } else response = "YOU WIN";
    }
    cout << response << endl;

    return 0;
}
