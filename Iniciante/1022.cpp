#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct {
    int num;
    int den;
}RACIONAL;

int main(void) {
    RACIONAL r1, r2, soma, prod, sub, div, s;
    int fator, n, cima, baixo;
    char lixo;
    char operador;
    cin >> n;

    while(n){
        fator=2;
        cin >> r1.num; cin>> lixo >> r1.den;
        cin >> operador;
        cin >> r2.num; cin>> lixo >> r2.den;

        if(operador == '+'){
            cima = (r1.num * r2.den)+(r1.den * r2.num);
            baixo = (r1.den * r2.den);
        }else if(operador == '*'){
            cima = (r1.num * r2.num);
            baixo = (r1.den * r2.den);
        }else if(operador == '-'){
            cima = (r1.num * r2.den)-(r1.den * r2.num);
            baixo = (r1.den * r2.den);
        }else if(operador == '/'){
            cima = (r1.num * r2.den);
            baixo = (r1.den * r2.num);
        }
        cout << cima << "/" << baixo;
        n--;

        while(fator<=abs(cima) and fator<=abs(baixo)){
            if(abs(cima)%fator==0 and abs(baixo)%fator==0){
                cima=cima/fator;
                baixo=baixo/fator;
            }else fator++;
        }
        cout << " = " << cima << "/" << baixo<<endl;
    }

    return (0);
}
