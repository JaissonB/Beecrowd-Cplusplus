#include <iostream>

using namespace std;

int main() {

    int horaPartida, t, f, horaChegada;

    cin >> horaPartida >> t >> f;
    horaPartida = horaPartida*60;
    t=t*60;
    f=f*60;

    horaChegada= ((horaPartida)+(t)+(f))/60;

    if ( horaChegada > 23 ) {
        horaChegada = horaChegada -24;
        cout << horaChegada << endl;
    } else if ( horaChegada < 0) {
        horaChegada = 24 - horaChegada*-1;
        cout << horaChegada << endl;
    } else {
        cout << horaChegada << endl;
    }

    return 0;
}
