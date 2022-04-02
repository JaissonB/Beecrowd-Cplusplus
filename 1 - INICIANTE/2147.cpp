#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    int N;
    string P;
    double result, Pl;

    cout << fixed << setprecision(2);

    cin >> N;

    while (N) {
        cin >> P;
        Pl = P.size();
        result = Pl / 100;
        cout << result << endl;
        N--;
    }

    return 0;
}
