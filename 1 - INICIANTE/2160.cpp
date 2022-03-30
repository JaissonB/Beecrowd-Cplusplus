#include <iostream>

using namespace std;

int main() {
    string linha;

    getline(cin, linha);

    if (linha.size() <= 80) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
