#include <iostream>

using namespace std;

int main() {

    int decimal;
    string unidades[] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
           dezenas [] = {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
           centenas[] = {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
           response = "";

    cin >> decimal;

    if (decimal / 100) {
        response += centenas[decimal / 100 - 1];
        decimal = decimal - 100 * (decimal / 100);
    }
    if (decimal / 10) {
        response += dezenas[decimal / 10 - 1];
        decimal = decimal - 10 * (decimal / 10);
    }
    if (decimal) {
        response += unidades[decimal - 1];
    }
    cout << response << endl;

    return 0;
}
