#include <iostream>

using namespace std;

int main() {
    int X, Y, on=1;

    while (on) {
        if (X!=0 and Y!=0) {
            cin >> X >> Y;
            if (X>0 and Y>0) cout << "primeiro" << endl;
            if (X>0 and Y<0) cout << "quarto" << endl;
            if (X<0 and Y<0) cout << "terceiro" << endl;
            if (X<0 and Y>0) cout << "segundo" << endl;
        } else on=0;
    }
    return 0;
}
