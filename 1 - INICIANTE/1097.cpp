#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int cont;

    for (int i = 1; i<=9; i=i+2) {
        for (int j = i + 6; j>=i+4 ; j=j-1) {
            cout << "I=" << i << " J=" << j << endl;
        }
    }

    return 0;
}
