#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    if ( a < b and a < c and b < c ) {
        cout << a <<endl<< b <<endl<< c << endl;
    } else if ( a < b and a < c and c < b ) {
        cout << a <<endl<< c <<endl<< b << endl;
    } else if ( b < c and b < a and a < c ) {
        cout << b <<endl<<a<<endl<<c<< endl;
    } else if ( b < c and b < a and c < a ) {
        cout << b <<endl<<c<<endl<<a<< endl;
    } else if ( c < a and c < b and a < b ) {
        cout << c << endl << a << endl << b << endl;
    } else if ( c < a and c < b and b < a ) {
        cout << c << endl << b << endl << a << endl;
    }

    cout << endl << a << endl << b << endl << c << endl;

    return 0;
}
