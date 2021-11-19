#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    while(x) {
        int stop=5, soma=0;
        while(stop) {
            if (x%2==0) {
                soma+=x;
                stop--;
            }
            x++;
        }
        cout << soma << endl;
        cin >> x;
    }
    return 0;
}
