#include <iostream>

using namespace std;

int calculaMaior(int a, int b, int c){
    if (a > b and a > c){
        return a;
    }if (b > a and b > c){
        return b;
    }if (c > a and c > b){
        return c;
    }
}

int main() {
    int A, B, C, maior;

    cin >> A >> B >> C;

    maior = calculaMaior(A,B,C);

    cout << maior << " eh o maior" << endl;

return 0;
}
