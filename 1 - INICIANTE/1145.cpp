#include <iostream>

using namespace std;

int main() {
    int x, y, seq, i, ini=1;
    bool fim=true;

    cin >> x >> y;
    seq=x;

    while(fim) {
        for(i=ini; i<=seq; i++) {
            cout << i;
            if(i!=seq) {
                cout << " ";
            } else {
                cout << endl;
            }
            if (i==y) {
                fim=false;
            }
        }
        ini = seq+1;
        seq = seq+x;
        if (seq>y) {
            seq=y;
        }
    }
    return 0;
}
