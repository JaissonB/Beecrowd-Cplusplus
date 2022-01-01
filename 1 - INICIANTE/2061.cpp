#include <iostream>

using namespace std;

int main() {

    int inicio, loop;
    string acao;

    cin >> inicio >> loop;

    while (loop--) {
        cin >> acao;

        if (acao == "fechou") {
            inicio++;
        } else inicio--;
    }
    cout << inicio << endl;

    return 0;
}
