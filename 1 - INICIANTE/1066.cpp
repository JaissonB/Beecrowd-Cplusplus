#include <iostream>

using namespace std;

int main () {
    int i,p=0,n=0,e=0,o=0,x;
    for (i = o; i < 5; i++) {
        cin >> x;
        if (x%2==0)
            e++;
        else
            o++;
        if (x>0)
            p++;
        else if (x<0)
            n++;
    }
    cout << e << " valor(es) par(es)" << endl;
    cout << o << " valor(es) impar(es)" << endl;
    cout << p << " valor(es) positivo(s)" << endl;
    cout << n << " valor(es) negativo(s)" << endl;

    return 0;
}
