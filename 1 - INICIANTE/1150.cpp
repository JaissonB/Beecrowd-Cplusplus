#include <iostream>

using namespace std;

int main() {
    int X, Z, calculo, onoff = 1, cont=1, contX;

    cin >> X;
    contX = X+1;
    while (onoff) {
        cin >> Z;
        if (Z>X) {
            while (onoff) {
                X += contX;
                cont ++;
                contX++;
                if (X>Z) {
                    cout << cont << endl;
                    onoff=0;
                }
            }
        }
    }
    return 0;
}
