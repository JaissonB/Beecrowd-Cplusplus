#include <iostream>

using namespace std;

int fatorial(int N){
    int result=0;
    for (int i=N-1; i>1; i--){
        N = N*i;
    }
return N;
}

int main() {
    int N;
    cin >> N;

    cout << fatorial(N) << endl;
    return 0;
}
