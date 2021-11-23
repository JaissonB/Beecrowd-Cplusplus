#include <iostream>
#include <cmath>

using namespace std;

bool eh_primo (int num) {
    for (int i=3; i<=sqrt(num); i=i+2) {

        if (num%i==0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num, c;

    cin >> c;

    while (c) {
        cin >> num;
        if (num==2 or num%2 !=0 and eh_primo(num) == true) {
            cout << "Prime" << endl;
        } else {
            cout << "Not Prime" << endl;
        }
        c--;
    }
    return 0;
}
