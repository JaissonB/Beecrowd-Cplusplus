#include <iostream>

using namespace std;

int main() {
    int a, b, dig_a,dig_b, carry;
    cin >> a >> b;

    while(a!=0 or b!=0) {
        carry = 0;
        int cont = 0;
        while (a>0 or b>0) {
            dig_a = a % 10;
            dig_b = b % 10;
            carry = ((dig_a + dig_b) + carry) / 10;
            cont = cont + carry;
            a = a / 10;
            b = b / 10;
        }
        if (!cont) {
            cout << "No carry operation." << endl;
        } else {
            if (cont==1) {
                cout << cont << " carry operation." << endl;
            } else {
                cout << cont << " carry operations." << endl;
            }
        }
        cin >> a >> b;
    }
    return 0;
}
