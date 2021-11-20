#include <bits/stdc++.h>

using namespace std;

int entrada;

int josephus(int n, int k) {
    if(n == 1) return 0;
    if(entrada == n) return (josephus(n-1,k) + n) % n;
    return (josephus(n-1,k) + k) % n;
}

int main() {
    int n, m, josefo;
    while(cin >> n) {
        if(n==0)
            break;
        m=0;
        josefo=0;
        while(josefo!=13) {
            m++;
            entrada = n;
            josefo = (josephus(n,m)+2);
        }
        cout << m<< endl;
    }
    return 0;
}
