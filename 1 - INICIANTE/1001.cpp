#include <iostream>

using namespace std;

int soma(int a, int b){
    int r = a+b;
    return r;
}

int main() {

    int A, B, X;

    cin >> A >> B;

    X = soma(A,B);

    cout << "X = " << X << endl;

    return 0;
}
