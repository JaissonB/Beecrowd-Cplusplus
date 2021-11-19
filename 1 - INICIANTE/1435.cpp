#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    int N, menor;

    while(true) {
        cin >> N;
        if(N==0) {
            break;
        }
        for(int i=1; i<=N; i++) {
            for(int j=1; j<=N; j++) {
                menor = i;
                if(j<menor)
                    menor=j;
                if(N-i+1<menor)
                    menor=N-i+1;
                if(N-j+1<menor)
                    menor=N-j+1;
                printf("%3d", menor);
                if(j<N) {
                    cout << " ";
                } else cout << endl;
            }
        }
        cout << endl;
    }

    return 0;
}
