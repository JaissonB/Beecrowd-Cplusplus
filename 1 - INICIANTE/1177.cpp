#include <iostream>

using namespace std;

int main() {
    int N[1000];
    int T, cont=0;
    cin >> T;
    for (int i=0; i<1000; i++) {
        N[i] = cont;
        cont = cont+1;
        if (cont==T) {
            cont = 0;
        }
    }

    for (int i=0; i<1000; i++) {
        cout << "N[" << i << "] = "<< N[i] << endl;
    }
    return 0;
}
