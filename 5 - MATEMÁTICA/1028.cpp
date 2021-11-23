#include <iostream>

using namespace std;

int main() {
    int n, f1, f2, resto=0, maior, menor, mdc;
    cin >> n;

    while(n) {
        cin >> f1 >> f2;
        if(f1>f2) {
            maior=f1;
            menor=f2;
        } else {
            maior=f2;
            menor=f1;
        }
        if(maior%menor==0) {
            mdc=menor;
        } else {
            while(1) {
                resto= maior%menor;
                if(resto==0) {
                    mdc=menor;
                    break;
                } else {
                    maior=menor;
                    menor=resto;
                }
            }
        }
        cout<<mdc<<endl;
        n--;
    }
    return 0;
}
