#include <iostream>

using namespace std;

int calculaN100(int a){
    int result = a / 100;
return result;
}
int calculaN50(int a, int b){
    int result = a % 100 / 50;
return result;
}
int calculaN20(int a){
    int result = a % 100 % 50 / 20;
return result;
}
int calculaN10(int a){
    int result = a % 100 % 50 % 20 / 10;
return result;
}
int calculaN5(int a){
    int result = a % 100 % 50 % 20 % 10 / 5;
return result;
}
int calculaN2(int a){
    int result = a%100%50%20%10%5/2;
return result;
}
int calculaN1(int a){
    int result = a%100%50%20%10%5%2/1;
return result;
}


int main() {
    int valor, n100, n50, n20, n10, n5, n2, n1;
    cin >> valor;

    n100 = calculaN100(valor);
    n50 = calculaN50(valor,n100);
    n20 = calculaN20(valor);
    n10 = calculaN10(valor);
    n5 = calculaN5(valor);
    n2 = calculaN2(valor);
    n1 = calculaN1(valor);

    cout << valor << endl;
    cout << n100 << " nota(s) de R$ 100,00" << endl;
    cout << n50 << " nota(s) de R$ 50,00" << endl;
    cout << n20 << " nota(s) de R$ 20,00" << endl;
    cout << n10 << " nota(s) de R$ 10,00" << endl;
    cout << n5 << " nota(s) de R$ 5,00" << endl;
    cout << n2 << " nota(s) de R$ 2,00" << endl;
    cout << n1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}
