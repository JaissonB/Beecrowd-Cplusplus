#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int n, PA, PB;
    double GA, GB;

    cout << fixed << setprecision(1);
    cin >> n;

    while(n) {
        int anos=0;
        cin >> PA >> PB >> GA >> GB;
        while(PA<=PB) {
            PA = PA+(PA*GA)/100;
            PB = PB+(PB*GB)/100;
            anos++;
            if (anos > 100) {
                cout << "Mais de 1 seculo." << endl;
                break;
            }
        }
        if (anos<=100) {
            cout << anos << " anos." << endl;
        }
        n--;
    }

    return 0;
}
