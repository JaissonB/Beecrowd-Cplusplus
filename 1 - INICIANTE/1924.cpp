#include <iostream>
#include <string>

using namespace std;

int main () {
    int loop;
    string curso;

    cin >> loop;
    cin.get();
    while (loop) {
        getline(cin, curso);
        loop --;
    }
    cout << "Ciencia da Computacao" << endl;
    return 0;
}
