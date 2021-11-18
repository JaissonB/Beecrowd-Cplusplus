#include <iostream>

using namespace std;

int calculo(int a, int b){
    int result = a*b;
return result;
}

int main() {
    int A, B, PROD;

    cin >> A >> B;

    PROD = calculo(A,B);

    cout << "PROD = " << PROD << endl;

    return 0;
}
