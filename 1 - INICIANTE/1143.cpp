#include <iostream>

using namespace std;

int main() {
    int x;
    int a=1, b=1, c=1;

    cin >> x;

    while(x) {
        cout << a << " " << b << " " << c << endl;
        a++;
        b=a*a;
        c=a*b;
        x--;
    }

    return 0;
}
