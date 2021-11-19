#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    while(n) {
        if (n==1) {
            cout << "Ho!" << endl;
            break;
        } else cout << "Ho ";
        n--;
    }

    return 0;
}
