#include <iostream>

using namespace std;

int main() {
    int X, Y, on=1;

    while (on) {
        cin >> X >> Y;
        if (X>Y) cout << "Decrescente" << endl;
        if (Y>X) cout << "Crescente" << endl;
        if (X==Y) on=0;
    }

    return 0;
}
