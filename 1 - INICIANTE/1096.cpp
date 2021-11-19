#include <iostream>

using namespace std;

int main() {
    int i, j;

    for (i=1; i<=9; i=i+2) {
        for (j=7; j>=5; j=j-1) {
            cout << "I=" << i << " J=" << j << endl;
        }
    }

    return 0;
}
