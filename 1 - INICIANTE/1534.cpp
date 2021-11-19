#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int N;

    while(1 == scanf("%d", &N)) {
        for(int i=1; i<=N; i++) {
            for(int j=1; j<=N; j++) {
                if(i+j == N+1) {
                    cout << 2;
                } else if (i==j) {
                    cout << 1;
                } else
                    cout << 3;
            }
            cout << endl;
        }

    }
    return 0;
}
