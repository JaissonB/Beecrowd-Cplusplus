#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int loop, numeroProduto;
    float valorTotal = 0, quantidade;
    cout << fixed << setprecision(2);

    cin >> loop;

    while (loop) {
        cin >> numeroProduto >> quantidade;
        if (numeroProduto == 1001) valorTotal = valorTotal + quantidade * 1.50;
        else if (numeroProduto == 1002) valorTotal = valorTotal + quantidade * 2.50;
        else if (numeroProduto == 1003) valorTotal = valorTotal + quantidade * 3.50;
        else if (numeroProduto == 1004) valorTotal = valorTotal + quantidade * 4.50;
        else if (numeroProduto == 1005) valorTotal = valorTotal + quantidade * 5.50;
        loop--;
    }
    cout << valorTotal << endl;

    return 0;
}
