#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    cout << fixed << setprecision(1);

    double N1,N2,N3,N4,media1,Nexame,mediafinal;

    cin >> N1 >> N2 >> N3 >> N4;

    media1 = N1*2/10 + N2*3/10 + N3*4/10 + N4/10;

    cout << "Media: " << media1 << endl;

    if ( media1 >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if ( media1 < 5.0) {
        cout << "Aluno reprovado." << endl;
    } else if ( media1 <= 6.9 and media1 >= 5.0 ) {
        cout << "Aluno em exame." << endl;

        cin >> Nexame;

        mediafinal = (Nexame + media1) / 2;

        cout << "Nota do exame: " << Nexame << endl;

        ( mediafinal >= 5.0);
        cout << "Aluno aprovado." << endl;
        cout << "Media final: " << mediafinal << endl;
    } else if ( mediafinal <= 4.9 ) {
        cout << "Aluno reprovado." << endl;
        cout << "Media final: " << mediafinal << endl;
    }

    return 0;
}
