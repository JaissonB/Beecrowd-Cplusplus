#include <iostream>

using namespace std;

int main() {
    int N, aux, H;
    bool response = true;
    string ultRelevo = "";

    cin >> N;
    cin >> H;

    do {
        aux = H;
        cin >> H;
        if  (((ultRelevo == "P") && H >= aux) ||
             ((ultRelevo == "V") && H <= aux) ||
             ((ultRelevo == "") && H == aux))
             response = false;
        if (H > aux) ultRelevo =  "P";
        else if (H < aux) ultRelevo =  "V";
        N--;
    } while(N-1);
    cout << response << endl;

    return 0;
}
