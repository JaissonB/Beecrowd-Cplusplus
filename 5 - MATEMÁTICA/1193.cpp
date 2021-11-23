#include <bits/stdc++.h>
#include <bitset>

using namespace std;

void bin_dec(string val) {
    cout << strtol(val.c_str(),NULL,2) << " ";
    cout << "dec" << endl;
}

void bin_hex(string val) {
    cout << hex << strtol(val.c_str(),NULL,2)<< " ";
    cout << "hex" << endl;
}

void dec_bin(string val) {
    int x,div, n;
    n = atoi(val.c_str());
    for (div=1; div<=n; div*=2);
    div = div/2;
    while(div>0) {
        x = n / div;
        cout << x;
        n = n % div;
        div = div/2;
    }
    cout << " bin" << endl;
}

void dec_hex(int val) {
    cout << hex << val << " ";
    cout << "hex" << endl;
}

void hex_bin(string val) {
    int n = strtol(val.c_str(),NULL,16);
    int x,div;
    for (div=1; div<=n; div*=2);
    div = div/2;
    while(div>0) {
        x = n / div;
        cout << x;
        n = n % div;
        div = div/2;
    }
    cout << " bin" << endl;
}

void hex_dec(string val) {
    int n;
    istringstream(val) >> hex >> n;
    cout << dec << n << " dec" << endl;
}

int main() {
    string valor, type;
    long int val, N, cont = 1;;
    cin >> N;

    while(N--) {
        cin >> valor >> type;

        val = atoi(valor.c_str());
        if(type == "bin") {
            cout << "Case " << dec << cont << ":" << endl;
            bin_dec(valor);
            bin_hex(valor);
            cont++;
        } else if(type == "dec") {
            cout << "Case " << dec << cont << ":" << endl;
            dec_hex(val);
            dec_bin(valor);
            cont++;
        } else if(type == "hex") {
            cout << "Case " << dec << cont << ":" << endl;
            hex_dec(valor);
            hex_bin(valor);
            cont++;
        }

        cout << endl;
    }

    return 0;
}
