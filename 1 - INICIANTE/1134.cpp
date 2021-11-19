#include <iostream>

using namespace std;

int main() {
    int x, alcool=0, gasolina=0, diesel=0;

    while(cin >> x) {
        if(x==1) alcool++;
        else if(x==2) gasolina++;
        else if(x==3) diesel++;
        else if(x==4) {
            cout << "MUITO OBRIGADO" << endl;
            cout << "Alcool: " << alcool << endl;
            cout << "Gasolina: " << gasolina << endl;
            cout << "Diesel: " << diesel << endl;
            break;
        } else {};
    }

    return 0;
}
