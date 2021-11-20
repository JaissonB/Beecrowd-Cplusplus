#include <iostream>
#include <cmath>

using namespace std;

int k=1, cont=1, primos[3600];


int f(int n, int k) {
    if (n==1) {
        return 0;
    }
    k = primos[cont++];
    return ((f(n-1,k)+k)%n);
}

bool ehPrimo(int n) {
    int k;
    double s=sqrt(n);
    for(k=3; k<=s; ++k) {
        if((n%k)==0) {
            return false;
        }
    }
    return true;
}

int main() {
    int i,qtPrim=1,n;
    primos[1]=2;
    for(i=3 ; qtPrim < 3502; i+=2) {
        if(ehPrimo(i)) {
            primos[++qtPrim]=i;
        }
    }
    cin >> n;
    while(n != 0) {
        cont=1;
        cout << f(n,k)+1 << endl;
        cin >> n;
    }
    return 0;
}
