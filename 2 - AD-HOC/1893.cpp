#include <iostream>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    if ( b <= 2 and a >=0 ) {
        cout << "nova" << endl;
    }
    if (a < b and b <= 96 and b >= 3) {
        cout << "crescente" << endl;
    }
    if (b <= 100 and b >= 97) {
        cout << "cheia" << endl;
    } else if (a > b and b <= 96 and b >= 3) {
        cout << "minguante" << endl;
    }

    return 0;
}
