#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double X, Y, N, divisao;
    cin >> N;
    cout<< fixed << setprecision(1);
    while (N) {
        cin >> X >> Y;
        if (Y==0) {
            cout << "divisao impossivel" << endl;
        } else {
            divisao = X / Y;
            cout << divisao << endl;
        }
        N--;
    }
    return 0;
}
