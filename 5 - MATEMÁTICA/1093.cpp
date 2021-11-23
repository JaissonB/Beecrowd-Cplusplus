#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    double EV1, EV2, AT, D;
    double n1, n2, prob, aux;
    cout << fixed << setprecision(1);

    for(int i=2; i>0; i--) {

        cin >> EV1 >> EV2 >> AT >> D;

        n1 = ceil(EV1 / D);
        n2 = ceil(EV2 / D);

        if ( AT==3 ) {
            prob = n1 / (n1 + n2);
        } else {
            prob = (1-(pow(((6-AT)/AT),n1))) / (1-(pow(((6-AT)/AT),n1+n2)));
        }

        aux = prob*100;
        if (EV1==0 and EV2==0 and AT==0 and D==0) {
            i=0;
        } else {
            i++;
            cout << aux << endl;
        }
    }

    return 0;
}
