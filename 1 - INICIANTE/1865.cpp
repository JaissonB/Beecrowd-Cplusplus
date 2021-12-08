#include <iostream>

using namespace std;

int main() {
    int loop, newton;
    string name;
    cin >> loop;

    while (loop) {
        cin >> name;
        cin >> newton;

        if (name == "Thor") {
            cout << "Y" << endl;
        } else cout << "N" << endl;
        loop--;
    }
    return 0;
}
