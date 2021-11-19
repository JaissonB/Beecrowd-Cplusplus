#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    for (double i=0; i<=2; i=i+0.2) {
        int cont = 1;
        for (double j=i+1; cont<=3; j=j+1) {
            cout << "I=" << i << " J=" << j << endl;
            cont =cont + 1;
        }
    }

    return 0;
}
