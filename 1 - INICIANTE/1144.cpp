#include <iostream>

using namespace std;

int main() {
    int x;
    int a=1, b=1, c=1;

    cin >> x;

    cout << a << " " << b << " " << c << endl;

    while(x) {
        b++;
        c++;
        cout << a << " " << b << " " << c << endl;

        if(x==1) break;
        a++;
        b=a*a;
        c=a*b;

        cout << a << " " << b << " " << c << endl;
        x--;
    }

    return 0;
}
