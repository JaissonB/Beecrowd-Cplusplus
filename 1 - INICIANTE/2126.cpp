#include <iostream>

using namespace std;

int main() {
    string N1, N2;
    int cases = 1;

    while (cin >> N1) {
        int qtdSub = 0, pos = 0;
        cin >> N2;
        for (int i = 0; i < N2.size(); i++) {
            bool point = true;
            for (int j = i; j < i + N1.size(); j++) {
                if (N2[j] != N1[j-i]) {
                    point = false;
                    j = i + N1.size();
                }
            }
            if (point) {
                pos = i + 1;
                qtdSub++;
            }
        }
        cout << "Caso #" << cases << ":" << endl;
        if (qtdSub > 0) {
            cout << "Qtd.Subsequencias: " << qtdSub << endl;
            cout << "Pos: " << pos << endl << endl;
        } else {
            cout << "Nao existe subsequencia" << endl << endl;
        }
        cases++;
    }
    return 0;
}
