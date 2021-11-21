#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string alimentos;
bool cheater;

void come(string refeicao ) {
    for (int i=0; i<refeicao.size(); i++) {
        int pos=alimentos.find(refeicao[i]);
        if (pos <0) {
            cheater=true;
            return;
        } else {
            alimentos.erase(pos,1);
        }
    }
    return;
}

int main() {
    int N;
    string cafe,almoco;
    cin >> N;
    cin.get();

    while (N--) {
        cheater = false;
        getline (cin,alimentos);
        getline (cin,cafe);
        come (cafe);
        getline (cin,almoco);
        come(almoco);

        if (cheater==false) {
            sort (alimentos.begin(),alimentos.end());
            cout << alimentos << endl;
        } else {
            cout << "CHEATER" << endl;
        }
    }
    return 0;
}
