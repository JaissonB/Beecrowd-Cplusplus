#include <iostream>

using namespace std;

int calculaTempo (int a){
    int result = a*2;
return result;
}

int main() {
    int distancia, tempo;
    cin >> distancia;

    tempo = calculaTempo(distancia);

    cout << tempo << " minutos" << endl;

    return 0;
}
