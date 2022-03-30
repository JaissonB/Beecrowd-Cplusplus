#include <iostream>

using namespace std;

int main() {

    string text;

    getline(cin, text);

    if (text.size() <= 140) cout << "TWEET" << endl;
    else cout << "MUTE" << endl;

    return 0;
}
