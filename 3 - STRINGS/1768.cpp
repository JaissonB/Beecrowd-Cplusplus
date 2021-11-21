#include <iostream>

using namespace std;

int main() {
    int N, espaco, ast;

    while(cin >> N) {
        espaco = (N/2);
        ast = 1;
        for (int h=1; ast<=N; h++) {
            for (int i=1; i<=espaco; i++) {
                cout << " ";
            }
            for(int j=1; j<=ast; j++) {
                cout << "*";
            }
            cout << endl;
            espaco--;
            ast += 2;
        }
        espaco = (N/2 + N%2);
        ast = 1;
        for (int h=1; h<=2; h++) {
            for (int i=1; i<=espaco-1; i++) {
                cout << " ";
            }
            for(int j=1; j<=ast; j++) {
                cout << "*";
            }
            cout << endl;
            espaco--;
            ast += 2;
        }
        cout << endl;
    }

    return 0;
}
