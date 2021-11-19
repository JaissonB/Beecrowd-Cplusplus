#include <iostream>

using namespace std;

int main() {
    int x, aux=1, i;

    cin >>x;

    while(x) {
        for (i=aux; i<=aux+2; i++ ) {
            cout << i << " ";
        }
        aux=i+1;
        cout << "PUM" << endl;
        x--;
    }

    return 0;
}
