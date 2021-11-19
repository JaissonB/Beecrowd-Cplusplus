#include <iostream>

using namespace std;

int main(){
    int n, x, nivel;

    while(cin>>n) {
        int aux=0;
        for(int i=0; i<n; i++) {
            cin >> x;
            if(x>aux){
                aux=x;
            }
        }
        if (aux<10) nivel=1;
        else if(aux>=10 && aux<20) nivel=2;
        else if(aux>=20) nivel=3;
        cout << nivel << endl;
    }

    return 0;
}
