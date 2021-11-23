#include <iostream>
#include <queue>

using namespace std;

int main() {
    int val;
    cin >> val;
    while (val!=0) {
        queue <int> fila;

        for(int i=1; i<=val; i++) {
            fila.push(i);
        }
        cout << "Discarded cards:";

        while(true) {
            if(fila.size()==1) {
                cout<<endl;
                cout << "Remaining card: " << fila.front() << endl;
                break;
            } else {
                if(fila.size()>1) {
                    cout << " " << fila.front();
                    fila.pop();
                    fila.push(fila.front());
                    fila.pop();
                    if(fila.size() > 1)
                        cout << ",";
                } else break;
            }
        }
        cin >> val;
    }

    return 0;
}
