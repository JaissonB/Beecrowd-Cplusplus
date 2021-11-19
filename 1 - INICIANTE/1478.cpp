#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int N;

    while(true) {
        cin >> N;
        if(N==0) {
            break;
        }
        for(int i=1; i<=N; i++) {
            printf("%3d", i);
            for(int j=i-1; j>=1; j--) {
                printf(" %3d", j);
            }
            for(int j=2; j<=N-i+1; j++) {
                printf(" %3d", j);
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
