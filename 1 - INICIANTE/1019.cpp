#include <iostream>

using namespace std;

int horas(int a){
    int result = a/3600;
return result;
}
int minutos(double a, int b){
    double result = ((a/3600)-b)*60;
return result;
}
int segundos(int a, int b, int c){
    double result = a - c * 3600 - b * 60;
return result;
}

int main() {
    int tempo;
    cin >> tempo;

    cout << horas(tempo) << ":" << minutos(tempo,horas(tempo))
    << ":" << segundos(tempo,minutos(tempo,horas(tempo)),horas(tempo))<< endl;

    return 0;
}
