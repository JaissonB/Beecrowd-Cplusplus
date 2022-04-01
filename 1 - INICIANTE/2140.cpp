#include <iostream>
#include <vector>

using namespace std;

int main() {
    int valorCompra, valorPago, notas[6] = {2,5,10,20,50,100}, initJ = 0;
    vector<int> trocoTrue(0, 200);
    for (int i = 0; i < 5; i++) {
        for (int j = initJ; j < 6; j++) {
            trocoTrue.insert(trocoTrue.begin(), notas[i] + notas[j]);
        }
        initJ++;
    }
    cin >> valorCompra >> valorPago;

    while (valorCompra != 0 || valorPago != 0) {
        int diff = valorPago - valorCompra;
        bool verify = false;
        for (int h = 0; h < trocoTrue.size(); h ++) {
            if (trocoTrue[h] == diff) {
                verify = true;
                h = trocoTrue.size();
            }
        }
        if (verify) cout << "possible" << endl;
        else cout << "impossible" << endl;
        cin >> valorCompra >> valorPago;
    }

    return 0;
}
