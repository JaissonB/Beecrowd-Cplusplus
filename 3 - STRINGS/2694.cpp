#include <iostream>

using namespace std;

int main() {
    int N;
    string linha;
    cin >> N;
    cin.get();
    for(int i=0; i<N; i++) {
        getline(cin, linha);
        int num1 = (linha[2] - 48)*10 + (linha[3] - 48);
        int num2 = (linha[5] - 48)*100 + (linha[6] - 48)*10 + (linha[7] - 48);
        int num3 = (linha[11] - 48)*10 + (linha[12] - 48);
        cout << num1 + num2 + num3 << endl;
    }

    return 0;
}
