#include <iostream>

using namespace std;

int main() {

    int n, cont=1;
    string sheldon, raj;
    cin >> n;

    while(n) {
        bool venceu=false;

        cin >> sheldon >> raj;
        cout << "Caso #" << cont << ": ";

        if(sheldon=="tesoura" && (raj=="papel" || raj=="lagarto")) venceu = true;
        else if (sheldon=="papel" && (raj=="pedra" || raj=="Spock")) venceu = true;
        else if (sheldon=="pedra" && (raj=="lagarto" || raj=="tesoura")) venceu = true;
        else if (sheldon=="lagarto" && (raj=="Spock" || raj=="papel")) venceu = true;
        else if (sheldon=="Spock" && (raj=="tesoura" || raj=="pedra")) venceu = true;
        if (venceu) cout << "Bazinga!" << endl;
        else if (sheldon==raj) cout << "De novo!" << endl;
        else cout << "Raj trapaceou!" << endl;
        n--;
        cont++;
    }

    return 0;
}
